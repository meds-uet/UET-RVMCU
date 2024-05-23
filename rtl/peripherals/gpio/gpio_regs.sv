`ifndef VERILATOR
`include "../defines/gpio_defs.svh"
`else
`include "gpio_defs.svh"
`endif

// dir = 1 output, dir = 0 input

module gpio_regs(
    input  logic                                clk,
    input  logic                                rst_n,
    input  logic                                gpio_sel_i,
    input  wire type_dbus2peri_s                dbus2gpio_i,
    output type_peri2dbus_s                     gpio2dbus_o,
    output logic [15:0]                         reg_pctl_ff,
    output logic [7:0]                          reg_afsel_ff,
    output logic                                gpio_irq_o,
    inout  logic [7:0]                          gpio_io
);

//internal signals
logic                                      gpio_sel_data   ;
logic                                      gpio_sel_dir    ;
logic                                      gpio_sel_ie     ;
logic                                      gpio_sel_int_lvl;
logic                                      gpio_sel_afsel  ;
logic                                      gpio_sel_pctl   ;

logic [7:0] reg_data_ff   , reg_data_next;
logic [7:0] reg_dir_ff    , reg_dir_next;
logic [7:0] reg_ip_ff     , reg_ip_next;
logic [7:0] reg_ie_ff     , reg_ie_next;
logic [7:0] reg_int_lvl_ff, reg_int_lvl_next;
logic [7:0] reg_afsel_next;
logic [15:0] reg_pctl_next;

type_dbus2peri_s                           dbus2gpio;
type_peri2dbus_s                           gpio2dbus_ff;
type_gpio_regs_e                           reg_addr  ;
logic [31:0]                               reg_r_data;
logic [31:0]                               reg_w_data;
logic                                      reg_rd_req;
logic                                      reg_wr_req;


assign dbus2gpio = dbus2gpio_i;

//============= gpio selection signals for register write operations =============//
always_comb begin

    gpio_sel_data    = 1'b0;
    gpio_sel_dir     = 1'b0;
    gpio_sel_ie      = 1'b0;
    gpio_sel_int_lvl = 1'b0;
    gpio_sel_afsel   = 1'b0;
    gpio_sel_pctl    = 1'b0;
    
    // Register selection for write operation
    if(reg_wr_req & ~gpio2dbus_ff.ack) begin
        case (reg_addr)
            GPIO_DATA_R    : gpio_sel_data    = 1'b1;
            GPIO_DIR_R     : gpio_sel_dir     = 1'b1;
            GPIO_IP_R      : begin               end
            GPIO_IE_R      : gpio_sel_ie      = 1'b1;
            GPIO_INT_LVL_R : gpio_sel_int_lvl = 1'b1;
            GPIO_AFSEL_R   : gpio_sel_afsel   = 1'b1;
            GPIO_PCTL_R    : gpio_sel_pctl    = 1'b1;
            default        : begin               end
        endcase // reg_addr
    end
end


//================================= gpio register read operations ==================================//
always_comb begin
    reg_r_data  = 32'h0000;
    if(reg_rd_req) begin
        case (reg_addr)
            // gpio data receive registers
            GPIO_DATA_R    : reg_r_data = {24'b0, reg_data_ff}; 
            GPIO_DIR_R     : reg_r_data = {24'b0, reg_dir_ff};
            GPIO_IP_R      : reg_r_data = {24'b0, reg_ip_ff};
            GPIO_IE_R      : reg_r_data = {24'b0, reg_ie_ff};
            GPIO_INT_LVL_R : reg_r_data = {24'b0, reg_int_lvl_ff};
            GPIO_AFSEL_R   : reg_r_data = {24'b0, reg_afsel_ff};
            GPIO_PCTL_R    : reg_r_data = {2'b0, reg_pctl_ff[15:14], 2'b0, reg_pctl_ff[13:12],
                                           2'b0, reg_pctl_ff[11:10], 2'b0, reg_pctl_ff[9:8],
                                           2'b0, reg_pctl_ff[7:6],   2'b0, reg_pctl_ff[5:4],
                                           2'b0, reg_pctl_ff[3:2],   2'b0, reg_pctl_ff[1:0]
                                           };
            default        : reg_r_data = 32'h0;
        endcase // reg_addr
    end
end
    
//================================= gpio register write operations ==================================//
// ----------------------------
// Update gpio registers 
// ----------------------------
always_ff @(posedge clk) begin
    if(~rst_n) begin
        reg_data_ff    <= 8'h00; 
        reg_dir_ff     <= 8'h00;
        reg_ip_ff      <= 8'h00;
        reg_ie_ff      <= 8'h00;
        reg_int_lvl_ff <= 8'h00;
        reg_afsel_ff   <= 8'h00;
        reg_pctl_ff    <= 16'h0000;
    end else begin
         reg_data_ff    <= reg_data_next;
         reg_dir_ff     <= reg_dir_next;
         reg_ip_ff      <= reg_ip_next;
         reg_ie_ff      <= reg_ie_next;
         reg_int_lvl_ff <= reg_int_lvl_next;
         reg_afsel_ff   <= reg_afsel_next;
         reg_pctl_ff    <= reg_pctl_next;
    end
end

// ----------------------------
// Update gpio_io pins to drive the inout net
// ----------------------------
always_comb begin
    for (int j=0; j<7; j++) begin
        gpio_io[j] = reg_dir_ff[j] ? reg_data_ff[j] : 1'bz; 
    end
end

// ----------------------------
// Update gpio Interrupt pending register 
// ----------------------------
assign reg_ip_next = ~{reg_data_ff ^ reg_int_lvl_ff};

always_comb begin 
// ----------------------------
// Update gpio data register 
// ----------------------------
    for (int i=0; i<7; i++) begin
        if (!reg_dir_ff[i])
            reg_data_next[i] = gpio_io[i]; // To read from gpio pins
        else begin
            if (gpio_sel_data) 
                reg_data_next[i] = reg_w_data[i];
            else
                reg_data_next[i] = reg_data_ff[i];
        end
    end 
// ----------------------------
// Update gpio direction register 
// ----------------------------
    if (gpio_sel_dir) 
        reg_dir_next = reg_w_data[7:0];
    else
        reg_dir_next = reg_dir_ff;

// ----------------------------
// Update gpio Interrupt enable register 
// ----------------------------
    if (gpio_sel_ie) 
        reg_ie_next = reg_w_data[7:0];
    else
        reg_ie_next = reg_ie_ff;

// ----------------------------
// Update gpio interrupt level register 
// ----------------------------
    if (gpio_sel_int_lvl) 
        reg_int_lvl_next = reg_w_data[7:0];
    else
        reg_int_lvl_next = reg_int_lvl_ff;

// ----------------------------
// Update gpio Alternate function select register 
// ----------------------------    
    if (gpio_sel_afsel) 
        reg_afsel_next = reg_w_data[7:0];
    else
        reg_afsel_next = reg_afsel_ff;

// ----------------------------
// Update gpio port control mux register 
// ----------------------------    
    if (gpio_sel_pctl) 
        reg_pctl_next = reg_w_data;
    else
        reg_pctl_next = reg_pctl_ff;

end


// ----------------------------
//gpio Interrupt Request
// ----------------------------
assign gpio_irq_o = ((reg_ie_ff[7] & reg_ip_ff[7]) | (reg_ie_ff[6] & reg_ip_ff[6]),
                     (reg_ie_ff[5] & reg_ip_ff[5]) | (reg_ie_ff[4] & reg_ip_ff[4]),
                     (reg_ie_ff[3] & reg_ip_ff[3]) | (reg_ie_ff[2] & reg_ip_ff[2]),
                     (reg_ie_ff[1] & reg_ip_ff[1]) | (reg_ie_ff[0] & reg_ip_ff[0]));

//================================= Dbus interface ==================================//

// Signal interface from data bus
assign reg_addr   = type_gpio_regs_e'(dbus2gpio.addr[7:0]);
assign reg_w_data = dbus2gpio.w_data;
assign reg_rd_req = !dbus2gpio.w_en && dbus2gpio.req && gpio_sel_i;
assign reg_wr_req = dbus2gpio.w_en  && dbus2gpio.req && gpio_sel_i;

// gpio write/read operation 
always_ff @(posedge clk) begin  
    gpio2dbus_ff <= '0;
    if ((reg_wr_req | reg_rd_req) &  ~gpio2dbus_ff.ack) begin
        gpio2dbus_ff.ack <= 1'b1;
        if (reg_rd_req)
            gpio2dbus_ff.r_data <= reg_r_data;         
    end  
end  

// Response signals to dbus 
assign gpio2dbus_o.r_data = gpio2dbus_ff.r_data;
assign gpio2dbus_o.ack = gpio2dbus_ff.ack;

endmodule
