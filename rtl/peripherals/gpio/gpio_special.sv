// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  For using switches and LEDs 
//
// Author: Shehzeen Malik, UET Lahore
// Date: 22.5.2024


`ifndef VERILATOR
`include "gpio_defs.svh"
`else
`include "gpio_defs.svh"
`endif


module gpio_special(
    input  logic                                clk,
    input  logic                                rst_n,
    input  logic                                gpsw_sel_i,
    input  logic                                gpled_sel_i,
    input  wire type_dbus2peri_s                dbus2gpio_i,
    output type_peri2dbus_s                     gpio2dbus_o,
    input  logic [15:0]                         gp_switch_i,
    output logic [15:0]                         gp_led_o
);

//internal signals
logic                                      gpled_sel_data;

logic [15:0] reg_sw_data_ff   , reg_sw_data_next;
logic [15:0] reg_led_data_ff  , reg_led_data_next;

type_dbus2peri_s                           dbus2gpio;
type_peri2dbus_s                           gpio2dbus_ff;
type_gpsl_regs_e                           reg_addr  ;
logic [31:0]                               reg_r_data;
logic [31:0]                               reg_w_data;
logic                                      reg_rd_req;
logic                                      reg_wr_req;


assign dbus2gpio = dbus2gpio_i;

//============= gpio selection signals for register write operations =============//
always_comb begin
    gpled_sel_data   = 1'b0;
    
    // Register selection for write operation
    if(reg_wr_req & ~gpio2dbus_ff.ack) begin
        case (reg_addr)
            GPLED_DATA_R   : gpled_sel_data = 1'b1;
            GPSW_DATA_R    : begin               end
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
            GPSW_DATA_R    : reg_r_data = {16'b0, reg_sw_data_ff}; 
            GPLED_DATA_R   : reg_r_data = {16'b0, reg_led_data_ff};
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
        reg_sw_data_ff  <= 8'h00; 
        reg_led_data_ff <= 8'h00;
    end else begin
         reg_sw_data_ff  <= reg_sw_data_next;
         reg_led_data_ff <= reg_led_data_next;
    end
end

always_comb begin 
// ----------------------------
// Update general purpose switch data register 
// ----------------------------
    reg_sw_data_next = gp_switch_i; 

    // ----------------------------
// Update general purpose LED data register 
// ----------------------------

    if (gpled_sel_data)
        reg_led_data_next = reg_w_data[15:0];
    else
        reg_led_data_next = reg_led_data_ff;
end

//================================= Dbus interface ==================================//

// Signal interface from data bus
assign reg_addr   = type_gpsl_regs_e'(dbus2gpio.addr[7:0]);
assign reg_w_data = dbus2gpio.w_data;
assign reg_rd_req = !dbus2gpio.w_en && dbus2gpio.req && gpled_sel_i;
assign reg_wr_req = dbus2gpio.w_en  && dbus2gpio.req && gpled_sel_i;

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