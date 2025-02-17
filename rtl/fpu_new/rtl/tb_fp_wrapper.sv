`timescale 1ns / 1ps

module tb_fp_wrapper;

  // Parameters
  parameter FPU_ADDMUL_LAT = 0;
  parameter FPU_OTHERS_LAT = 0;

  // Clock and Reset signals
  logic clk_i;
  logic rst_ni;

  // APU Side: Master port signals
  logic  apu_req_i;
  logic apu_gnt_o;

  // request channel signals
  logic  [2:0] [31:0] apu_operands_i;  // Only three operands
  logic  [5:0]  apu_op_i;
  logic  [2:0]  fp_rnd_mode;
  logic op_mod_i;
  logic [3:0]fp_op;

  // response channel signals
  logic apu_rvalid_o;
  logic [31:0] apu_rdata_o;
  logic [4:0]  apu_rflags_o;

  // Instantiate the Unit Under Test (UUT)
  fp_wrapper #(
      .FPU_ADDMUL_LAT(FPU_ADDMUL_LAT),
      .FPU_OTHERS_LAT(FPU_OTHERS_LAT)
  ) uut (
      .clk_i(clk_i),
      .rst_ni(rst_ni),
      .apu_req_i(apu_req_i),
      .apu_gnt_o(apu_gnt_o),
      .apu_operands_i(apu_operands_i),
      .apu_op_i(apu_op_i),
      .apu_flags_i({2'b10, 3'b0, 3'b0, fp_rnd_mode}),
      .apu_rvalid_o(apu_rvalid_o),
      .apu_rdata_o(apu_rdata_o),
      .apu_rflags_o(apu_rflags_o)
  );
    assign apu_op_i = {1'b0,op_mod_i, fp_op};

  // Clock generation
  initial begin
    clk_i = 0;
    forever #1 clk_i = ~clk_i;  // 100 MHz clock
  end

  // Reset generation
  initial begin
    rst_ni = 1;
    #5;
    rst_ni = 0;
  end

  // Test procedure
  initial begin
    // Initialize inputs
    apu_req_i = 0;
    fp_op = 4'b0000;  // Example operation code
    op_mod_i=1'b0;
    fp_rnd_mode = 3'b000;
    apu_operands_i[0] = 32'h00000000;
    apu_operands_i[1] = 32'h00000000;
    apu_operands_i[2] = 32'h00000000;

    // Wait for reset de-assertion
    @(negedge rst_ni);

    // Apply a first test case
    apu_req_i = 1;
    fp_op = 4'b1001;  // Example operation code
    op_mod_i=1'b0;
    fp_rnd_mode= 3'b000; // Example flag settings
    apu_operands_i[0] = 32'h40880000; 
    apu_operands_i[1] = 32'h00000; 
    apu_operands_i[2] = 32'h00000; 
    // Wait for a grant
    @(posedge clk_i);


    // Check result (expected result will depend on the operation performed)
      $display("output 32'b%h", apu_rdata_o);
  

    // Add more test cases here...

    // Finish simulation
    #10;
    $stop;
  end
initial begin
  $dumpfile("tb_fp_wrapper.vcd");
  $dumpvars(0,tb_fp_wrapper);
end
endmodule
