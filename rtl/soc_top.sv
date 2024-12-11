// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: The SoC top module integrating the processor core and peripherals
//              including the memory subsystem.
//
// Author: Shehzeen Malik, MEDS UET Lahore
// Date: 30.10.2024

`timescale 1 ns / 100 ps

`ifndef VERILATOR
`include "defines/plic_defs.svh"
`else
`include "plic_defs.svh"
`endif

module clock_divider(
    input logic clk_in,       // Input clock (100 MHz)
    input logic rst,          // Reset signal (active high)
    output logic clk_out      // Output clock (25 MHz)
);
    // Parameters for dividing the clock
    localparam integer DIV_FACTOR = 2; // Divide by 2 (25 MHz)

    // Counter and output clock
    integer counter = 0;

    always_ff @(posedge clk_in or posedge rst) begin
        if (rst) begin
            counter <= 0;
            clk_out <= 0;
        end else begin
            if (counter == DIV_FACTOR - 1) begin
                counter <= 0;
                clk_out <= ~clk_out; // Toggle output clock
            end else begin
                counter <= counter + 1;
            end
        end
    end
endmodule



module soc_top (

    input   logic                        rst_n,                  // reset
    `ifdef FPGA
    //7-segment control
//    output reg   [7:0]                   r_sg,
//    output reg   [7:0]                   r_an,
    input   logic                        clk_100,                // fpga_clock
    `else
    input   logic                        clk,               
    `endif
    
    input   logic                        irq_soft_i,
    
    // SPI interface signals
    output logic [1:0]                   spi_clk_o,
    output logic [1:0]                   spi_cs_o,
    input  logic [1:0]                   spi_miso_i,
    output logic [1:0]                   spi_mosi_o,

    //GPIO interface signals
    inout  logic [23:0]                  gpio_io,       // Some of the GPIOs are going to be hardwired to seven segement
    input  logic [15:0]                  gp_switch_i,
    output logic [15:0]                  gp_led_o,

    // Uart interface IO signals
    input   logic [1:0]                   uart_rxd_i,
    output  logic [1:0]                   uart_txd_o
  
);

//Local Signals
`ifdef FPGA 
logic                        rst; 
logic                        clk;
logic                        locked;
logic [31:0]                 sev_seg_display;

assign rst = !rst_n;

// clock divider
clock_divider clk_mcu (
    .clk_in(clk_100),  // Input clock
    .rst(rst),         // Reset
    .clk_out(clk)      // Output clock
);

////7-segment display
//m_7segcon m_7segcon(
//    .clk          (clk),
//    .rst_n        (rst_n),
//    .sev_seg_disp (sev_seg_display),
//    .sev_cathode  (r_sg),
//    .sev_anode    (r_an)
//);
 
////7-segment data to be displayed 
//assign sev_seg_display = {mcu_top_module.pipeline_top_module.csr_module.irq_code[4:1],
//                          mcu_top_module.spi_top_module.spi0_module.spi_tx_fifo_data[7:0],
//                          mcu_top_module.spi_top_module.spi0_module.spi_tx_fifo_data[3:0],
//                          mcu_top_module.spi_top_module.spi0_module.spi_rx_fifo_data[7:4],
//                          mcu_top_module.spi_top_module.spi0_module.spi_rx_fifo_data[3:0],
//                          //mcu_top_module.gpio_top_module.gp_sw_led.reg_sw_data_ff[7:4],
//                          //mcu_top_module.gpio_top_module.gpio_A.reg_data_ff[3:0],
//                          mcu_top_module.if2mem.addr[11:8],
//                          mcu_top_module.if2mem.addr[7:4],
//                          mcu_top_module.if2mem.addr[3:0]};
    
`endif
// Microcontroller 
mcu_top mcu_top_module(
    .rst_n      (rst_n),
    .clk        (clk),     
    .irq_soft_i (irq_soft_i),
    .spi_clk_o  (spi_clk_o),
    .spi_cs_o   (spi_cs_o),
    .spi_miso_i (spi_miso_i),
    .spi_mosi_o (spi_mosi_o),
    .gpio_io    (gpio_io),
    .gp_switch_i(gp_switch_i),
    .gp_led_o   (gp_led_o),
    .uart_rxd_i (uart_rxd_i),
    .uart_txd_o (uart_txd_o)
);


endmodule

