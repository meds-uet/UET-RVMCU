package fpu_parameters;

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

endpackage  
