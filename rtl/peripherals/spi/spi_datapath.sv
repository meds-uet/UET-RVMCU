// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: SPI datapath with configurable clock rate. 
//
// Author: Shehzeen Malik, UET Lahore
// Date: 11.4.2023
// Updated: 23.6.2023


`timescale 1ns / 1ps
 
`ifndef VERILATOR
`include "../../defines/spi_defs.svh"
`else
`include "spi_defs.svh"
`endif


module spi_datapath (
    input  logic                                    rst_n,                    // reset
    input  logic                                    clk,                      // clock
    
    // MOSI MISO signals of SPI 
    input  logic                                    miso_i,
    output logic                                    mosi_o,

    //signals from controller
    input  logic                                    tx_shift_load_i,
    input  logic                                    miso_en_i,
    input  logic                                    mosi_first_en_i,	 
    input  logic                                    mosi_transmit_en_i,
    input  logic                                    mosi_mux_sel_i,
    // fifo
    input  logic                                    tx_fifo_read_i,
    input  logic                                    rx_fifo_write_i,
    output logic                                    tx_fifo_empty_o,

    //signals from and to reg update
    input  logic                                    spi_shift_direct_i,
    input  logic [2:0]                              tx_water_mark_i,
    input  logic [2:0]                              rx_water_mark_i,
    output logic                                    rx_fifo_mark_o,
    output logic                                    tx_fifo_mark_o,
    //fifo
    input  logic                                    rx_fifo_read_i,
    input  logic                                    tx_fifo_write_i,
    input  logic [7:0]                              tx_fifo_data_i,
    output logic                                    tx_fifo_full_o,
    output logic                                    rx_fifo_empty_o,
    output logic [7:0]                              rx_fifo_data_o
);
	
// Register Definitions
logic [7:0]                         rx_shift_data_ff,rx_shift_data_next;
logic [7:0]                         tx_shift_data_ff,tx_shift_data_next;
logic                               mosi_next;
// FIFO signals
logic [SPI_DEPTH_FIFO:0]            tx_fifo_count;
logic [SPI_DEPTH_FIFO:0]            rx_fifo_count;
logic [7:0]                         reg_tx_data;


// ----------------------------
// MISO Data Receiving 
// ----------------------------

// Receiver shift register
always_ff @(posedge clk , negedge rst_n) begin
    if(!rst_n)
        rx_shift_data_ff <= 8'h00;
    else
        rx_shift_data_ff <= rx_shift_data_next;
end

// Updating receiver shift register with data from miso
always_comb begin
    if (miso_en_i)
    begin
        if(spi_shift_direct_i)
            rx_shift_data_next = {miso_i, rx_shift_data_ff[7:1]}; //LSB first
        else
            rx_shift_data_next = {rx_shift_data_ff, miso_i};      //MSB first
    end
    else
        rx_shift_data_next = rx_shift_data_ff;
end


// ----------------------------
// MOSI Data Transmission 
// ----------------------------

//mosi register
always_ff @(posedge clk , negedge rst_n) begin
    if (!rst_n || !mosi_mux_sel_i)
        mosi_o <= 1'b0;
    else
        mosi_o <= mosi_next;
end

//Transmitter shift register
always_ff @(posedge clk , negedge rst_n) begin
    if(!rst_n)
        tx_shift_data_ff <= 8'h00;
    else if (tx_shift_load_i)
        tx_shift_data_ff <= reg_tx_data;
    else
        tx_shift_data_ff <= tx_shift_data_next;
end

//Updating mosi with data from transmit shift register
always_comb begin
    if (mosi_transmit_en_i | mosi_first_en_i) begin
        if (spi_shift_direct_i) begin
            tx_shift_data_next = {1'b0, tx_shift_data_ff[7:1]};
            mosi_next          = tx_shift_data_ff[0];
        end
        else begin
            tx_shift_data_next = {tx_shift_data_ff, 1'b0};
            mosi_next          = tx_shift_data_ff[7];
        end
    end
    else begin
        tx_shift_data_next = tx_shift_data_ff;
        mosi_next          = mosi_o;
    end
end

// ----------------------------
// FIFOs watermark checks 
// ----------------------------

//tx fifo watermark check
always_ff @ (posedge clk , negedge rst_n) begin
    if(!rst_n)
        tx_fifo_mark_o <= 1'b0;
    else begin
        if (tx_fifo_count[2:0] < tx_water_mark_i)
            tx_fifo_mark_o <= 1'b1;
        else if (tx_fifo_count[2:0] > tx_water_mark_i)
            tx_fifo_mark_o <= 1'b0;
    end	
end

//rx fifo watermark check
always_ff @(posedge clk , negedge rst_n) begin
    if(!rst_n)
        rx_fifo_mark_o <= 1'b0;
    else begin
        if (rx_fifo_count[2:0] > rx_water_mark_i)
            rx_fifo_mark_o <= 1'b1;
        else if (rx_fifo_count[2:0] < rx_water_mark_i)
            rx_fifo_mark_o <= 1'b0;
    end		
end

// ----------------------------
// Transmit and receive FIFOs
// ----------------------------

spi_fifo tx_fifo(
    .clk          (clk),
    .rst_n        (rst_n),
    .in_data_i    (tx_fifo_data_i),
    .out_data_o   (reg_tx_data),
    .data_count_o (tx_fifo_count),
    .fifo_read_i  (tx_fifo_read_i),
    .fifo_write_i (tx_fifo_write_i),
    .fifo_full_o  (tx_fifo_full_o),
    .fifo_empty_o (tx_fifo_empty_o)
);

spi_fifo rx_fifo(
    .clk          (clk),
    .rst_n        (rst_n),
    .in_data_i    (rx_shift_data_ff),
    .out_data_o   (rx_fifo_data_o),
    .data_count_o (rx_fifo_count),
    .fifo_read_i  (rx_fifo_read_i),
    .fifo_write_i (rx_fifo_write_i),
    .fifo_full_o  (),
    .fifo_empty_o (rx_fifo_empty_o)
);	
	
	
endmodule