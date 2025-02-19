`ifndef MEM_DEFS
`define MEM_DEFS

`include "pcore_interface_defs.svh"

typedef struct packed {
    logic [`XLEN-1:0]    addr;
    logic                req;
} type_if2mem_s;

typedef struct packed {
    logic [`XLEN-1:0]    r_data;
    logic                ack;
} type_mem2if_s;

typedef struct packed {
    logic [`XLEN-1:0]    addr;
    logic [`XLEN-1:0]    w_data;
    logic                req;
    logic                w_en;  
} type_exe2mem_s;

typedef struct packed {
    logic [`XLEN-1:0]    r_data;
    logic                ack;
} type_mem2wrb_s;

typedef enum logic [1:0] {
    MEM_IDLE   = 2'b00,
    MEM_MODIFY = 2'b01,
    MEM_WRITE  = 2'b10
  } type_mem_wr_states_e;

`endif