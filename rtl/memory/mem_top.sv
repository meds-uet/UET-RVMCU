// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: 
//
// Author: Shehzeen Malik, UET Lahore
// Date: 05.4.2024

`ifndef VERILATOR
`include "../defines/pcore_interface_defs.svh"
`else
`include "pcore_interface_defs.svh"
`endif

module mem_top(
    input   logic                                rst_n,     // reset
    input   logic                                clk,       // clock
      // Instruction memory fetch stage
    input  wire type_if2imem_s                   if2mem_i,  // Bus interface from IF to mem 
    output type_imem2if_s                        mem2if_o,  // From mem to IF

  // Data memory
    input  logic                                 dmem_sel,
    input  type_dbus2peri_s                      exe2mem_i, // Interface from execute to data memory 
    output type_peri2dbus_s                      mem2wrb_o  // From data memory to writeback
);
    //============================= Main memory and its memory interface =============================//
logic                                 instr_req;
logic [`XLEN-3:0]                     instr_address;
logic [`XLEN-1:0]                     instr_read;
logic                                 instr_ack;
logic                                 load_req;
logic                                 store_req;
logic                                 wrb_n;
logic [`XLEN-1:0]                     write_data;
logic [`XLEN-3:0]                     mem_address;
logic [3:0]                           write_sel_byte;
logic [`XLEN-1:0]                     read_data;
logic                                 read_ack;


assign load_req         = exe2mem_i.req & dmem_sel & !exe2mem_i.w_en;
assign store_req        = exe2mem_i.req & dmem_sel & exe2mem_i.w_en;
assign write_data       = exe2mem_i.w_data;
assign write_sel_byte   = exe2mem_i.sel_byte;
assign mem_address      = exe2mem_i.addr[`XLEN-1:2];
assign mem2wrb_o.r_data = read_data;
assign mem2wrb_o.ack    = read_ack;
assign mem2if_o.r_data  = instr_read;
assign mem2if_o.ack     = instr_ack; 
assign instr_req        = if2mem_i.req;
assign instr_address    = if2mem_i.addr[`XLEN-1:2];

always_comb begin
    if (store_req)
        wrb_n = 1'b0;
    else if (load_req)
        wrb_n = 1'b1;
    else
        wrb_n = 1'b0;
end

// Dual port memory instantiation and initialization
sky130_sram_1kbyte_1rw1r_8x1024_8 mem_sram(
    // Port 0: RW
    .clk0                  (clk),
    .csb0                  (!dmem_sel), // active low chip select
    .web0                  (wrb_n),
    .wmask0                (write_sel_byte),
    .addr0                 (mem_address),
    .din0                  (write_data),
    .dout0                 (read_data),
// Port 1: R
    .clk1                  (clk),
    .csb1                  (!instr_req), // active low chip select
    .addr1                 (instr_address),
    .dout1                 (instr_read)
);

// Synchronous load-store ack operation for memory
always_ff @(posedge clk) begin  
    if (store_req) begin
        read_ack <= 1'b1;
    end
    else if (load_req) begin
        read_ack    <= 1'b1;
    end else begin
        read_ack  <= 1'b0;
    end
end

// synchronous intruction fetch
always_ff @(posedge clk) begin
    if (!rst_n) begin
        instr_ack  <= 1'b0;
    end else begin
        if (instr_req & !instr_ack) begin
            instr_ack    <= 1'b1;
        end else if (instr_req & instr_ack)
            instr_ack <= 1'b0;
        else begin
            instr_ack  <= 1'b0;
        end
    end
end

endmodule

