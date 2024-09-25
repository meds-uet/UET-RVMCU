// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: dir = 1 output, dir = 0 input
//
// Author: Shehzeen Malik, UET Lahore
// Date: 20.5.2024

`ifndef VERILATOR
`include "../../defines/gpio_defs.svh"
`else
`include "gpio_defs.svh"
`endif
module gpio(
    input  logic                                clk,
    input  logic                                rst_n,
    input  logic                                gpio_sel_i,
    input  wire type_dbus2peri_s                dbus2gpio_i,
    output type_peri2dbus_s                     gpio2dbus_o,
    output logic                                gpio_irq_o,
    inout  logic [7:0]                          gpio_io
);

//internal signals
logic [7:0]                                gpio_pin_en ;
logic                                      gpio_sel_data   ;
logic                                      gpio_sel_dir    ;
logic                                      gpio_sel_ie     ;
logic                                      gpio_sel_int_lvl;

logic [7:0] reg_data_ff   , reg_data_next;
logic [7:0] reg_dir_ff    , reg_dir_next;
logic [7:0] reg_ip_ff     , reg_ip_next;
logic [7:0] reg_ie_ff     , reg_ie_next;
logic [7:0] reg_int_lvl_ff, reg_int_lvl_next;

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
    
    // Register selection for write operation
    if(reg_wr_req & ~gpio2dbus_ff.ack) begin
        case (reg_addr)
            GPIO_DATA_R    : gpio_sel_data    = 1'b1;
            GPIO_DIR_R     : gpio_sel_dir     = 1'b1;
            GPIO_IP_R      : begin               end
            GPIO_IE_R      : gpio_sel_ie      = 1'b1;
            GPIO_INT_LVL_R : gpio_sel_int_lvl = 1'b1;
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
            default        : reg_r_data = 32'h0;
        endcase // reg_addr
    end
end
    
//================================= gpio register write operations ==================================//
// ----------------------------
// Update gpio registers 
// ----------------------------
always_ff @(posedge clk) begin
    if(!rst_n) begin
        reg_data_ff    <= 8'h00; 
        reg_dir_ff     <= 8'h00;
        reg_ip_ff      <= 8'h00;
        reg_ie_ff      <= 8'h00;
        reg_int_lvl_ff <= 8'h00;
    end else begin
         reg_data_ff    <= reg_data_next;
         reg_dir_ff     <= reg_dir_next;
         reg_ip_ff      <= reg_ip_next;
         reg_ie_ff      <= reg_ie_next;
         reg_int_lvl_ff <= reg_int_lvl_next;
    end
end

// ----------------------------
// Update gpio_io pins to drive the inout net
// ----------------------------
assign gpio_io[0] = reg_dir_ff[0] ? reg_data_ff[0] : 1'bz;
assign gpio_io[1] = reg_dir_ff[1] ? reg_data_ff[1] : 1'bz; 
assign gpio_io[2] = reg_dir_ff[2] ? reg_data_ff[2] : 1'bz; 
assign gpio_io[3] = reg_dir_ff[3] ? reg_data_ff[3] : 1'bz; 
assign gpio_io[4] = reg_dir_ff[4] ? reg_data_ff[4] : 1'bz; 
assign gpio_io[5] = reg_dir_ff[5] ? reg_data_ff[5] : 1'bz; 
assign gpio_io[6] = reg_dir_ff[6] ? reg_data_ff[6] : 1'bz; 
assign gpio_io[7] = reg_dir_ff[7] ? reg_data_ff[7] : 1'bz; 

// ----------------------------
// Update gpio Interrupt pending register 
// ----------------------------
always_comb begin
    for (int i=0; i<=7; i++) begin
        if (!reg_dir_ff[i]) begin
		    case (gpio_io[i])
            1'bz :  reg_ip_next[i] = 1'b0;
            /*1'b0 :  reg_ip_next[i] = ~{reg_data_ff[i] ^ reg_int_lvl_ff[i]};
            1'b1 :  reg_ip_next[i] = ~{reg_data_ff[i] ^ reg_int_lvl_ff[i]}; */
            default: reg_ip_next[i] = ~{reg_data_next[i] ^ reg_int_lvl_ff[i]};
        endcase
                
        end else
          reg_ip_next[i] = 1'b0;
    end
end

always_comb begin 
// ----------------------------
// Update gpio data register 
// ----------------------------
reg_data_next = '0;
    for (int i=0; i<=7; i++) begin
    
        if (!reg_dir_ff[i])
        case (gpio_io[i])
           1'b0 :  reg_data_next[i] = 1'b0;
           1'b1 :  reg_data_next[i] = 1'b1;
           1'bz :  reg_data_next[i] = 1'b0;
            default: reg_data_next[i] = gpio_io[i]; // To read from gpio pins
        endcase
  
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

end

// ----------------------------
//gpio Interrupt Request
// ----------------------------
assign gpio_irq_o = ((reg_ie_ff[7] & reg_ip_ff[7]) | (reg_ie_ff[6] & reg_ip_ff[6]) |
                     (reg_ie_ff[5] & reg_ip_ff[5]) | (reg_ie_ff[4] & reg_ip_ff[4]) |
                     (reg_ie_ff[3] & reg_ip_ff[3]) | (reg_ie_ff[2] & reg_ip_ff[2]) |
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