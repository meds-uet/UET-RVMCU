// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: Uart top module for uart0 and uart1
//              Uart0 module for fpga prog uart port
//              Uart1 module for external pmodD connector
//               
// Author: Shehzeen Malik, UET Lahore
// Date: 30.10.2024


`ifndef VERILATOR
`include "../../defines/uart_defs.svh"
`else
`include "uart_defs.svh"
`endif

module uart_top(
    input  logic                                clk,
    input  logic                                rst_n,
    input  logic                                uart0_sel_i,
    input  logic                                uart1_sel_i,
    input  wire type_dbus2peri_s                dbus2uart_i,
    output type_peri2dbus_s                     uart2dbus_o,
    output logic                                uart_irq_o,
    input  logic [1:0]                          uart_rxd_i,
    output logic [1:0]                          uart_txd_o
);

//internal signals
logic                                 uart0_irq;
logic                                 uart0_rxd;
logic                                 uart0_txd;

logic                                 uart1_irq;
logic                                 uart1_rxd;
logic                                 uart1_txd;

type_dbus2peri_s                      dbus2uart0;
type_peri2dbus_s                      uart0_2dbus;
type_dbus2peri_s                      dbus2uart1;
type_peri2dbus_s                      uart1_2dbus;

assign uart_irq_o = uart0_irq | uart1_irq;
assign uart_txd_o = {uart1_txd, uart0_txd};

always_comb begin
    dbus2uart0  = '0;
    uart2dbus_o = '0;
    dbus2uart1  = '0;
    if (uart0_sel_i) begin
        dbus2uart0  = dbus2uart_i;
        dbus2uart1  = '0;
        uart2dbus_o = uart0_2dbus;
    end else if (uart1_sel_i) begin
        dbus2uart0  = '0;
        dbus2uart1 = dbus2uart_i;
        uart2dbus_o = uart1_2dbus;
    end else begin
        dbus2uart0  = '0;
        dbus2uart1  = '0;
        uart2dbus_o = '0;
    end
end

uart uart0_module (
    .rst_n                 (rst_n    ),
    .clk                   (clk      ),
    .dbus2uart_i           (dbus2uart0), 
    .uart_sel_i            (uart0_sel_i),
    .uart2dbus_o           (uart0_2dbus),
    .uart_irq_o            (uart0_irq),
    .uart_rxd_i            (uart_rxd_i[0]),
    .uart_txd_o            (uart0_txd)
);

uart uart1_module (
    .rst_n                 (rst_n    ),
    .clk                   (clk      ),
    .dbus2uart_i           (dbus2uart1), 
    .uart_sel_i            (uart1_sel_i),
    .uart2dbus_o           (uart1_2dbus),
    .uart_irq_o            (uart1_irq),
    .uart_rxd_i            (uart_rxd_i[1]),
    .uart_txd_o            (uart1_txd)
);

    
endmodule