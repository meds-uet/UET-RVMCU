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
`include "/defines/mem_defs.svh"
`include "/defines/plic_defs.svh"
`else
`include "mem_defs.svh"
`include "plic_defs.svh"
`endif

module soc_top (

    input   logic                        rst_n,                  // reset
    input   logic                        clk,                     // clock

    input   logic                        irq_ext_i,
    input   logic                        irq_soft_i,
    

    // SPI interface signals
    // SPI bus interface signals including clock, chip_select, MOSI and MISO  
    output logic                         spi_clk_o,
    output logic                         spi_cs_o,
    input  logic                         spi_miso_i,
    output logic                         spi_mosi_o,

    //GPIO interface signals
    inout  logic [23:0]                  gpio_io,
    input  logic [15:0]                  gp_switch_i,
    output logic [15:0]                  gp_led_o,

  //  input wire type_debug_port_s         debug_port_i,

    //7-segment control
    output reg   [7:0] r_sg,
    output reg   [7:0] r_an,

    // Uart interface IO signals
    input   logic                        uart_rxd_i,
    output                               uart_txd_o
);


// Local signals
type_if2mem_s                           if2mem;
type_mem2if_s                           mem2if;

type_lsu2dbus_s                         lsu2dbus;           // Signal to data memory 
type_dbus2lsu_s                         dbus2lsu; 

type_dbus2peri_s                        dbus2peri;
type_pipe2csr_s                         core2pipe;


type_clint2csr_s                        clint2csr;

// Peripheral module selection lines from the address decoder
logic                                   dmem_sel;
logic                                   uart_sel;
logic                                   clint_sel;
logic                                   plic_sel;
logic                                   bmem_sel;
logic                                   spi_sel;
logic                                   gpioA_sel;
logic                                   gpioB_sel;
logic                                   gpioC_sel;
logic                                   gpsw_sel; 
logic                                   gpled_sel;

logic                                   lsu_flush;
logic                                   store_busy;

// IRQ ignals
logic                                   irq_uart;
logic                                   irq_spi;
logic                                   irq_gpio;

logic                                   irq_clint_timer;
logic                                   irq_plic_target_0, irq_plic_target_1;

// Interfaces for different peripheral modules (for read mux)
type_peri2dbus_s                        mem2dbus;              // Signals from data memory 
type_peri2dbus_s                        uart2dbus; 
type_peri2dbus_s                        clint2dbus;
type_peri2dbus_s                        plic2dbus;              // Signals from boot memory 
type_peri2dbus_s                        spi2dbus;
type_peri2dbus_s                        gpio2dbus;


// Input assignment to local signals
assign core2pipe.csr_mhartid = `CSR_MHARTID;
assign core2pipe.ext_irq     = {irq_plic_target_1, irq_plic_target_0};
assign core2pipe.timer_irq   = irq_clint_timer;
assign core2pipe.soft_irq    = irq_soft_i;
assign core2pipe.uart_irq    = irq_uart;
assign core2pipe.spi_irq     = irq_spi;
assign core2pipe.gpio_irq    = irq_gpio;

    //7-segment
    wire  [7:0] w_sg;
    wire  [7:0] w_an;
    wire [31:0] _7seg_display;
    always @(posedge clk) begin
        r_sg <= w_sg;
        r_an <= w_an;
    end

    assign _7seg_display = {gpio_top_module.gpio2dbus_o.r_data[0],
                            gpio_top_module.gpio2dbus_o.r_data[1],
                            gpio_top_module.gpio2dbus_o.r_data[2],
                            gpio_top_module.gpio2dbus_o.r_data[3],
                            gpio_top_module.gpio2dbus_o.r_data[4],
                            gpio_top_module.gpio2dbus_o.r_data[5],
                            gpio_top_module.gpio2dbus_o.r_data[6],
                            gpio_top_module.gpio2dbus_o.r_data[7]
          /*                  gpio_top_module.gpio_A.gpio_irq_o,
                            gpio_top_module.gpio_B.gpio_irq_o,
                            gpio_top_module.gpio_C.gpio_irq_o,
                            gpio_top_module.gp_sw_led.gpio2dbus_o.r_data[0]*/};
 
    m_7segcon m_7segcon1(clk, 1'b1, 1'b0, _7seg_display, w_sg, w_an);

    `define DELAY7SEG  200000 // 200000 for 100MHz, 100000 for 50MHz -> 16000 for 8MHz

pipeline_top pipeline_top_module (
    .rst_n               (rst_n        ),
    .clk                 (clk          ),

    // IMEM interface signals 
    .if2mem_o            (if2mem),   
    .mem2if_i            (mem2if),

    // DBUS interface signals
    .lsu2dbus_o          (lsu2dbus),       // Signal to data bus 
    .dbus2lsu_i          (dbus2lsu),
    .store_busy          (store_busy),
    .lsu_flush_o         (),

    .clint2csr_i         (clint2csr),

    // IRQ lines
    .core2pipe_i         (core2pipe)

   // .debug_port_i        (debug_port_i)
);

//==================================  Data bus interconnect ==================================//
dbus_interconnect dbus_interconnect_module (
    .rst_n                 (rst_n    ),
    .clk                   (clk      ),

    // Data memory interface signals 
    .lsu2dbus_i            (lsu2dbus),
    .dbus2lsu_o            (dbus2lsu),

    // Peripheral (data memory and GPIO) selection signals
    .dmem_sel_o            (dmem_sel),
    .uart_sel_o            (uart_sel),
    .clint_sel_o           (clint_sel), 
    .plic_sel_o            (plic_sel),
    .spi_sel_o             (spi_sel),
    .gpioA_sel_o           (gpioA_sel),
    .gpioB_sel_o           (gpioB_sel),
    .gpioC_sel_o           (gpioC_sel),
    .gpsw_sel_o            (gpsw_sel),
    .gpled_sel_o           (gpled_sel),

    // Signals from dbus to peripherals
    .dbus2peri_o           (dbus2peri),

   // Data memory and peripheral interface signals 
    .mem2dbus_i            (mem2dbus),
    .uart2dbus_i           (uart2dbus),
    .clint2dbus_i          (clint2dbus),
    .plic2dbus_i           (plic2dbus),
    .spi2dbus_i            (spi2dbus),
    .gpio2dbus_i           (gpio2dbus)
);


uart uart_module (
    .rst_n                 (rst_n    ),
    .clk                   (clk      ),

    // Data bus and IO interface signals 
    .dbus2uart_i           (dbus2peri),  // This should be updated after the WB/AHBL bus interface is used
    .uart_sel_i            (uart_sel),
    .uart2dbus_o           (uart2dbus),
    .uart_irq_o            (irq_uart),
    .uart_rxd_i            (uart_rxd_i),
    .uart_txd_o            (uart_txd_o)
);

clint clint_module (
    .rst_n                 (rst_n    ),
    .clk                   (clk      ),

    // Data bus and peripheral interface signals 
    .dbus2clint_i          (dbus2peri),  // This should be updated if the bus interface is updated
    .clint_sel_i           (clint_sel),
    .clint2dbus_o          (clint2dbus),

    .clint2csr_o           (clint2csr),
    .clint_timer_irq_o     (irq_clint_timer)
);

plic_top plic_top_module (
    .rst_n                 (rst_n    ),
    .clk                   (clk      ),

    // Data bus interface signals 
    .dbus2plic_i           (dbus2peri),  // This should be updated if the bus interface is updated
    .plic_sel_i            (plic_sel),
    .plic2dbus_o           (plic2dbus),
    .edge_select_i         (PLIC_SOURCE_COUNT'(0)),
    .irq_src_i             ({'0, irq_uart}),
    .irq_targets_o         ({irq_plic_target_1, irq_plic_target_0})
);

memory mem_top_module(
    .rst_n                (rst_n),     // reset
    .clk                  (clk),       // clock
    .dmem_sel             (dmem_sel),
    .store_busy           (store_busy),
    .if2mem_i             (if2mem),  // Bus interface from IF to mem 
    .mem2if_o             (mem2if),  // From mem to IF
    .exe2mem_i            (dbus2peri), // Interface from execute to data memory 
    .mem2wrb_o            (mem2dbus)  // From data memory to writeback
);

spi_top spi_top_module (
    .rst_n                 (rst_n    ),
    .clk                   (clk      ),

    // Data bus and IO interface signals 
    .dbus2spi_i            (dbus2peri),  // This should be updated after the WB/AHBL bus interface is used
    .spi2dbus_o            (spi2dbus),
    .spi_sel_i             (spi_sel),
    .spi_irq_o             (irq_spi),

    .spi_clk_o             (spi_clk_o),
    .spi_cs_o              (spi_cs_o),
    .spi_miso_i            (spi_miso_i),
    .spi_mosi_o            (spi_mosi_o)
);

gpio_top gpio_top_module (
    .clk                   (clk),
    .rst_n                 (rst_n),
    .gpioA_sel_i           (gpioA_sel),
    .gpioB_sel_i           (gpioB_sel),
    .gpioC_sel_i           (gpioC_sel),
    .gpsw_sel_i            (gpsw_sel),
    .gpled_sel_i           (gpled_sel),
    .dbus2gpio_i           (dbus2peri),
    .gpio2dbus_o           (gpio2dbus),
    .gpio_irq_o            (irq_gpio),
    .gpio_io               (gpio_io),
    .gp_switch_i           (gp_switch_i),
    .gp_led_o              (gp_led_o)
);

/**************************************************************************************************/
module m_7segcon(w_clk, w_rst_x, w_load, w_din, r_sg, r_an);
    input  wire w_clk, w_rst_x, w_load;
    input  wire [31:0] w_din;
    output reg [7:0] r_sg;  // cathode segments
    output reg [7:0] r_an;  // common anode

    reg [31:0] r_val   = 0;
    reg [31:0] r_cnt   = 0;
    reg  [3:0] r_in    = 0;
    reg  [2:0] r_digit = 0;
    always@(posedge w_clk) r_val <= w_din;

    // For RVSoc_1
    `define r_7seg_A 8'b01110111
    `define r_7seg_r 8'b00000101
    `define r_7seg_c 8'b00001101
    `define r_7seg_h 8'b00010111
    `define r_7seg_P 8'b01100111
    `define r_7seg_o 8'b00011101

    // For Loading
    `define r_7seg_L 8'b00001110
    `define r_7seg_a 8'b01111101
    `define r_7seg_d 8'b00111101
    `define r_7seg_i 8'b00010000
    `define r_7seg_n 8'b00010101
    `define r_7seg_g 8'b11111011

    reg  [7:0] r_init   = 8'b00000000;
    reg  [7:0] r_load   = 8'b00000000;

    reg  [7:0] r_load_mem [0:15];
    integer i;
    initial begin
        r_load_mem[0] = 0;
        r_load_mem[1] = 0;
        r_load_mem[2] = 0;
        r_load_mem[3] = 0;
        r_load_mem[4] = 0;
        r_load_mem[5] = 0;
        r_load_mem[6] = 0;
        r_load_mem[7] = `r_7seg_L;
        r_load_mem[8] = `r_7seg_o;
        r_load_mem[9] = `r_7seg_a;
        r_load_mem[10] = `r_7seg_d;
        r_load_mem[11] = `r_7seg_i;
        r_load_mem[12] = `r_7seg_n;
        r_load_mem[13] = `r_7seg_g;
        r_load_mem[14] = 8'b10000000;
        r_load_mem[15] = 8'b10000000;
    end

//    reg[104:0] r_load_tmp = {49'b0, `r_7seg_L, `r_7seg_o, `r_7seg_a, `r_7seg_d, `r_7seg_i, `r_7seg_n, `r_7seg_g, 14'b0};
    reg [24:0] r_load_cnt = 0;
    reg  [3:0] r_lcnt = 0;
    always@(posedge w_clk) begin
        if(w_load) r_load_cnt <= r_load_cnt + 1;
        if(w_load && (r_load_cnt == 0)) r_lcnt <= r_lcnt + 1;//r_load_tmp <= r_load_tmp << 7;
    end

    always@(posedge w_clk) begin
        r_cnt <= (r_cnt>=(`DELAY7SEG-1)) ? 0 : r_cnt + 1;
        if(r_cnt==0) begin
        r_digit <= r_digit+ 1;
        if      (r_digit==0) begin r_an <= 8'b11111110; r_in <= r_val[3:0]  ; r_init = `r_7seg_c; r_load = r_load_mem[r_lcnt+7]; end
        else if (r_digit==1) begin r_an <= 8'b11111101; r_in <= r_val[7:4]  ; r_init = `r_7seg_o; r_load = r_load_mem[r_lcnt+6]; end
        else if (r_digit==2) begin r_an <= 8'b11111011; r_in <= r_val[11:8] ; r_init = `r_7seg_r; r_load = r_load_mem[r_lcnt+5]; end
        else if (r_digit==3) begin r_an <= 8'b11110111; r_in <= r_val[15:12]; r_init = `r_7seg_P; r_load = r_load_mem[r_lcnt+4]; end
        else if (r_digit==4) begin r_an <= 8'b11101111; r_in <= r_val[19:16]; r_init = `r_7seg_h; r_load = r_load_mem[r_lcnt+3]; end
        else if (r_digit==5) begin r_an <= 8'b11011111; r_in <= r_val[23:20]; r_init = `r_7seg_c; r_load = r_load_mem[r_lcnt+2]; end
        else if (r_digit==6) begin r_an <= 8'b10111111; r_in <= r_val[27:24]; r_init = `r_7seg_r; r_load = r_load_mem[r_lcnt+1]; end
        else                 begin r_an <= 8'b01111111; r_in <= r_val[31:28]; r_init = `r_7seg_A; r_load = r_load_mem[r_lcnt];   end
        end
    end
    wire [7:0] w_segments;
    m_7segled m_7segled (r_in, w_segments);
    always@(posedge w_clk) r_sg <= (w_load) ? ~r_load : (w_rst_x) ? ~w_segments : ~r_init;
endmodule

    /**************************************************************************************************/
module m_7segled (w_in, r_led);
    input  wire [3:0] w_in;
    output reg  [7:0] r_led;
    always @(*) begin
        case (w_in)
        4'h0  : r_led <= 8'b01111110;
        4'h1  : r_led <= 8'b00110000;
        4'h2  : r_led <= 8'b01101101;
        4'h3  : r_led <= 8'b01111001;
        4'h4  : r_led <= 8'b00110011;
        4'h5  : r_led <= 8'b01011011;
        4'h6  : r_led <= 8'b01011111;
        4'h7  : r_led <= 8'b01110000;
        4'h8  : r_led <= 8'b01111111;
        4'h9  : r_led <= 8'b01111011;
        4'ha  : r_led <= 8'b01110111;
        4'hb  : r_led <= 8'b00011111;
        4'hc  : r_led <= 8'b01001110;
        4'hd  : r_led <= 8'b00111101;
        4'he  : r_led <= 8'b01001111;
        4'hf  : r_led <= 8'b01000111;
        default:r_led <= 8'b00000000;
        endcase
    end
endmodule

endmodule : soc_top

