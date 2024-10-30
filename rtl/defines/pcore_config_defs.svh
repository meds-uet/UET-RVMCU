// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Muhammad Tahir, UET Lahore
// Date: 13.4.2022
// Modified by: Shehzeen Malik, MEDS UET


`ifndef PCORE_CONFIG_DEFS
`define PCORE_CONFIG_DEFS

`ifndef COMPLIANCE
//`define RTL_SIMULATION               1 
`endif

//`define FPGA                           1
//============================= CORE PARAMETERS ========================//

// Width of main registers and buses
`define XLEN                         32

`define RF_AWIDTH                    5
`define RF_SIZE                      32

`define PC_RESET                     32'h00000000


// Memory related parameters
`define IMEM_INST_REQ                1

`ifdef FPGA
`define MEM_BANK_SIZE                20'h10000
`else
`define MEM_BANK_SIZE                20'h80000 //20 as always should be multiple of 4
`endif

`define MEM_ADDR_WIDTH               24

`define DMEM_SEL_ADDR_HIGH           21 
`define DMEM_SEL_ADDR_LOW             0
`define PERI_SEL_ADDR_HIGH           21
`define PERI_SEL_ADDR_LOW            16
`define PLCL_SEL_ADDR_HIGH           21
`define PLCL_SEL_ADDR_LOW            0

`ifdef FPGA
`define DMEM_ADDR_MATCH              20'h40000 //256KB instruction + code memory
`else
`define DMEM_ADDR_MATCH              22'h200000 //2MB instruction + code memory
`endif

`define UART0_ADDR_MATCH             6'h20
`define UART1_ADDR_MATCH             6'h21
`define SPI0_ADDR_MATCH              6'h22
`define SPI1_ADDR_MATCH              6'h23
`define GPIOA_ADDR_MATCH             6'h24
`define GPIOB_ADDR_MATCH             6'h25
`define GPIOC_ADDR_MATCH             6'h26
`define GPSW_ADDR_MATCH              6'h27
`define GPLED_ADDR_MATCH             6'h28
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