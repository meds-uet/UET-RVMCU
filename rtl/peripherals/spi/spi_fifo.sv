// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: FIFO for SPI module
//
// Author: Shehzeen Malik, UET Lahore
// Date: 02.5.2023
// Updated: 19.6.2023
 

`timescale 1ns / 1ps
 
`ifndef VERILATOR
`include "../../defines/spi_defs.svh"
`else
`include "spi_defs.svh"
`endif

module spi_fifo (
    input  logic                                    clk,
    input  logic                                    rst_n,
    input  logic [7:0]                              in_data_i,
    output logic [7:0]                              out_data_o,
    //data_count_o in fifo
    output logic [SPI_DEPTH_FIFO:0]                 data_count_o,
    //read and write requests
    input  logic                                    fifo_read_i,
    input  logic                                    fifo_write_i,
    //flags
    output logic                                    fifo_full_o,
    output logic                                    fifo_empty_o
);


//fifo
logic [7:0]                         fifo_buffer[SPI_DEPTH_FIFO-1:0];

//fifo pointers for read and write operations
logic [SPI_DEPTH_FIFO:0]                 read_ptr , write_ptr; 


//flags update
assign fifo_empty_o = (data_count_o == 0);
assign fifo_full_o  = (data_count_o == SPI_DEPTH_FIFO[SPI_DEPTH_FIFO:0]);

//fifo operation
always_ff @(posedge clk , negedge rst_n) begin
    if (!rst_n) begin
        read_ptr     <= '0;
        write_ptr    <= '0;
        data_count_o <= '0;
        out_data_o   <= '0;
        for (int i = 0; i < SPI_DEPTH_FIFO; i = i+1)		    
            fifo_buffer[i] <= '0;
    end else begin
        //write operation
        if (fifo_write_i && !fifo_full_o) begin
            fifo_buffer[write_ptr] <= in_data_i;
            data_count_o           <= data_count_o + 1;
            write_ptr              <= write_ptr + 1;
        end
        
        if (write_ptr == 4'h8)
            write_ptr <= '0;
        
        //read operation
        if (fifo_read_i && !fifo_empty_o) begin
            out_data_o   <= fifo_buffer[read_ptr];
            read_ptr     <= read_ptr + 1;
            data_count_o <= data_count_o - 1;
        end
        
        if (read_ptr == 4'h8)
            read_ptr <= '0;
    end
end

endmodule