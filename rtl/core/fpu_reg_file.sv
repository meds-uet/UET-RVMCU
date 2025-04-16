// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: The FPU register file with write operation on -ve clock edge.
//
// Author: Muhammad Boota, MEDS UET
// Date: 19.2.2025

`ifndef VERILATOR
`include "../defines/pcore_interface_defs.svh"
`else
`include "pcore_interface_defs.svh"
`endif

module fpu_reg_file (

    input   logic                      rst_n,               // reset
    input   logic                      clk,                 // clock

    // IDU <---> RF interface
    input   logic [`RF_AWIDTH-1:0]     id2f_rf_rs1_addr_i,    // rs1 read address
    input   logic [`RF_AWIDTH-1:0]     id2f_rf_rs2_addr_i,    // rs2 read address
    input   logic [`RF_AWIDTH-1:0]     id2f_rf_rs3_addr_i,    // rs3 read address
    output  logic [`XLEN-1:0]          f_rf2id_rs1_data_o,    // rs1 read data
    output  logic [`XLEN-1:0]          f_rf2id_rs2_data_o,    // rs2 read data
    output  logic [`XLEN-1:0]          f_rf2id_rs3_data_o,    // rs3 read data

    input   logic                      id2f_rf_rd_wr_req_i,   // write request
    input   logic [`RF_AWIDTH-1:0]     id2f_rf_rd_addr_i,     // rd write address
    input   logic [`XLEN-1:0]          id2f_rf_rd_data_i     // rd write data
);

// register file instantiation
logic   [`XLEN-1:0]          fpu_register_file[`RF_SIZE];

// local signals
logic                        f_rs1_addr_valid;
logic                        f_rs2_addr_valid;
logic                        f_rs3_addr_valid;
logic                        f_rf_wr_valid;

// control signals for validity of register file read/write operations
assign  f_rs1_addr_valid   = |id2f_rf_rs1_addr_i;
assign  f_rs2_addr_valid   = |id2f_rf_rs2_addr_i;
assign  f_rs3_addr_valid   = |id2f_rf_rs3_addr_i;
assign  f_rf_wr_valid      = (|id2f_rf_rd_addr_i) & id2f_rf_rd_wr_req_i;

// asynchronous read operation for two register operands
assign  f_rf2id_rs1_data_o = (f_rs1_addr_valid) 
                         ? fpu_register_file[id2f_rf_rs1_addr_i] 
                         : '0;
assign  f_rf2id_rs2_data_o = (f_rs2_addr_valid) 
                         ? fpu_register_file[id2f_rf_rs2_addr_i] 
                         : '0;
assign  f_rf2id_rs3_data_o = (f_rs3_addr_valid) 
                         ? fpu_register_file[id2f_rf_rs3_addr_i] 
                         : '0;

// Write operation is performed on the negative edge
always_ff @( negedge clk) begin
    if (~rst_n) begin
        fpu_register_file <= '{default: '0};
    end else if (f_rf_wr_valid) begin
        fpu_register_file[id2f_rf_rd_addr_i] <= id2f_rf_rd_data_i;
    end

end

endmodule : fpu_reg_file
