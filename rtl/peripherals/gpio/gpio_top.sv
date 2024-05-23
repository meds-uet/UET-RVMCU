`ifndef VERILATOR
`include "../defines/gpio_defs.svh"
`else
`include "gpio_defs.svh"
`endif

module gpio_top(
    input  logic                           clk,
    input  logic                           rst_n,
    input  type_dbus2peri_s                dbus2gpio_i,
    output type_peri2dbus_s                gpio2dbus_o,
    output logic                           irq_o,
    inout logic [7:0]                      gpio_io
);
    
    logic [7:0] gpio_data;
endmodule
