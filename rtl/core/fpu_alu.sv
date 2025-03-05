module fpu_alu (

  // Declare signals
  input logic clk_i,
  input logic rst_ni,

  // APU Side: Master port signals
  input logic  apu_req_i,
  output logic apu_gnt_o,
  // request channel signals
  input logic  [31:0] apu_operands_i_1,  // Only three operands
  input logic  [31:0] apu_operands_i_2,
  input logic  [31:0] apu_operands_i_3,
  input logic  [4:0]  apu_op_i,
  input logic  [2:0]  fp_rnd_mode,

  // response channel signals
  output logic apu_rvalid_o,
  output logic [31:0] apu_rdata_o,
  output logic [4:0]  apu_rflags_o
);

  logic  [2:0] [31:0] apu_operands_i;  
  
always_comb apu_operands_i = ((apu_op_i == 5'h02) || (apu_op_i == 5'h12)) ? {apu_operands_i_2, apu_operands_i_1, apu_operands_i_3} : {apu_operands_i_3, apu_operands_i_2, apu_operands_i_1};

  // Instantiate the floating-point wrapper
  fp_wrapper fpu_unit (
      .clk_i(clk_i),
      .rst_ni(rst_ni),
      .apu_req_i(apu_req_i),
      .apu_gnt_o(apu_gnt_o),
      .apu_operands_i,
      .apu_op_i({1'b0,apu_op_i}),
      .apu_flags_i({2'b10, 3'b0, 3'b0, fp_rnd_mode}),
      .apu_rvalid_o(apu_rvalid_o),
      .apu_rdata_o(apu_rdata_o),
      .apu_rflags_o(apu_rflags_o)
  );
  endmodule