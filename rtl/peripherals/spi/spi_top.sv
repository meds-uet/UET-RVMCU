// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: SPI top module for SPI0 and SPI1
//              SPI0 module for fpga accelerometer spi interface
//              SPI1 module for external pmodD connector
//               
// Author: Shehzeen Malik, UET Lahore
// Date: 30.10.2024


`ifndef VERILATOR
`include "../../defines/spi_defs.svh"
`else
`include "spi_defs.svh"
`endif

module spi_top(
    input  logic                               rst_n, 
    input  logic                               clk, 
    input  logic                               spi0_sel_i, 
    input  wire type_dbus2peri_s               dbus2spi_i, 
    output type_peri2dbus_s                    spi2dbus_o,
    output logic                               spi_irq_o,
    input  logic                               spi_miso_i, 
    output logic                               spi_mosi_o,
    output logic                               spi_clk_o,
    output logic                               spi_cs_o
);

//internal signals
logic                                 spi0_mosi;
logic                                 spi0_clk;
logic                                 spi0_cs;
logic                                 spi0_irq;

type_dbus2peri_s                      dbus2spi0;
type_peri2dbus_s                      spi0_2dbus;

assign spi_irq_o  = spi0_irq;
assign spi_mosi_o = spi0_mosi;
assign spi_clk_o  = spi0_clk;
assign spi_cs_o   = spi0_cs;

always_comb begin
    dbus2spi0  = '0;
    spi2dbus_o = '0;
    if (spi0_sel_i) begin
        dbus2spi0  = dbus2spi_i;
        spi2dbus_o = spi0_2dbus;
    end else begin
        dbus2spi0  = '0;
        spi2dbus_o = '0;
    end
end

spi spi0_module (
    .rst_n                 (rst_n    ),
    .clk                   (clk      ),
    .dbus2spi_i            (dbus2spi0),
    .spi2dbus_o            (spi0_2dbus),
    .spi_sel_i             (spi0_sel_i),
    .spi_irq_o             (spi0_irq),
    .spi_clk_o             (spi0_clk),
    .spi_cs_o              (spi0_cs),
    .spi_miso_i            (spi_miso_i),
    .spi_mosi_o            (spi0_mosi)
);

    
endmodule