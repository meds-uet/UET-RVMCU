// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  For using switches and LEDs 
//
// Author: Shehzeen Malik, UET Lahore
// Date: 22.5.2024


`ifndef VERILATOR
`include "../../defines/gpio_defs.svh"
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
    output logic                                sw_irq_o,
    input  logic [15:0]                         gp_switch_i,
    output logic [15:0]                         gp_led_o
);

//internal signals
logic                                      gpled_sel_data;
logic                                      sw_sel_ie     ;
logic                                      sw_sel_int_lvl;

logic [15:0] reg_sw_data_ff    , reg_sw_data_next;
logic [15:0] reg_led_data_ff   , reg_led_data_next;
logic [15:0] reg_sw_ip_ff      , reg_sw_ip_next;
logic [15:0] reg_sw_ie_ff      , reg_sw_ie_next;
logic [15:0] reg_sw_int_lvl_ff , reg_sw_int_lvl_next;

type_dbus2peri_s                           dbus2gpio;
type_peri2dbus_s                           gpio2dbus_ff;
type_gpsl_regs_e                           reg_addr  ;
logic [31:0]                               reg_r_data;
logic [31:0]                               reg_w_data;
logic                                      reg_rd_req;
logic                                      reg_wr_req;


assign dbus2gpio = dbus2gpio_i;
assign gp_led_o = reg_led_data_ff;

//============= gpio selection signals for register write operations =============//
always_comb begin
    gpled_sel_data   = 1'b0;
    sw_sel_ie        = 1'b0;
    sw_sel_int_lvl   = 1'b0;
    // Register selection for write operation
    if(reg_wr_req & ~gpio2dbus_ff.ack) begin
        case (reg_addr)
            GPLED_DATA_R   : gpled_sel_data = 1'b1;
            GPSW_DATA_R    : begin               end
            GPSW_IP_R      : begin               end
            GPSW_IE_R      : sw_sel_ie      = 1'b1;
            GPSW_INT_LVL_R : sw_sel_int_lvl = 1'b1;
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
            GPSW_IP_R      : reg_r_data = {16'b0, reg_sw_ip_ff};
            GPSW_IE_R      : reg_r_data = {16'b0, reg_sw_ie_ff};
            GPSW_INT_LVL_R : reg_r_data = {16'b0, reg_sw_int_lvl_ff};
            default        : reg_r_data = 32'h0;
        endcase // reg_addr
    end
end
    
//====================== gpsw_led register write operations =========================//
// ----------------------------
// Update gp_sw_led registers 
// ----------------------------
always_ff @(posedge clk) begin
    if(~rst_n) begin
        reg_sw_data_ff    <= 16'h0000; 
        reg_led_data_ff   <= 16'h0000;
        reg_sw_ip_ff      <= 16'h0000;
        reg_sw_ie_ff      <= 16'h0000;
        reg_sw_int_lvl_ff <= 16'h0000;
    end else begin
         reg_sw_data_ff    <= reg_sw_data_next;
         reg_led_data_ff   <= reg_led_data_next;
         reg_sw_ip_ff      <= reg_sw_ip_next;
         reg_sw_ie_ff      <= reg_sw_ie_next;
         reg_sw_int_lvl_ff <= reg_sw_int_lvl_next;
    end
end

always_comb begin 
// ----------------------------
// Update general purpose switch data register 
// ----------------------------
    reg_sw_data_next = gp_switch_i; 

// ----------------------------
// Update general purpose LED data register based on sel_byte
// ----------------------------

    if (gpled_sel_data) begin
        case (dbus2gpio.sel_byte)
            4'b0001: reg_led_data_next = {reg_led_data_ff[15:7], reg_w_data[7:0]};
            4'b0010: reg_led_data_next = {reg_w_data[15:7], reg_led_data_ff[7:0]};
            4'b0011: reg_led_data_next =  reg_w_data[15:0];
            4'b1111: reg_led_data_next =  reg_w_data[15:0];
            default:
                reg_led_data_next = reg_led_data_ff;
        endcase
    end else
        reg_led_data_next = reg_led_data_ff;
end


// ----------------------------
// Update gpio Interrupt pending register 
// ----------------------------
always_comb begin
     reg_sw_ip_next = ~{reg_sw_data_next ^ reg_sw_int_lvl_ff};
end

always_comb begin 
// ----------------------------
// Update switch Interrupt enable register 
// ----------------------------
    if (sw_sel_ie) begin
        case (dbus2gpio.sel_byte)
            4'b0001: reg_sw_ie_next = {reg_sw_ie_ff[15:7], reg_w_data[7:0]};
            4'b0010: reg_sw_ie_next = {reg_w_data[15:7], reg_sw_ie_ff[7:0]};
            4'b0011: reg_sw_ie_next =  reg_w_data[15:0];
            4'b1111: reg_sw_ie_next =  reg_w_data[15:0];
            default:
                reg_sw_ie_next = reg_sw_ie_ff;
        endcase
    end else
        reg_sw_ie_next = reg_sw_ie_ff;

// ----------------------------
// Update gpio interrupt level register 
// ----------------------------
    if (sw_sel_int_lvl) begin
        case (dbus2gpio.sel_byte)
            4'b0001: reg_sw_int_lvl_next = {reg_sw_int_lvl_ff[15:7], reg_w_data[7:0]};
            4'b0010: reg_sw_int_lvl_next = {reg_w_data[15:7], reg_sw_int_lvl_ff[7:0]};
            4'b0011: reg_sw_int_lvl_next =  reg_w_data[15:0];
            4'b1111: reg_sw_int_lvl_next =  reg_w_data[15:0];
            default:
                reg_sw_int_lvl_next = reg_sw_ie_ff;
        endcase
    end 
    else
        reg_sw_int_lvl_next = reg_sw_int_lvl_ff;

end

// ----------------------------
//gpio Interrupt Request
// ----------------------------

assign sw_irq_o = |(reg_sw_ie_ff & reg_sw_ip_ff);

//================================= Dbus interface ==================================//

// Signal interface from data bus
assign reg_addr   = type_gpsl_regs_e'(dbus2gpio.addr[7:0]);
assign reg_w_data = dbus2gpio.w_data;
assign reg_rd_req = !dbus2gpio.w_en && dbus2gpio.req && (gpled_sel_i || gpsw_sel_i);
assign reg_wr_req = dbus2gpio.w_en  && dbus2gpio.req && (gpled_sel_i || gpsw_sel_i);

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