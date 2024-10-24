// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: 
//
// Author: Shehzeen Malik, UET Lahore
// Date: 05.4.2024

`ifndef VERILATOR
`include "../defines/mem_defs.svh"
`else
`include "mem_defs.svh"
`endif

module memory(
    input   logic                                rst_n,     // reset
    input   logic                                clk,       // clock
      // Instruction memory fetch stage
    input  wire type_if2mem_s                    if2mem_i,  // Bus interface from IF to mem 
    output type_mem2if_s                         mem2if_o,  // From mem to IF

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
logic                                 store_done;
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

// Dual port memory instantiation and initialization
`ifdef FPGA
(*ram_style = "block"*) reg [7:0]          mem_bank_0[`MEM_BANK_SIZE];
(*ram_style = "block"*) reg [7:0]          mem_bank_1[`MEM_BANK_SIZE];
(*ram_style = "block"*) reg [7:0]          mem_bank_2[`MEM_BANK_SIZE];
(*ram_style = "block"*) reg [7:0]          mem_bank_3[`MEM_BANK_SIZE];

`else
logic [7:0]          mem_bank_0[`MEM_BANK_SIZE];
logic [7:0]          mem_bank_1[`MEM_BANK_SIZE];
logic [7:0]          mem_bank_2[`MEM_BANK_SIZE];
logic [7:0]          mem_bank_3[`MEM_BANK_SIZE];

`endif

// Reading the contents of imem.txt file to memory variable
`ifdef COMPLIANCE
initial
begin
     // Not required to $readmem for COMPLIANCE Tests
end

`else
initial 
begin
     $readmemh("imem_1.txt", mem_bank_3);
     $readmemh("imem_2.txt", mem_bank_2);  
     $readmemh("imem_3.txt", mem_bank_1);  
     $readmemh("imem_4.txt", mem_bank_0);   
end
`endif

// Synchronous load-store operation for memory based on sel_byte
always_ff @(posedge clk) begin  
    if (store_req) begin
        case (write_sel_byte)
            4'b0001: mem_bank_0[mem_address] <= write_data[7:0];
            4'b0010: mem_bank_1[mem_address] <= write_data[15:8];
            4'b0100: mem_bank_2[mem_address] <= write_data[23:16];
            4'b1000: mem_bank_3[mem_address] <= write_data[31:24];
            4'b0011: begin mem_bank_0[mem_address] <= write_data[7:0];
                           mem_bank_1[mem_address] <= write_data[15:8]; 
                     end
            4'b1100: begin mem_bank_2[mem_address] <= write_data[23:16];
                           mem_bank_3[mem_address] <= write_data[31:24]; 
                     end 
            4'b1111: begin mem_bank_0[mem_address] <= write_data[7:0];
                           mem_bank_1[mem_address] <= write_data[15:8];
                           mem_bank_2[mem_address] <= write_data[23:16];
                           mem_bank_3[mem_address] <= write_data[31:24]; 
                     end
        endcase
        read_ack <= 1'b1;
    end
    else if (load_req) begin
        read_data <= {mem_bank_3[mem_address],
                      mem_bank_2[mem_address],
                      mem_bank_1[mem_address],
                      mem_bank_0[mem_address] };
        read_ack    <= 1'b1;
    end else begin
        read_ack  <= 1'b0;
    end
end

// synchronous intruction fetch
always_ff @(posedge clk) begin
    if (!rst_n) begin
        instr_read <= `INSTR_NOP;
        instr_ack  <= 1'b0;
    end else begin
        if (instr_req & !instr_ack) begin
            instr_read <= {mem_bank_3[instr_address],
                           mem_bank_2[instr_address],
                           mem_bank_1[instr_address],
                           mem_bank_0[instr_address] };
            instr_ack    <= 1'b1;
        end else if (instr_req & instr_ack)
            instr_ack <= 1'b0;
        else begin
            instr_read <= `INSTR_NOP;
            instr_ack  <= 1'b0;
        end
    end
end

endmodule
