// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: The fetch unit responsible for PC generation.
//
// Author: Muhammad Tahir, UET Lahore
// Date: 11.8.2022


`ifndef VERILATOR
`include "../defines/mem_defs.svh"
`else
`include "mem_defs.svh"
`endif

module fetch (

    input   logic                                   rst_n,           // reset
    input   logic                                   clk,             // clock

   // IF <---> IMEM interface
    output type_if2mem_s                            if2mem_o,     // Instruction memory request
    input wire type_mem2if_s                        mem2if_i,     // Instruction memory response

    // IF <---> ID interface
    output type_if2id_data_s                        if2id_data_o,
    output type_if2id_ctrl_s                        if2id_ctrl_o, 

    // EXE <---> Fetch feedback interface
    input wire type_exe2if_fb_s                     exe2if_fb_i,

    // CSR <---> Fetch feedback interface
    input wire type_csr2if_fb_s                     csr2if_fb_i,
    
    // Forward <---> Fetch interface
    input wire type_fwd2if_s                        fwd2if_i
   // output logic                                    if2fwd_stall_o
);


// Local siganls       
type_mem2if_s                        mem2if;

type_if2id_data_s                    if2id_data;
type_if2id_ctrl_s                    if2id_ctrl;

type_exe2if_fb_s                     exe2if_fb;
type_csr2if_fb_s                     csr2if_fb;

type_fwd2if_s                        fwd2if;

// Exception related signals
type_exc_code_e                      exc_code_next, exc_code_ff;
logic                                exc_req_next, exc_req_ff;
logic                                irq_req_next, irq_req_ff;
logic                                kill_req;

// Imem address generation
logic [`XLEN-1:0]                    pc_ff, pc_plus_4;              // Current value of program counter (PC)
logic [`XLEN-1:0]                    pc_next;                       // Updated value of PC
logic [`XLEN-1:0]                    instr_word;
logic                                if_stall;
logic                                pc_misaligned;


assign mem2if = mem2if_i;

assign exe2if_fb = exe2if_fb_i;
assign csr2if_fb = csr2if_fb_i;
assign fwd2if    = fwd2if_i;

// Evaluation for misaligned address
assign pc_misaligned = pc_ff[1] | pc_ff[0];

// Stall signal for IF stage
assign if_stall = fwd2if.if_stall | (~mem2if.ack) | irq_req_next;

// PC update state machine
always_ff @(posedge clk) begin
    if (~rst_n) begin
        pc_ff <= `PC_RESET;
    end else begin
        pc_ff <= pc_next;
    end
end

assign pc_plus_4 = pc_ff + 32'd4;

////////////////////////////////////////////////////////////////
// logic [`XLEN-1:0]                    pc_new_jal; 
logic [`XLEN-1:0]                    jal_imm;            
logic                                is_jal;

always_comb begin
    pc_next = (pc_plus_4);

    case (1'b1)
        fwd2if.csr_new_pc_req : begin
            pc_next = csr2if_fb.pc_new;
        end
        fwd2if.wfi_req        : begin
            pc_next = csr2if_fb.pc_new;  
        end
        fwd2if.exe_new_pc_req : begin
            pc_next = exe2if_fb.pc_new;  
        end
        if_stall              : begin  
            pc_next = pc_ff;
        end 
        is_jal                : begin  // MT JAL
            pc_next = pc_ff + jal_imm; // pc_new_jal;
        end
        default                 : begin       end
    endcase
end



assign jal_imm = {{12{instr_word[31]}}, instr_word[19:12], instr_word[20], instr_word[30:21], 1'b0};
//assign pc_new_jal = pc_ff + jal_imm;

assign is_jal = if2id_data.instr[6:2] == OPCODE_JAL_INST;

////////////////////////////////////////////////////////////////


// Instruction fetch related exceptions including address misaligned, instruction page fault 
// as well as instruction access fault
always_ff @(posedge clk) begin
    if (~rst_n) begin
        exc_req_ff  <= '0; 
        exc_code_ff <= EXC_CODE_NO_EXCEPTION;
    end else begin
        exc_req_ff  <= exc_req_next;
        exc_code_ff <= exc_code_next;
    end
end


always_comb begin
exc_req_next   = exc_req_ff;
exc_code_next  = exc_code_ff;
   
    if (fwd2if.csr_new_pc_req | fwd2if.exe_new_pc_req | fwd2if.wfi_req | (~fwd2if.if_stall & exc_req_ff)) begin    
        exc_req_next  = 1'b0;
        exc_code_next = EXC_CODE_NO_EXCEPTION;
    end else if (pc_misaligned) begin
        exc_req_next  = 1'b1;
        exc_code_next = EXC_CODE_INSTR_MISALIGN; 
    end

    // TODO : Deal with instruction access fault as well (EXC_CODE_INSTR_ACCESS_FAULT) for that 
    // purpose need a separate signal from MMU
end


always_ff @(posedge clk) begin
    if (~rst_n) begin
        irq_req_ff  <= '0; 
    end else begin
        irq_req_ff  <= irq_req_next;
    end
end

always_comb begin
irq_req_next   = irq_req_ff;
   
    if (fwd2if.csr_new_pc_req | fwd2if.exe_new_pc_req | (~fwd2if.if_stall & irq_req_ff)) begin    // 
        irq_req_next  = 1'b0;
    end else if (csr2if_fb.irq_req & ~irq_req_ff) begin
        irq_req_next   = 1'b1;
    end 

end

// Kill request to kill an on going request
assign kill_req = fwd2if.csr_new_pc_req | fwd2if.exe_new_pc_req;

assign instr_word = (irq_req_next) ? `INSTR_NOP : mem2if.r_data; //(~mem2if.ack) |

// Update the outputs to Imem module

assign if2mem_o.addr = pc_ff; 
assign if2mem_o.req  = kill_req ? 1'b0 : `IMEM_INST_REQ;

// Update the outputs to ID stage
assign if2id_data.instr         = instr_word;
assign if2id_data.pc            = pc_ff;
assign if2id_data.pc_next       = is_jal ? (pc_plus_4) : pc_next;
assign if2id_data.instr_flushed = 1'b0;

assign if2id_data.exc_code      = exc_code_next;
assign if2id_ctrl.exc_req       = exc_req_next;
assign if2id_ctrl.irq_req       = irq_req_next;


assign if2id_data_o             = if2id_data;
assign if2id_ctrl_o             = if2id_ctrl;

endmodule : fetch

