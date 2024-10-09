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
    output logic                                 store_busy,
    input  type_dbus2peri_s                      exe2mem_i, // Interface from execute to data memory 
    output type_peri2dbus_s                      mem2wrb_o  // From data memory to writeback
);
    //============================= Main memory and its memory interface =============================//
type_mem_wr_states_e                  c_state, n_state;
logic                                 load_req;
logic                                 store_req;
logic                                 mem_read;
logic                                 mem_modify;
logic                                 mem_write;
logic [`XLEN-1:0]                     read_data;
logic [`XLEN-1:0]                     write_data;
logic [`XLEN-1:0]                     changed_data;


// Dual port memory instantiation and initialization
logic [`XLEN-1:0]          dualport_memory[`IDMEM_SIZE]; //4194303

`ifdef COMPLIANCE
initial
begin
     // Reading the contents of imem.txt file to memory variable
     // Not required to $readmem for COMPLIANCE Tests
end

`else
initial 
// begin
//     // Reading the contents of example imem.txt file to memory variable
//      $readmemh("../../../imem.txt", dualport_memory);  
// end
begin
    // Reading the contents of example imem.txt file to memory variable
     $readmemh("C:/Users/Hp/Desktop/MEDS/LFX/UET-RVMCU/rtl/memory/imem.txt", dualport_memory);  
end
`endif
assign changed_data = dualport_memory[exe2mem_i.addr[`XLEN-1:2]];
assign load_req = exe2mem_i.req & dmem_sel & !exe2mem_i.w_en;
assign store_req = exe2mem_i.req & dmem_sel & exe2mem_i.w_en;

// Store operation state machine for dealing with sel_byte
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        c_state <= MEM_IDLE;
    else
        c_state <= n_state;
end

always_comb begin
    case (c_state)
        MEM_IDLE   : if (store_req)
                         n_state = MEM_MODIFY;
                     else
                         n_state = MEM_IDLE;
        MEM_MODIFY : n_state = MEM_WRITE;
        MEM_WRITE  : n_state = MEM_IDLE;
        default: begin
            n_state = MEM_IDLE;
        end
    endcase
end

always_comb begin
    case (c_state)
        MEM_IDLE  : begin if (store_req) begin
                              store_busy   = 1'b1;
                              mem_read   = 1'b1;
                              mem_modify = 1'b0;
                              mem_write  = 1'b0;
                    end else begin
                              store_busy   = 1'b0;
                              mem_read   = 1'b0;
                              mem_modify = 1'b0;
                              mem_write  = 1'b0;
                          end
                    end
        MEM_MODIFY : begin 
                        store_busy   = 1'b1;
                        mem_read   = 1'b0;
                        mem_modify = 1'b1;
                        mem_write  = 1'b0;
                     end
        MEM_WRITE  : begin 
                        store_busy   = 1'b0;
                        mem_read   = 1'b0;
                        mem_modify = 1'b0;
                        mem_write  = 1'b1;
                     end            
        default: begin
            store_busy   = 1'b0;
            mem_read   = 1'b0;
            mem_modify = 1'b0;
            mem_write  = 1'b0;
        end
    endcase
end

// write data based on sel_byte
always_comb begin
   // if (mem_modify) begin
        write_data = read_data;
        case (exe2mem_i.sel_byte)
            4'b0001: write_data = {write_data[`XLEN-1:8],exe2mem_i.w_data[7:0]};
            4'b0010: write_data = {write_data[`XLEN-1:16],exe2mem_i.w_data[15:8],write_data[7:0]};
            4'b0100: write_data = {write_data[`XLEN-1:24],exe2mem_i.w_data[23:16],write_data[15:0]};
            4'b1000: write_data = {exe2mem_i.w_data[31:24],write_data[23:0]};
            4'b0011: write_data = {write_data[`XLEN-1:16],exe2mem_i.w_data[15:0]};
            4'b1100: write_data = {exe2mem_i.w_data[31:16],write_data[15:0]}; 
            4'b1111: write_data = exe2mem_i.w_data;
            default: write_data = '0;
        endcase
    /*    end
    else
        write_data = '0;*/
   end 

// Synchronous load operation for memory
always_ff @(posedge clk) begin  
    if (mem_write)        //& ~mem_out.ack 
        dualport_memory[exe2mem_i.addr[`XLEN-1:2]] <= write_data; 
end

//asynchronous data memory read
always_comb begin
    if (load_req) begin
        mem2wrb_o.r_data = dualport_memory[exe2mem_i.addr[`XLEN-1:2]];
        mem2wrb_o.ack    = 1'b1;
        read_data        = '0;
    end else if (mem_read) begin
        mem2wrb_o = '0;
        read_data = dualport_memory[exe2mem_i.addr[`XLEN-1:2]];
    end else begin
        mem2wrb_o = '0;
        read_data = read_data;
    end
end

// Asynchronous intruction fetch
always_comb begin //ff @ (posedge clk or negedge rst_n) begin
   /* if (!rst_n) begin
        mem2if_o.r_data = `INSTR_NOP;
        mem2if_o.ack = 1'b0;
    end else begin*/
        if (if2mem_i.req) begin
        mem2if_o.r_data = dualport_memory[if2mem_i.addr[`XLEN-1:2]];
        mem2if_o.ack = 1'b1;
        end else
        mem2if_o  = '0;
  //  end
end

endmodule
