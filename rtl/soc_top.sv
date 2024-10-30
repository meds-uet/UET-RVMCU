// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: The SoC top module integrating the processor core and peripherals
//              including the memory subsystem.
//
// Author: Muhammad Tahir, UET Lahore
// Date: 12.06.2023

`timescale 1 ns / 100 ps

`ifndef VERILATOR
`include "defines/mem_defs.svh"
`include "defines/plic_defs.svh"
`else
`include "mem_defs.svh"
`include "plic_defs.svh"
`endif

module soc_top (

    input   logic                        rst_n,                  // reset
    input   logic                        clk_100,                // fpga_clock

    input   logic                        irq_ext_i,
    input   logic                        irq_soft_i,
    

    // SPI interface signals
    output logic                         spi_clk_o,
    output logic                         spi_cs_o,
    input  logic                         spi_miso_i,
    output logic                         spi_mosi_o,

    //GPIO interface signals
    inout  logic [23:0]                  gpio_io,
    input  logic [15:0]                  gp_switch_i,
    output logic [15:0]                  gp_led_o,

    // Uart interface IO signals
    input   logic                        uart_rxd_i,
    output                               uart_txd_o,

  //  input wire type_debug_port_s         debug_port_i,

    //7-segment control
    output reg   [7:0]                  r_sg,
    output reg   [7:0]                  r_an
);

//Local Signals
logic                        rst;   
logic                        clk;
wire  [7:0]                  w_sg;
wire  [7:0]                  w_an;
wire [31:0]                  sev_seg_display;

assign rst = !rst_n;

// clock divider
clk_wiz_0 clk_50
   (
    // Clock out ports
    .clk_out1(clk),     // output clk_out1
    // Status and control signals
    .reset(rst), // input reset
    .locked(locked),       // output locked
   // Clock in ports
    .clk_in1(clk_100));

// Microcontroller 
mcu_top mcu(
    .rst_n      (rst_n),
    .clk        (clk),     
    .irq_ext_i  (irq_ext_i),
    .irq_soft_i (irq_soft_i),
    .spi_clk_o  (spi_clk_o),
    .spi_cs_o   (spi_cs_o),
    .spi_miso_i (spi_miso_i),
    .spi_mosi_o (spi_mosi_o),
    .gpio_io    (gpio_io),
    .gp_switch_i(gp_switch_i),
    .gp_led_o   (gp_led_o),
    .uart_rxd_i (uart_rxd_i),
    .uart_txd_o (uart_txd_o),
);

//7-segment display
m_7segcon m_7segcon(clk, rst_n, sev_seg_display, r_sg, r_an);

//7-segment data to be displayed  
assign sev_seg_display = {mcu.dbus2peri.addr[21:18],
                          mcu.dbus2peri.addr[3:0],
                          mcu.dbus2per.w_data[11:8]
                          mcu.dbus2per.w_data[7:4]
                          mcu.dbus2per.w_data[3:0]
                          mcu.if2mem.addr[11:8],
                          mcu.if2mem.addr[7:4],
                          mcu.if2mem.addr[3:0]};


endmodule