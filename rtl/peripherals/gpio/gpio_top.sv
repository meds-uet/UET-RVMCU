`ifndef VERILATOR
`include "../defines/gpio_defs.svh"
`else
`include "gpio_defs.svh"
`endif

// dir = 1 output, dir = 0 input
// gpio A,B and C will be pmod connectors A,B and C.
// gpsw are 16 switches present on nexysA7
// gpled are 16 leds present on nexysA7

module gpio_top(
    input  logic                                clk,
    input  logic                                rst_n,
    input  logic                                gpioA_sel_i,
    input  logic                                gpioB_sel_i,
    input  logic                                gpioC_sel_i,
    input  logic                                gpsw_sel_i,
    input  logic                                gpled_sel_i,
    input  wire type_dbus2peri_s                dbus2gpio_i,
    output type_peri2dbus_s                     gpio2dbus_o,
    output logic                                gpio_irq_o,
    inout  logic [23:0]                         gpio_io,
    input  logic [15:0]                         gp_switch_i,
    output logic [15:0]                         gp_led_o
);

//internal signals
logic                                 gpioA_irq;
logic [7:0]                           gpioA_io;

logic                                 gpioB_irq;
logic [7:0]                           gpioB_io;

logic                                 gpioC_irq;
logic [7:0]                           gpioC_io;

assign gpio_irq_o = gpioA_irq | gpioB_irq | gpioC_irq;
assign gpio_io    = {gpioA_io, gpioB_io, gpioC_io};

gpio gpio_A(
    .clk          (clk),
    .rst_n        (rst_n),
    .gpio_sel_i   (gpioA_sel_i),
    .dbus2gpio_i  (dbus2gpio_i),
    .gpio2dbus_o  (gpio2dbus_o),
    .gpio_irq_o   (gpioA_irq),
    .gpio_io      (gpioA_io)
);

gpio gpio_B(
    .clk          (clk),
    .rst_n        (rst_n),
    .gpio_sel_i   (gpioB_sel_i),
    .dbus2gpio_i  (dbus2gpio_i),
    .gpio2dbus_o  (gpio2dbus_o),
    .gpio_irq_o   (gpioB_irq),
    .gpio_io      (gpioB_io)
);

gpio gpio_C(
    .clk          (clk),
    .rst_n        (rst_n),
    .gpio_sel_i   (gpioC_sel_i),
    .dbus2gpio_i  (dbus2gpio_i),
    .gpio2dbus_o  (gpio2dbus_o),
    .gpio_irq_o   (gpioC_irq),
    .gpio_io      (gpioC_io)
);

gpio_special gp_sw_led(
    .clk        (clk),
    .rst_n      (rst_n),
    .gpsw_sel_i (gpsw_sel_i),
    .gpled_sel_i(gpled_sel_i),
    .dbus2gpio_i(dbus2gpio_i),
    .gpio2dbus_o(gpio2dbus_o),
    .gp_switch_i(gp_switch_i),
    .gp_led_o   (gp_led_o)
);

    
endmodule