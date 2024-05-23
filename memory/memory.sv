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
    input  wire type_exe2mem_s                   exe2mem_i, // Interface from execute to data memory 
    output type_mem2wrb_s                        mem2wrb_o  // From data memory to writeback
);
    //============================= Main memory and its memory interface =============================//

type_mem_in_s  mem_in;
type_mem_out_s mem_out;
logic [`XLEN-1:0]           mem_addr;
logic                       mem_wen;
logic                       mem_req;

// Dual port memory instantiation and initialization
logic [`XLEN-1:0]          dualport_memory[`IDMEM_SIZE];

initial 
begin
    // Reading the contents of example imem.txt file to memory variable
     $readmemh("imem.txt", dualport_memory);  
end

always_comb begin
    if (exe2mem_i.req ) begin           
        mem_in.addr       = exe2mem_i.addr;
        mem_in.w_data     = exe2mem_i.w_data;             
        mem_in.w_en       = exe2mem_i.w_en;
        mem_in.req        = 1'b1;
        mem2wrb_o.r_data  = mem_out.r_data;
        mem2wrb_o.ack     = mem_out.ack;
        mem2if_o.r_data   = mem2if_o.r_data; //or instruction nop
        mem2if_o.ack      = 1'b0; //or mem2if_o.ack
    end else if (!exe2mem_i.req & if2mem_i.req) begin
        mem_in.addr       = if2mem_i.addr;
        mem_in.w_data     = '0;             
        mem_in.w_en       = '0;
        mem_in.req        = 1'b1;
        mem2wrb_o.r_data  = mem2wrb_o.r_data; //or zero data
        mem2wrb_o.ack     = 1'b0; //or mem2wrb_o.ack
        mem2if_o.r_data   = mem_out.r_data;
        mem2if_o.ack      = mem_out.ack;
    end
end

//============================ Main memory module ============================//
// Connect the local signals to appropriate IOs of the module
assign mem_addr = mem_in.addr;
assign mem_req = mem_in.req ;
assign mem_wen = mem_in.w_en;


// Synchronous load and store operations for memory
always_ff @(posedge clk) begin  
    if (mem_req & ~mem_out.ack) begin        
        if (mem_wen) begin
            dualport_memory[mem_addr] <= mem_in.w_data;
        end else begin
            mem_out.r_data   <= dualport_memory[mem_addr];  
        end

        mem_out.ack <= 1'b1;
    end else begin
        mem_out <= '0;
    end
end


endmodule