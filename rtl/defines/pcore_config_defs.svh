// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Muhammad Tahir, UET Lahore
// Date: 13.4.2022


`ifndef PCORE_CONFIG_DEFS
`define PCORE_CONFIG_DEFS

`ifndef COMPLIANCE
//`define RTL_SIMULATION               1 
`endif

//============================= CORE PARAMETERS ========================//

// Width of main registers and buses
`define XLEN                         32

`define RF_AWIDTH                    5
`define RF_SIZE                      32

`define PC_RESET                     32'h00000000


// Memory related parameters
`define IMEM_INST_REQ                1

`define IDMEM_SIZE                   24'h400000 //22'h400000
`define MEM_ADDR_WIDTH               22

`define DMEM_SEL_ADDR_HIGH           21 
`define DMEM_SEL_ADDR_LOW             0
`define PERI_SEL_ADDR_HIGH           21
`define PERI_SEL_ADDR_LOW            16
`define PLCL_SEL_ADDR_HIGH           21
`define PLCL_SEL_ADDR_LOW            0

// Memory address map related definitions
//`define IMEM_ADDR_MATCH              21'h100000 //1MB instruction memory
`define DMEM_ADDR_MATCH              22'h200000 //2MB instruction + code memory
`define UART_ADDR_MATCH              6'h20
`define SPI_ADDR_MATCH               6'h21
`define GPIOA_ADDR_MATCH             6'h22
`define GPIOB_ADDR_MATCH             6'h23
`define GPIOC_ADDR_MATCH             6'h24
`define GPSW_ADDR_MATCH              6'h25
`define GPLED_ADDR_MATCH             6'h26
`define PLIC_ADDR_START              22'h300000
`define PLIC_ADDR_END                22'h300FFF
`define CLINT_ADDR_START             22'h301000
`define CLINT_ADDR_END               22'h31FFFF

// Pipeline stage definitions
`define IF2ID_PIPELINE_STAGE         1
`define ID2EXE_PIPELINE_STAGE        1
`define EXE2LSU_PIPELINE_STAGE       1
`define LSU2WRB_PIPELINE_STAGE       1

`define INSTR_NOP                    32'h00000013

// Address ranges for different peripheral modules
`define DBUS_ADDR_WIDTH              32

`define UART_REG_OFFSET_WIDTH        12
`define PLIC_REG_OFFSET_WIDTH        24
`define CLINT_ADDR_WIDTH             16

typedef enum logic [`CLINT_ADDR_WIDTH-1:0] {
    MTIME_LOW_R     = 16'hbff8,
    MTIME_HIGH_R    = 16'hbffc,
    MTIMECMP_LOW_R  = 16'h4000,
    MTIMECMP_HIGH_R = 16'h4004
} type_mtime_regs_e;



`endif // PCORE_CONFIG_DEFS