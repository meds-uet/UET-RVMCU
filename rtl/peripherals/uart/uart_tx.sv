/*********************************************************************
 * Filename   :  uart_tx.sv
 * Date       :  14-05-2023
 * Updated    :  21-06-2023
 * Author     :  
 *
 * Description:  Uart transmitter module with 8*8 FIFO
 *********************************************************************/

/*`ifndef VERILATOR
`include "../../defines/uart_defs.svh"
`else*/
`include "uart_defs.svh"
//`endif
 
module uart_tx (

    input  logic                                   rst_n,                    // reset
    input  logic                                   clk,                      // clock	
    output logic                                   txd_pin_o,

    // Signals to and from FIFO
    output logic                                   tx_fifo_full_o,
    input  logic                                   tx_fifo_write_i,
    input  logic [7:0]                             tx_data_i,

    // Signals from and regs
    output logic                                   tx_fifo_mark_o,
    input  logic [2:0]                             tx_watermark_i,
    input  logic                                   tx_en_i,
    input  logic                                   two_stop_bits_i,
    input  logic [15:0]                            baud_rate_i
);

// Signals for UART tx_state_ff machine
type_uart_tx_states_e tx_state_ff, tx_state_next;

// Control Signals
logic                            baud_cnt_ovf, baud_count_en, baud_count_reset;
logic                            shifter_load_en, shifter_en;
logic                            bit_count_en, bit_count_load_en;
logic                            txd_mux_sel;
logic tx_fifo_read;

// Datapath Signals
logic [10:0]                     shifter_ff, shifter_next;
logic [3:0]                      bit_counter, uart_frame_size;
logic [15:0]                     baud_counter;
logic tx_busy;
// FIFO signals
logic tx_fifo_empty;
logic [7:0] tx_fifo_data;
logic [ADDR_FIFO:0]                  tx_fifo_count;


//============================ UART Transmitter Controller ===========================//

// State register synchronous update
// ----------------------------------
always_ff @ (negedge rst_n or posedge clk) 
begin
if (!rst_n)
    tx_state_ff <= UART_TX_IDLE;
else
    tx_state_ff <= tx_state_next;
end

// Next State always block
// ----------------------------------
always_comb begin
tx_state_next = UART_TX_IDLE;
case (tx_state_ff)
    UART_TX_IDLE  : begin if (tx_en_i && !tx_busy && !tx_fifo_empty)
                            tx_state_next = UART_TX_START;
						  else 
							tx_state_next = UART_TX_IDLE; 
					end
	
    UART_TX_START  : begin
                          tx_state_next = UART_TX_DATA;
                    end
	
    UART_TX_DATA : begin if (!tx_busy)
                            tx_state_next = UART_TX_IDLE;
                         else
                            tx_state_next = UART_TX_DATA;
                    end
  
    default       : tx_state_next     = UART_TX_IDLE;
endcase
end

// Control signals always block
// ----------------------------------
always_comb begin
case (tx_state_ff)
    UART_TX_IDLE  : begin
                        txd_mux_sel       = 1'b1;
                        shifter_load_en   = 1'b0;
                        shifter_en        = 1'b0;
                        baud_count_en     = 1'b0;
                        baud_count_reset  = 1'b1;
                        bit_count_en      = 1'b0;
                        bit_count_load_en = 1'b0;
                    end	
    UART_TX_START  : begin
                        txd_mux_sel       = 1'b1;
                        shifter_load_en   = 1'b1;
                        shifter_en        = 1'b0;
                        baud_count_en     = 1'b0;
                        baud_count_reset  = 1'b1;
                        bit_count_en      = 1'b0;
                        bit_count_load_en = 1'b1;
                    end	
    UART_TX_DATA : begin
                        txd_mux_sel       = 1'b0;
                        shifter_load_en   = 1'b0;
                        bit_count_load_en = 1'b0;
                        if (baud_cnt_ovf)
                        begin
                            shifter_en       = 1'b1;
                            baud_count_en    = 1'b0;
                            baud_count_reset = 1'b1;
                            bit_count_en     = 1'b1;
                        end
                        else 
                        begin
                            shifter_en       = 1'b0;
                            baud_count_en    = 1'b1;
                            baud_count_reset = 1'b0;
                            bit_count_en     = 1'b0;
                        end
                    end
  
    default       : begin
                        txd_mux_sel      = 1'b1;
                        shifter_load_en  = 1'b0;
                        shifter_en       = 1'b0;
                        baud_count_en    = 1'b0;
                        baud_count_reset = 1'b1;
                        bit_count_load_en = 1'b0;
                        bit_count_en     = 1'b0;
                    end
endcase
end

always_comb begin
    if ((tx_state_ff == UART_TX_IDLE) && (tx_state_next == UART_TX_START))
        tx_fifo_read   = 1'b1;
    else
        tx_fifo_read  = 1'b0;
end
//============================ UART Transmitter Datapath ===========================//

// transmitter mux
assign txd_pin_o = txd_mux_sel ? 1'b1 : shifter_ff[0];

// shift register
always_ff @ (negedge rst_n or posedge clk) 
begin
if (!rst_n)
    shifter_ff <= 11'hFFF;
else
    shifter_ff <= shifter_next; 
end

//shift register update
always_comb 
begin
if (shifter_load_en)
    shifter_next = {shifter_ff[10:9], tx_fifo_data, 1'b0};
else if (shifter_en)
    shifter_next = {1'b1, shifter_ff[10:1]};
else
    shifter_next = shifter_ff;
end

// Baud rate counter
always_ff @ (negedge rst_n or posedge clk)
begin
if (!rst_n || baud_count_reset)
    baud_counter <= baud_rate_i;
else if (baud_count_en)
    baud_counter <= baud_counter - 16'h0001;
end

assign baud_cnt_ovf = (baud_counter == 16'h0000) ? 1'b1 : 1'b0; 

// Transmitted bits count
assign uart_frame_size = two_stop_bits_i ? 4'hB : 4'hA;

always_ff @ (negedge rst_n or posedge clk)
begin
if (!rst_n)
    bit_counter <= 4'h0;
else 
 begin
    if (bit_count_load_en)
        bit_counter <= uart_frame_size;
    else if (bit_count_en)
        bit_counter <= bit_counter - 4'h1;
 end
end

assign tx_busy = (bit_counter != 4'h0);

//tx fifo watermark check
always_ff @ (negedge rst_n or posedge clk) 
begin
if(!rst_n)
	tx_fifo_mark_o <= 1'b0;
else begin
	if (tx_fifo_count[2:0] < tx_watermark_i)
		tx_fifo_mark_o <= 1'b1;
	else if (tx_fifo_count[2:0] > tx_watermark_i)
		tx_fifo_mark_o <= 1'b0;
	end		
end

uart_fifo tx_fifo(
.clk (clk),
.rst_n (rst_n),
.data_in (tx_data_i),
.data_out (tx_fifo_data),
.data_count (tx_fifo_count),
.fifo_read (tx_fifo_read),
.fifo_write (tx_fifo_write_i),
.fifo_full (tx_fifo_full_o),
.fifo_empty (tx_fifo_empty)
);

endmodule : uart_tx
