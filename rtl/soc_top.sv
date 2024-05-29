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
`include "./defines/mem_defs.svh"
`include "./defines/plic_defs.svh"
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
    /*output logic                         spi_clk_o,
    output logic                         spi_cs_o,
    input  logic                         spi_miso_i,
    output logic                         spi_mosi_o,*/

    //GPIO interface signals
    inout  logic [23:0]                  gpio_io,
    input  logic [15:0]                  gp_switch_i,
    output logic [15:0]                  gp_led_o

  //  input wire type_debug_port_s         debug_port_i,

    // Uart interface IO signals
    /*input   logic                        uart_rxd_i,
    output                               uart_txd_o*/
);


// Local signals
type_if2mem_s                           if2mem;

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
type_peri2dbus_s                        plic2dbus; 
type_peri2dbus_s                        bmem2dbus;              // Signals from boot memory 
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

pipeline_top pipeline_top_module (
    .rst_n               (rst_n        ),
    .clk                 (clk          ),

    // IMEM interface signals 
    .if2mem_o            (if2mem),   
    .mem2if_i            (mem2if),

    // DBUS interface signals
    .lsu2dbus_o          (lsu2dbus),       // Signal to data bus 
    .dbus2lsu_i          (dbus2lsu),
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


/*uart uart_module (
    .rst_n                 (rst_n    ),
    .clk                   (clk      ),

    // Data bus and IO interface signals 
    .dbus2uart_i           (dbus2peri),  // This should be updated after the WB/AHBL bus interface is used
    .uart_sel_i            (uart_sel),
    .uart2dbus_o           (uart2dbus),
    .uart_irq_o            (irq_uart),
    .uart_rxd_i            (uart_rxd_i),
    .uart_txd_o            (uart_txd_o)
);*/

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
    .dmem_sel_i           (dmem_sel),
    .if2mem_i             (if2mem),  // Bus interface from IF to mem 
    .mem2if_o             (mem2if),  // From mem to IF
    .exe2mem_i            (dbus2peri), // Interface from execute to data memory 
    .mem2wrb_o            (mem2dbus)  // From data memory to writeback
);

/*spi_top spi_top_module (
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
);*/

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
    .gpio_io               (gpio),
    .gp_switch_i           (gp_switch_i),
    .gp_led_o              (gp_led_o)
);

endmodule : soc_top

