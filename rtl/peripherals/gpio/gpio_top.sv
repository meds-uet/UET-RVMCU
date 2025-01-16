// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  dir = 1 output, dir = 0 input
//               gpio A,B and C will be pmod connectors A,B and C.
//               gpsw are 16 switches present on nexysA7
//               gpled are 16 leds present on nexysA7
//
// Author: Shehzeen Malik, UET Lahore
// Date: 20.5.2024


`ifndef VERILATOR
`include "../../defines/gpio_defs.svh"
`else
`include "gpio_defs.svh"
`endif

module gpio_top(
    input  logic                                clk,
    input  logic                                rst_n,
    input  logic                                gpioA_sel_i,
    input  logic                                gpioB_sel_i,
    input  logic                                gpioC_sel_i,
    input  wire type_dbus2peri_s                dbus2gpio_i,
    output type_peri2dbus_s                     gpio2dbus_o,
    output logic                                gpio_irq_o,
    inout  logic [23:0]                         gpio_io
);

//internal signals
logic                                 gpioA_irq;

logic                                 gpioB_irq;

logic                                 gpioC_irq;

type_dbus2peri_s                dbusA2gpio;
type_peri2dbus_s                gpioA2dbus;
type_dbus2peri_s                dbusB2gpio;
type_peri2dbus_s                gpioB2dbus;
type_dbus2peri_s                dbusC2gpio;
type_peri2dbus_s                gpioC2dbus;

assign gpio_irq_o = gpioA_irq | gpioB_irq | gpioC_irq;

always_comb begin
    dbusA2gpio  = '0;
    gpio2dbus_o = '0;
    dbusB2gpio  = '0;
    dbusC2gpio = '0;
    if (gpioA_sel_i) begin
        dbusA2gpio  = dbus2gpio_i;
        dbusB2gpio  = '0;
        dbusC2gpio  = '0;
        gpio2dbus_o = gpioA2dbus;
    end else if (gpioB_sel_i) begin
        dbusB2gpio = dbus2gpio_i;
        dbusA2gpio  = '0;
        dbusC2gpio  = '0;
        gpio2dbus_o = gpioB2dbus;
    end else if (gpioC_sel_i) begin
        dbusC2gpio = dbus2gpio_i;
        dbusB2gpio  = '0;
        dbusA2gpio  = '0;
        gpio2dbus_o = gpioC2dbus;
    end else begin
        dbusB2gpio  = '0;
        dbusC2gpio  = '0;
        dbusA2gpio  = '0;
        gpio2dbus_o = '0;
    end
end

gpio gpio_A(
    .clk          (clk),
    .rst_n        (rst_n),
    .gpio_sel_i   (gpioA_sel_i),
    .dbus2gpio_i  (dbusA2gpio),
    .gpio2dbus_o  (gpioA2dbus),
    .gpio_irq_o   (gpioA_irq),
    .gpio_io      (gpio_io[7:0])
);

gpio gpio_B(
    .clk          (clk),
    .rst_n        (rst_n),
    .gpio_sel_i   (gpioB_sel_i),
    .dbus2gpio_i  (dbusB2gpio),
    .gpio2dbus_o  (gpioB2dbus),
    .gpio_irq_o   (gpioB_irq),
    .gpio_io      (gpio_io[15:8])
);

gpio gpio_C(
    .clk          (clk),
    .rst_n        (rst_n),
    .gpio_sel_i   (gpioC_sel_i),
    .dbus2gpio_i  (dbusC2gpio),
    .gpio2dbus_o  (gpioC2dbus),
    .gpio_irq_o   (gpioC_irq),
    .gpio_io      (gpio_io[23:16])
);

    
endmodule