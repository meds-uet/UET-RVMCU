`ifndef MEM_DEFS
`define MEM_DEFS

`define XLEN 32
`define IDMEM_SIZE 1000

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

// Interface signals for cache memory arbiter and main memory
typedef type_exe2mem_s type_mem_in_s;
typedef type_mem2wrb_s type_mem_out_s;

`endif
