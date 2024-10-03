/*********************************************************************
 * Filename   :  uart_regs.sv
 * Date       :  13-05-2023
 * Updated    :  20-06-2023
 * Author     :        
 * Adopted from uart.sv by Dr. Muhammad Tahir
 
 * Description:  Uart Register updates
 *********************************************************************/

/*`ifndef VERILATOR
`include "../../defines/uart_defs.svh"
`else*/
`include "uart_defs.svh"
//`endif


module uart_regs ( 
    input  logic                                   rst_n,                    // reset
    input  logic                                   clk,                      // clock              
    input  logic                                   uart_sel_i,

    // Interrupt signal from Uart
    output logic                                   irq_o,
	
    // Dbus to UART module interface
    input wire type_dbus2peri_s                    dbus2uart_i,              
    output type_peri2dbus_s                        uart2dbus_o,

    // Signals from and to FIFO
    input  logic                                   rx_fifo_empty_i,
    input  logic                                   tx_fifo_full_i,
    input  logic [7:0]                             rx_fifo_data_i,
    output logic                                   rx_fifo_read_o,
    output logic                                   tx_fifo_write_o,
    output logic [7:0]                             tx_data_i,

    // Signals from and to datapath
    input  logic                                   rx_fifo_mark_i,
    input  logic                                   tx_fifo_mark_i,
    output logic [2:0]                             rx_watermark_o,
    output logic [2:0]                             tx_watermark_o,
    output logic                                   tx_en_o,
    output logic                                   rx_en_o,
    output logic                                   two_stop_bits_o,
    output logic [15:0]                            baud_rate_o
);

	// Local sinals for IO and internal use
    logic                                   rx_fifo_empty;
    logic                                   tx_valid_ff, tx_valid_next;
	logic [7:0]                             uart_reg_tx_ff, uart_reg_tx_next;
    logic [4:0]                             uart_reg_txctrl_ff, uart_reg_txctrl_next;
    logic [3:0]                             uart_reg_rxctrl_ff, uart_reg_rxctrl_next;
    logic [1:0]                             uart_reg_int_en_ff, uart_reg_int_en_next;
    logic [1:0]                             uart_reg_int_pend_ff, uart_reg_int_pend_next;
    logic [15:0]                            uart_reg_baud_ff, uart_reg_baud_next;
   
    // Register address decoding signals
    logic                                   tx_reg_wr_flag;
    logic                                   txctrl_reg_wr_flag;
    logic                                   rxctrl_reg_wr_flag;
    logic                                   int_en_reg_wr_flag; 
    logic                                   baud_reg_wr_flag;

    // Signal definitions for Dbus interface
    logic [3:0]                             reg_addr;
    logic                                   reg_rd_req;
    logic                                   reg_wr_req;
    logic [`XLEN-1:0]                       reg_r_data; 
    logic [`XLEN-1:0]                       reg_w_data;

//================================= Dbus interface ==================================//
type_peri2dbus_s                      uart2dbus_ff;

// Signal interface to Wishbone bus
assign reg_addr   = type_uart_regs_e'(dbus2uart_i.addr[5:2]);
assign reg_w_data = dbus2uart_i.w_data[15:0];
assign reg_rd_req = !dbus2uart_i.w_en && dbus2uart_i.req && uart_sel_i;
assign reg_wr_req = dbus2uart_i.w_en  && dbus2uart_i.req && uart_sel_i;

// UART synchronous read operation 
always_ff @(posedge clk) begin  
    uart2dbus_ff <= '0;
    if ((reg_wr_req | reg_rd_req) &  ~uart2dbus_ff.ack) begin
        uart2dbus_ff.ack <= 1'b1;
        if (reg_rd_req)
            uart2dbus_ff.r_data <= reg_r_data;         
    end  
end  

// Response signals to dbus 
assign uart2dbus_o.r_data = (reg_addr == UART_RX_DATA_R)? reg_r_data : uart2dbus_ff.r_data;
assign uart2dbus_o.ack = uart2dbus_ff.ack;


// UART interrupt generation
assign irq_o  = |(uart_reg_int_pend_ff & uart_reg_int_en_ff);

//delaying rx fifo empty flag by one cycle so valid data does not get discarded by reader
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) 
        rx_fifo_empty <= 1'b1;
    else
        rx_fifo_empty <= rx_fifo_empty_i;
end

//================================= UART register read operations ==================================//
always_comb begin
    reg_r_data  = '0; 

    if(reg_rd_req) begin
        case (reg_addr)
            // UART data receive and transmit registers
            UART_TX_DATA_R   : reg_r_data = {tx_fifo_full_i,  31'b0};
            UART_RX_DATA_R   : reg_r_data = {rx_fifo_empty, 23'b0, rx_fifo_data_i};

            // UART tx and rx control registers
            UART_TX_CTRL_R   : reg_r_data = {13'b0, uart_reg_txctrl_ff[4:2],
                                               14'b0, uart_reg_txctrl_ff[1:0]};
            UART_RX_CTRL_R   : reg_r_data = {13'b0, uart_reg_rxctrl_ff[3:1],
                                               15'b0, uart_reg_rxctrl_ff[0]};

            // UART interrupt enable and pending registers
            UART_INT_EN_R   : reg_r_data = {30'b0, uart_reg_int_en_ff};
            UART_INT_PEND_R : reg_r_data = {30'b0, uart_reg_int_pend_ff};
            
            // UART baud rate configuration register
            UART_BAUD_R     : reg_r_data = {16'b0, uart_reg_baud_ff};

            default         : reg_r_data = '0;
        endcase // reg_addr_i
    end
end

//============================ UART register wr-select signals ===========================//
always_comb begin
    tx_reg_wr_flag     = 1'b0;
    txctrl_reg_wr_flag = 1'b0;
    rxctrl_reg_wr_flag = 1'b0;
    int_en_reg_wr_flag = 1'b0;
    baud_reg_wr_flag   = 1'b0;

    // Register write flag evaluation
    if(reg_wr_req && ~uart2dbus_ff.ack) begin
        case (reg_addr)
            // UART data receive and trnsmit registers
            UART_TX_DATA_R   : tx_reg_wr_flag     = 1'b1;
            UART_RX_DATA_R   : begin    end // Read only register
            
            // UART tx and rx control registers
            UART_TX_CTRL_R   : txctrl_reg_wr_flag = 1'b1;
            UART_RX_CTRL_R   : rxctrl_reg_wr_flag = 1'b1;

            // UART interrupt enable and pending register
            UART_INT_EN_R   : int_en_reg_wr_flag = 1'b1;
            UART_INT_PEND_R : begin    end // Read only register

            // UART baud rate configuration register
            UART_BAUD_R     : baud_reg_wr_flag   = 1'b1;

            default         : begin    end
        endcase // reg_addr
    end
end

//============================ UART register write operations ============================//
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) 
    begin
        uart_reg_tx_ff       <= 8'h4A;
        tx_valid_ff          <= 1'b0;
        uart_reg_txctrl_ff   <= 5'h00;  
        uart_reg_rxctrl_ff   <= 4'h0; 
        uart_reg_int_en_ff   <= 2'b00;
        uart_reg_int_pend_ff <= 2'b00;   
        uart_reg_baud_ff     <= 16'h10;
    end 
    else 
    begin
        uart_reg_tx_ff       <= uart_reg_tx_next;
        tx_valid_ff          <= tx_valid_next;
        uart_reg_txctrl_ff   <= uart_reg_txctrl_next;
        uart_reg_rxctrl_ff   <= uart_reg_rxctrl_next;
        uart_reg_int_en_ff   <= uart_reg_int_en_next;
        uart_reg_int_pend_ff <= uart_reg_int_pend_next;
        uart_reg_baud_ff     <= uart_reg_baud_next;
    end
end

// ----------------------------
// Update UART Next registers 
// ----------------------------

// Update UART tx data register 
// ----------------------------
always_comb begin 
    if (tx_reg_wr_flag) begin
        uart_reg_tx_next = reg_w_data[7:0]; 
        tx_valid_next    = 1'b1;
    end else begin                         
        uart_reg_tx_next = uart_reg_tx_ff; 
        tx_valid_next    = 1'b0;
    end       
end

// Update UART tx control register 
// ----------------------------
always_comb begin 
    if (txctrl_reg_wr_flag) begin
        uart_reg_txctrl_next = {reg_w_data[18:16],reg_w_data[1:0]};          
    end else begin                         
        uart_reg_txctrl_next = uart_reg_txctrl_ff;         
    end       
end

// Update UART rx control register 
// ----------------------------
always_comb begin 
    if (rxctrl_reg_wr_flag) begin
        uart_reg_rxctrl_next = {reg_w_data[18:16],reg_w_data[0]};         
    end else begin                         
        uart_reg_rxctrl_next = uart_reg_rxctrl_ff;         
    end       
end

// Update UART interrupt enable register 
// -----------------------------------
always_comb begin 
    if (int_en_reg_wr_flag) begin
        uart_reg_int_en_next = reg_w_data[1:0];          
    end else begin                         
        uart_reg_int_en_next = uart_reg_int_en_ff;         
    end       
end

// Update UART Interrupt pending register 
// ----------------------------
always_comb begin
    uart_reg_int_pend_next = {rx_fifo_mark_i, tx_fifo_mark_i};
end

// Update UART baud rate register 
// ------------------------------
always_comb begin 
    if (baud_reg_wr_flag) begin
        uart_reg_baud_next = reg_w_data[15:0];         
    end else begin                         
        uart_reg_baud_next = uart_reg_baud_ff;         
    end       
end
	
//================================= Prepare the output signals ===========================//
always_comb begin
    tx_data_i       = uart_reg_tx_ff;
    tx_en_o         = uart_reg_txctrl_ff[0];
    two_stop_bits_o = uart_reg_txctrl_ff[1];
    tx_watermark_o  = uart_reg_txctrl_ff[4:2];
    rx_en_o         = uart_reg_rxctrl_ff[0];
    rx_watermark_o  = uart_reg_rxctrl_ff[3:1];
    baud_rate_o     = uart_reg_baud_ff;
    tx_fifo_write_o = tx_valid_ff;
end

// Rx fifo read request
// ------------------------------
always_comb begin
    if(reg_rd_req) begin
        if ((reg_addr == UART_RX_DATA_R) && !uart2dbus_ff.ack)
            rx_fifo_read_o = 1'b1;
        else
            rx_fifo_read_o = 1'b0; end
		else
            rx_fifo_read_o = 1'b0;
end



endmodule