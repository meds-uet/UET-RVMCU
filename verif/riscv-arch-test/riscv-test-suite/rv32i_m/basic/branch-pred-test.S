// -----------------------------------------------------------------------------------------------------------------------
// This ACT is exclusively written to test the branch predictor integrated in UET-RVMCU
// -----------------------------------------------------------------------------------------------------------------------
// Developed by: Muhammad Zain
// Date: Aug 22, 2025
// Description: 
//  → Test different cases such as one (jal/jalr/branch) instruction being placed right after the other (jal/jalr/branch) so
//      that it gets skipped and flushed properly.
//  → Jump from one (jal/jalr/branch) instruction to another (jal/jalr/branch) instruction.
//  → Execute same branch & jalr multiple times to check if state (branch) & address (jalr) are being saved and used properly.
//  → Execute different branch & jalr at aligned addresses such that they have same index in BHT & BTB but different tags.
//      Stored states and addresses shouldn't be used if tags are different.
// -----------------------------------------------------------------------------------------------------------------------

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

RVTEST_SIGBASE(x13,signature_x13_1)

.macro UPDATE_SIGNATURES
sh ra, 0(x13)
sw a4, 4(x13)
addi a4, a4, 1
addi x13, x13, 8
.endm

#define TABLE_SIZE 9  // 512 KB

li a4, 0x23           // Initialize some value for signature update

// -----------------------------------------------------------------------------------------------------------------------
//                                  Place a branch instruction immediately after jal
// -----------------------------------------------------------------------------------------------------------------------
inst_0:

UPDATE_SIGNATURES
li  x5, 0

jal ra, inst_1          // Jump to inst_1 without wasting any cycle
beq x5, x0, fail        // This must not be loaded into fetch stage
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                          Place jalr immediately after jal
// -----------------------------------------------------------------------------------------------------------------------
inst_1:

UPDATE_SIGNATURES
la   x5, fail

jal  ra, inst_2
jalr ra, 0(x5)
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                          Place jal immediately after jal
// -----------------------------------------------------------------------------------------------------------------------
inst_2:

UPDATE_SIGNATURES

jal  ra, inst_3
jal  ra, fail
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                   Place a branch instruction immediately after jalr
// -----------------------------------------------------------------------------------------------------------------------
inst_3:

UPDATE_SIGNATURES
la   x6, inst_4
addi x6, x6, -4
li   x7, 2

jalr ra, 4(x6)          // Jump to inst_4 (only 1 cycle wasted)
bne  x7, x0, fail       // This must be flushed in fetch stage
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                          Place jalr immediately after jalr
// -----------------------------------------------------------------------------------------------------------------------
inst_4:

UPDATE_SIGNATURES
la   x6, inst_5
la   x7, fail

jalr ra, 0(x6)
jalr ra, 0(x7)
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                          Place jal immediately after jalr
// -----------------------------------------------------------------------------------------------------------------------
inst_5:

UPDATE_SIGNATURES
la   x6, inst_6

jalr ra, 0(x6)
jal  ra, fail
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                   Place a branch instruction immediately after branch
// -----------------------------------------------------------------------------------------------------------------------
inst_6:

UPDATE_SIGNATURES
li   x5, 0
li   x6, 2

beq  x5, x0, inst_7     // Jump to inst_7 (only 1 cycle wasted)
bne  x6, x0, fail       // This must be flushed in fetch stage
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                          Place jalr immediately after branch
// -----------------------------------------------------------------------------------------------------------------------
inst_7:

UPDATE_SIGNATURES
li   x5, 0
li   x6, 2
la   x7, fail

blt  x5, x6, inst_8
jalr ra, 0(x7)
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                          Place jal immediately after branch
// -----------------------------------------------------------------------------------------------------------------------
inst_8:

UPDATE_SIGNATURES
li   x5, 2
la   x6, inst_9

bne  x5, x0, inst_9
jal  ra, fail
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                       Jump (using jal) to a branch instruction
// -----------------------------------------------------------------------------------------------------------------------
inst_9:

UPDATE_SIGNATURES

jal ra, 9f
nop
9:
bne x0, x0, fail
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                       Jump (using jal) to a jalr instruction
// -----------------------------------------------------------------------------------------------------------------------
inst_10:

UPDATE_SIGNATURES
la x5, inst_11

jal ra, 10f
nop
10:
jalr ra, 0(x5)
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                       Jump (using jal) to a jal instruction
// -----------------------------------------------------------------------------------------------------------------------
inst_11:

UPDATE_SIGNATURES

jal ra, 11f
nop
11:
jal ra, inst_12
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                       Jump (using jalr) to a branch instruction
// -----------------------------------------------------------------------------------------------------------------------
inst_12:

UPDATE_SIGNATURES
la   x5, 12f

jalr ra, 0(x5)
nop
12:
beq x0, x0, inst_13
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                       Jump (using jalr) to a jalr instruction
// -----------------------------------------------------------------------------------------------------------------------
inst_13:

UPDATE_SIGNATURES
la   x5, 13f
la   x6, inst_14

jalr ra, 0(x5)
nop
13:
jalr x0, 0(x6)
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                       Jump (using jalr) to a jal instruction
// -----------------------------------------------------------------------------------------------------------------------
inst_14:

UPDATE_SIGNATURES
la   x5, 14f

jalr ra, 0(x5)
nop
14:
jal x0, inst_15
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                          Branch to a branch instruction
// -----------------------------------------------------------------------------------------------------------------------
inst_15:

UPDATE_SIGNATURES

beq x0, x0, 15f
nop
15:
beq x0, x0, inst_16
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                          Branch to a jalr instruction
// -----------------------------------------------------------------------------------------------------------------------
inst_16:

UPDATE_SIGNATURES
la x5, inst_17

beq x0, x0, 16f
nop
16:
jalr x0, 0(x5)
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                          Branch to a jal instruction
// -----------------------------------------------------------------------------------------------------------------------
inst_17:

UPDATE_SIGNATURES

beq x0, x0, 17f
nop
17:
jal x0, inst_18
nop

// -----------------------------------------------------------------------------------------------------------------------
//                                    Execute same branch and jalr multiple times
// -----------------------------------------------------------------------------------------------------------------------
inst_18:

UPDATE_SIGNATURES

li x5, 4
la x6, loop_18
// In first iteration, it will be predicted to be taken according to Global history register
// 1. Predict: taken -> Wrong 2. Predict: not taken -> Correct; 3. Predict: not taken -> Correct; 4. Predict not taken -> Wrong
loop_18:
    addi x5, x5, -1
    beq  x5, x0, inst_19        // Execute same branch multiple times to check state change
    nop
    nop
    RVTEST_SIGUPD(x13,x5)
    jalr ra, 0(x6)              // Execute same jalr multiple times to use saved address from BTB
    nop

// -----------------------------------------------------------------------------------------------------------------------
//                      Execute different branches & jalrs which have the same index but different tag
// -----------------------------------------------------------------------------------------------------------------------
inst_19: 

UPDATE_SIGNATURES
j region_1

.align TABLE_SIZE
region_1:
    nop
    beq  x0, x0, region_1+0xc
    nop
    la   x5, region_2
    jalr ra, 0(x5)
    nop

.align TABLE_SIZE
region_2:
    nop
    beq  x0, x0, region_2+0xc
    nop
    la   x5, inst_20
    jalr ra, 0(x5)
    nop

// -----------------------------------------------------------------------------------------------------------------------
inst_20: 

UPDATE_SIGNATURES
j success

// -----------------------------------------------------------------------------------------------------------------------

fail:
LI (x8, 0x7777fa11)
RVTEST_SIGUPD(x13,x8)
j rvtest_code_end

success:
LI (x8, 0x23c0ffee)
RVTEST_SIGUPD(x13,x8)

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


signature_x13_1:
    .fill 64*(XLEN/32),4,0xdeadbeef


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
