
// -----------
// This file was generated by riscv_ctg (https://gitlab.com/incoresemi/riscv-compliance/riscv_ctg)
// version   : 0.4.1
// timestamp : Tue Dec 15 15:36:11 2020 GMT
// usage     : riscv_ctg \
//                  -- cgf ('/scratch/git-repo/incoresemi/riscv-compliance/riscv_ctg/sample_cgfs/dataset.cgf', '/scratch/git-repo/incoresemi/riscv-compliance/riscv_ctg/sample_cgfs/rv32i.cgf') \
//                  -- xlen 32 \
// -----------
//
// -----------
// Copyright (c) 2020. RISC-V International. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// -----------
//
// This assembly file tests the add instruction of the RISC-V I extension for the add covergroup.
// 
#include "model_test.h"
#include "arch_test.h"
RVTEST_ISA("RV32I")

.section .text.init
.globl rvtest_entry_point
rvtest_entry_point:
RVMODEL_BOOT
RVTEST_CODE_BEGIN

#ifdef TEST_CASE_1

RVTEST_CASE(0,"//check ISA:=regex(.*32.*);check ISA:=regex(.*I.*);def TEST_CASE_1=True;",add)

RVTEST_SIGBASE( x3,signature_x3_1)

inst_0:
// rs2 == rd != rs1, rs1==x4, rs2==x24, rd==x24, rs1_val > 0 and rs2_val > 0, rs2_val == 1, rs1_val == (2**(xlen-1)-1), rs1_val != rs2_val, rs1_val == 2147483647
// opcode: add ; op1:x4; op2:x24; dest:x24; op1val:0x7fffffff;  op2val:0x1
TEST_RR_OP(add, x24, x4, x24, 0x80000000, 0x7fffffff, 0x1, x3, 0, x18)

inst_1:
// rs1 == rd, rs1==x3, rd==x3, imm_val == 0, rs1_val == 1024
// opcode: addi ; op1:x3; dest:x3; op1val:0x400;  immval:0x0
TEST_IMM_OP( addi, x13, x13, 0x400, 0x400, 0x0, x3, 4, x18)

inst_2:
// rs1 == rs2 == rd, rs1==x19, rs2==x19, rd==x19, rs1_val < 0 and rs2_val < 0, rs1_val == -3
// opcode: and ; op1:x19; op2:x19; dest:x19; op1val:-0x3;  op2val:-0x3
TEST_RR_OP(and, x19, x19, x19, 0xfffffffd, -0x3, -0x3, x3, 8, x18)

inst_3:
// rs1==x2, rd==x8, imm_val == 1, rs1_val == -131073
// opcode: andi ; op1:x2; dest:x8; op1val:-0x20001;  immval:0x1
TEST_IMM_OP( andi, x8, x2, 0x1, -0x20001, 0x1, x3, 12, x18)

inst_4:
// rd==x21, imm_val==349525, imm_val == 349525
// opcode: auipc ; dest:x21; immval:0x55555
TEST_AUIPC(auipc, x21, 0x55555000, 0x55555, x3, 16, x18)

inst_5:
// rs1==x20, rs2==x25, rs1_val == rs2_val and imm_val < 0 and imm_val & 0x03 == 0, rs2_val == 128, rs1_val == 128
// opcode: beq, op1:x20; op2:x25; op1val:0x80; op2val:0x80; immval:0x8; align:0
TEST_BRANCH_OP(beq, x11, x20, x25, 0x80, 0x80, 0x8, 1b, x3, 20,0)


inst_6:
// rs1==x11, rs2==x19, rs2_val == 1, rs1_val==2863311529 and rs2_val==1
// opcode: bgeu, op1:x11; op2:x19; op1val:0xaaaaaaa9; op2val:0x1; immval:0x40; align:0
TEST_BRANCH_OP(bgeu, x5, x11, x19, 0xaaaaaaa9, 0x1, 0x40, 3f, x3, 24,0)

inst_7:
// rs1==x2, rs2==x0, rs2_val == 4, rs1_val == 2097152
// opcode: blt, op1:x2; op2:x0; op1val:0x200000; op2val:0x0; immval:0x8; align:0
TEST_BRANCH_OP(blt, x12, x2, x0, 0x200000, 0x0, 0x8, 1b, x3, 28,0)

inst_8:
// rs1==x24, rs2==x1, rs2_val == 1, 
// opcode: bne, op1:x24; op2:x1; op1val:-0x1; op2val:0x1; immval:0x40; align:0
TEST_BRANCH_OP(bne, x21, x24, x1, -0x1, 0x1, 0x40, 3f, x3, 32,0)

inst_9:
// rd==x28, 
// opcode: jal; dest:x28; immval:0x0; align:0
TEST_JAL_OP(x13, x28, 0x0, 3f, x3, 36,0)



#endif


RVTEST_CODE_END
RVMODEL_HALT

RVTEST_DATA_BEGIN
.align 4

rvtest_data:
.word 0xbabecafe
.word 0xbabecafe
.word 0xbabecafe
.word 0xbabecafe
RVTEST_DATA_END


RVMODEL_DATA_BEGIN
rvtest_sig_begin:
sig_begin_canary:
CANARY;


signature_x3_0:
    .fill 0*(XLEN/32),4,0xdeadbeef


signature_x3_1:
    .fill 17*(XLEN/32),4,0xdeadbeef


signature_x8_0:
    .fill 16*(XLEN/32),4,0xdeadbeef


signature_x1_0:
    .fill 512*(XLEN/32),4,0xdeadbeef


signature_x1_1:
    .fill 43*(XLEN/32),4,0xdeadbeef

#ifdef rvtest_mtrap_routine

tsig_begin_canary:
CANARY;
mtrap_sigptr:
    .fill 64*(XLEN/32),4,0xdeadbeef
tsig_end_canary:
CANARY;

#endif

#ifdef rvtest_gpr_save

gpr_save:
    .fill 32*(XLEN/32),4,0xdeadbeef

#endif

sig_end_canary:
CANARY;
rvtest_sig_end:
RVMODEL_DATA_END
