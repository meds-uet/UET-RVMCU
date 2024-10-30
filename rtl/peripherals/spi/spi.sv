// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: SPI top module with configurable clock rate. 
//
// Author: Shehzeen Malik, UET Lahore
// Date: 11.4.2023
// Updated: 19.6.2023


`timescale 1ns / 1ps

`ifndef VERILATOR
`include "../../defines/spi_defs.svh"
`else
`include "spi_defs.svh"
`endif


module spi (
    input  logic                                    rst_n,               // reset
    input  logic                                    clk,               // clock
    
	// Dbus to SPI module interface
    input  wire type_dbus2peri_s                    dbus2spi_i,          // SPI dbus input signals
    output type_peri2dbus_s                         spi2dbus_o,          // SPI dbus output signals
    // Selection signal from address decoder of dbus interconnect 
    input  logic                                    spi_sel_i,
     
    //SPI clock
    output logic                                    spi_clk_o,
    
    //SPI slave select
    output logic [1:0]                              spi_cs_o,
    
     // Interrupt signal from SPI
    output logic                                    spi_irq_o,
     
     // MOSI MISO signals of SPI 
    input  logic                                    spi_miso_i,
    output logic                                    spi_mosi_o

);
	
//Internal Registers
logic [1:0]                         spi_reg_cs_default;
logic [1:0]                         spi_reg_cs_id;
logic [11:0]                        spi_clock_period;
logic                               spi_clk_phase   ;
logic                               spi_clk_polarity;
logic [1:0]                         spi_cs_mode     ;
logic [7:0]                         spi_c2t_time        ;
logic [7:0]                         spi_t2c_time        ;
logic [7:0]                         spi_inter_cs_time   ;
logic [7:0]                         spi_inter_fr_time;
logic [3:0]                         spi_data_size   ;
logic                               spi_rx_fifo_wr_disable;
logic                               spi_busy;
logic                               spi_hold_off;
logic                               mosi_mux_sel;
logic                               spi_tx_fifo_empty;
logic                               spi_mosi_fst_transmit;
logic                               spi_mosi_en;
logic                               spi_miso_en;
logic                               tx_shift_load;
logic                               spi_tx_fifo_read;
logic                               spi_rx_fifo_write;
logic                               spi_tx_fifo_full;
logic                               spi_rx_fifo_empty;
logic [7:0]                         spi_rx_fifo_data;
logic [7:0]                         spi_tx_fifo_data;
logic                               spi_rx_fifo_read;
logic                               spi_tx_fifo_write;
logic                               spi_rx_fifo_mark;
logic                               spi_tx_fifo_mark;
logic [2:0]                         spi_tx_water_mark;
logic [2:0]                         spi_rx_water_mark;
logic                               spi_shift_direct;

//============================= SPI Controller interface ============================//
spi_controller spi_controller_module(
    .rst_n                     (rst_n),
    .clk                       (clk),
    .spi_slave_sel_i           (spi_cs_o),
    .reg_cs_default_ff_i       (spi_reg_cs_default),
    .reg_cs_id_ff_i            (spi_reg_cs_id),
    .spi_clock_period_i        (spi_clock_period),
    .spi_clk_phase_i           (spi_clk_phase),
    .spi_clk_polarity_i        (spi_clk_polarity),
    .spi_cs_mode_i             (spi_cs_mode),
    .c2t_time_i                (spi_c2t_time),
    .t2c_time_i                (spi_t2c_time),
    .inter_cs_time_i           (spi_inter_cs_time),
    .inter_frame_time_i        (spi_inter_fr_time),
    .spi_data_size_i           (spi_data_size),
    .rx_fifo_wr_disable_i      (spi_rx_fifo_wr_disable),
    .spi_busy_o                (spi_busy),
    .spi_hold_off_o            (spi_hold_off),
    .tx_fifo_empty_i           (spi_tx_fifo_empty),
    .spi_mosi_first_transmit_o (spi_mosi_fst_transmit),
    .spi_mosi_en_o             (spi_mosi_en),
    .spi_miso_en_o             (spi_miso_en),
    .tx_shift_load_o           (tx_shift_load),
    .tx_fifo_read_o            (spi_tx_fifo_read),
    .rx_fifo_write_o           (spi_rx_fifo_write),
    .mosi_mux_sel_o            (mosi_mux_sel),
    .sclk_r_o                  (spi_clk_o)
);
	
//============================ SPI Datapath interface ===============================//
spi_datapath spi_datapath_module(
    .rst_n              (rst_n),
    .clk                (clk),
    .miso_i             (spi_miso_i),
    .mosi_o             (spi_mosi_o),
    .tx_shift_load_i    (tx_shift_load),
    .miso_en_i          (spi_miso_en),
    .mosi_first_en_i    (spi_mosi_fst_transmit),	 
    .mosi_transmit_en_i (spi_mosi_en),
    .mosi_mux_sel_i     (mosi_mux_sel),
    .tx_fifo_read_i     (spi_tx_fifo_read),
    .rx_fifo_write_i    (spi_rx_fifo_write),
    .tx_fifo_empty_o    (spi_tx_fifo_empty),
    .spi_shift_direct_i (spi_shift_direct),
    .tx_water_mark_i    (spi_tx_water_mark),
    .rx_water_mark_i    (spi_rx_water_mark),
    .rx_fifo_mark_o     (spi_rx_fifo_mark),
    .tx_fifo_mark_o     (spi_tx_fifo_mark),
    .rx_fifo_read_i     (spi_rx_fifo_read),
    .tx_fifo_write_i    (spi_tx_fifo_write),
    .tx_fifo_data_i     (spi_tx_fifo_data),
    .tx_fifo_full_o     (spi_tx_fifo_full),
    .rx_fifo_empty_o    (spi_rx_fifo_empty),
    .rx_fifo_data_o     (spi_rx_fifo_data)
);

//=========================== SPI Registers Update interface ========================//
spi_regs spi_regs_module (
    .rst_n                (rst_n),
    .clk                  (clk),
    .spi_sel_i            (spi_sel_i),
    .irq_o                (spi_irq_o),
    .dbus2spi_i           (dbus2spi_i),
    .spi2dbus_o           (spi2dbus_o),
    .spi_busy_i           (spi_busy),
    .spi_hold_off_i       (spi_hold_off),
    .spi_clock_period_o   (spi_clock_period),
    .spi_clk_phase_o      (spi_clk_phase),
    .spi_clk_polarity_o   (spi_clk_polarity),
    .reg_cs_mode_ff_o     (spi_cs_mode),
    .c2t_time_o           (spi_c2t_time),
    .t2c_time_o           (spi_t2c_time),
    .inter_cs_time_o      (spi_inter_cs_time),
    .inter_frame_time_o   (spi_inter_fr_time),
    .spi_data_size_o      (spi_data_size),
    .reg_cs_default_ff_o  (spi_reg_cs_default),
    .reg_cs_id_ff_o       (spi_reg_cs_id),
    .tx_fifo_full_i       (spi_tx_fifo_full),
    .rx_fifo_empty_i      (spi_rx_fifo_empty),
    .rx_fifo_data_i       (spi_rx_fifo_data),
    .reg_tx_data_ff_o     (spi_tx_fifo_data),
    .rx_fifo_wr_disable_o (spi_rx_fifo_wr_disable),
    .rx_fifo_read_o       (spi_rx_fifo_read),
    .tx_fifo_write_o      (spi_tx_fifo_write),
    .rx_fifo_mark_i       (spi_rx_fifo_mark),
    .tx_fifo_mark_i       (spi_tx_fifo_mark),
    .tx_water_mark_o      (spi_tx_water_mark),
    .rx_water_mark_o      (spi_rx_water_mark),
    .spi_shift_direct_o   (spi_shift_direct)
);
	
endmodule