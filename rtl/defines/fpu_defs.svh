// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Muhammad Boota, MEDS UET Lahore
// Date: 19-02-2025


`ifndef FPU_DEFS
`define FPU_DEFS

`include "pcore_interface_defs.svh"
`include "fpnew_pkg.svh"
  localparam int unsigned OP_BITS = 4;

  typedef enum logic [OP_BITS-1:0] {
    FMADD, FNMSUB, ADD, MUL,     // ADDMUL operation group
    DIV, SQRT,                   // DIVSQRT operation group
    SGNJ, MINMAX, CMP, CLASSIFY, // NONCOMP operation group
    F2F, F2I, I2F, CPKAB, CPKCD  // CONV operation group
  } operation_e;

    // -------------------
  // RISC-V FP-SPECIFIC
  // -------------------
  // Rounding modes
  typedef enum logic [2:0] {
    RNE = 3'b000,
    RTZ = 3'b001,
    RDN = 3'b010,
    RUP = 3'b011,
    RMM = 3'b100,
    ROD = 3'b101,  // This mode is not defined in RISC-V FP-SPEC
    DYN = 3'b111
  } roundmode_e;

  parameter FPU_ADDMUL_LAT = 0; // Floating-Point ADDition/MULtiplication computing lane pipeline registers number
  parameter FPU_OTHERS_LAT = 0; // Floating-Point COMParison/CONVersion computing lanes pipeline registers number
  // APU interface
  parameter APU_NARGS_CPU = 3;
  parameter APU_WOP_CPU = 6;
  parameter APU_NDSFLAGS_CPU = 15;
  parameter APU_NUSFLAGS_CPU = 5;
  // Floating-point extensions configuration
  parameter bit C_RVF = 1'b1;  // Is F extension enabled
  parameter bit C_RVD = 1'b0;  // Is D extension enabled - NOT SUPPORTED CURRENTLY

  // Transprecision floating-point extensions configuration
  parameter bit C_XF16 = 1'b0;  // Is half-precision float extension (Xf16) enabled
  parameter bit C_XF16ALT = 1'b0; // Is alternative half-precision float extension (Xf16alt) enabled
  parameter bit C_XF8 = 1'b0;  // Is quarter-precision float extension (Xf8) enabled
  parameter bit C_XFVEC = 1'b0;  // Is vectorial float extension (Xfvec) enabled

  // Latency of FP operations: 0 = no pipe registers, 1 = 1 pipe register etc.
  parameter int unsigned C_LAT_FP64 = 'd0;
  //parameter int unsigned C_LAT_FP32 = 'd0;
  parameter int unsigned C_LAT_FP16 = 'd0;
  parameter int unsigned C_LAT_FP16ALT = 'd0;
  parameter int unsigned C_LAT_FP8 = 'd0;
  parameter int unsigned C_LAT_DIVSQRT = 'd1;  // divsqrt post-processing pipe
  //parameter int unsigned C_LAT_CONV = 'd0;
  //parameter int unsigned C_LAT_NONCOMP = 'd0;

  // General FPU-specific defines

  // Length of widest floating-point format = width of fp regfile
  parameter C_FLEN = C_RVD ? 64 :  // D ext.
  C_RVF ? 32 :  // F ext.
  C_XF16 ? 16 :  // Xf16 ext.
  C_XF16ALT ? 16 :  // Xf16alt ext.
  C_XF8 ? 8 :  // Xf8 ext.
  0;  // Unused in case of no FP

  parameter C_FFLAG = 5;
  parameter C_RM = 3;


  // -----------
  // FPU Config
  // -----------
  // Features (enabled formats, vectors etc.)
  localparam fpnew_pkg::fpu_features_t FPU_FEATURES = '{
      Width: C_FLEN,
      EnableVectors: C_XFVEC,
      EnableNanBox: 1'b0,
      FpFmtMask: {
    C_RVF, C_RVD, C_XF16, C_XF8, C_XF16ALT
  }, IntFmtMask: {
    C_XFVEC && C_XF8, C_XFVEC && (C_XF16 || C_XF16ALT), 1'b1, 1'b0
  }};

  // Implementation (number of registers etc)
  localparam fpnew_pkg::fpu_implementation_t FPU_IMPLEMENTATION = '{
      PipeRegs: '{  // FP32, FP64, FP16, FP8, FP16alt
      '{
          FPU_ADDMUL_LAT, C_LAT_FP64, C_LAT_FP16, C_LAT_FP8, C_LAT_FP16ALT
      },  // ADDMUL
      '{default: C_LAT_DIVSQRT},  // DIVSQRT
      '{default: FPU_OTHERS_LAT},  // NONCOMP
      '{default: FPU_OTHERS_LAT}
  },  // CONV
  UnitTypes: '{
      '{default: fpnew_pkg::MERGED},  // ADDMUL
      '{default: fpnew_pkg::MERGED},  // DIVSQRT
      '{default: fpnew_pkg::PARALLEL},  // NONCOMP
      '{default: fpnew_pkg::MERGED}
  },  // CONV
  PipeConfig: fpnew_pkg::AFTER};


`endif // FPU_DEFS