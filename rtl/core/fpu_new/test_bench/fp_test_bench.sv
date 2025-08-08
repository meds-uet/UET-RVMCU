module fp_test_bench;

  // Declare signals
  logic clk_i;
  logic rst_ni;

  // APU Side: Master port signals
  logic  apu_req_i;
  logic apu_gnt_o;

  // request channel signals
  logic  [2:0] [31:0] apu_operands_i;  // Only three operands
  logic  [5:0]  apu_op_i;
  logic  [2:0]  fp_rnd_mode;

  // response channel signals
  logic apu_rvalid_o;
  logic [31:0] apu_rdata_o;
  logic [4:0]  apu_rflags_o;

  // Instantiate the floating-point wrapper
  fp_wrapper uut (
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
    apu_op_i = 6'b000000;
    fp_rnd_mode = 3'b000;
    apu_operands_i[0] = 32'h00000000;
    apu_operands_i[1] = 32'h00000000;
    apu_operands_i[2] = 32'h00000000;

    // Wait for reset de-assertion
    @(negedge rst_ni);

    // Apply a first test case
    apu_req_i = 1;
    apu_op_i = 6'b000010;  // Example operation code
    fp_rnd_mode= 3'd0; // Example flag settings
    apu_operands_i[0] = 32'h41000000; 
    apu_operands_i[1] = 32'h40800000; 
    apu_operands_i[2] = 32'h40800000; 

    // Wait for a grant
    @(posedge clk_i);


    // Check result (expected result will depend on the operation performed)
    if (apu_rdata_o == 32'h40a00000) begin  // Expected value depends on the operation
      $display("Test Case 1 Passed!");
    end else begin
      $display("Test Case 1 Failed: Expected 0x40800000, got 0x%h", apu_rdata_o);
    end

    // Add more test cases here...

    // Finish simulation
    #10;
    $stop;
  end
initial begin
  $dumpfile("fpu.vcd");
  $dumpvars(0,fp_test_bench);
end
endmodule
