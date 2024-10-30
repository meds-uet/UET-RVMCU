`timescale 1ns / 1ps

module soc_top_tb;

    // Input and Output Declarations
    logic rst_n;
    logic clk;
    logic irq_ext_i;
    logic irq_soft_i;
    logic [15:0] gp_switch_i;
    logic [15:0] gp_led_o;

    wire [23:0] gpio_io;
    // Inout port
    reg  [7:0] gpio_io_out_a;  // locally driven value
    wire [7:0] gpio_io_rec_a;  // locally received value (optional, but models typical pad)

    reg  [7:0] gpio_io_out_b;  // locally driven value
    wire [7:0] gpio_io_rec_b;  // locally received value (optional, but models typical pad)

    reg  [7:0] gpio_io_out_c;  // locally driven value
    wire [7:0] gpio_io_rec_c;  // locally received value (optional, but models typical pad)
    
    // Bidirectional control for gpio_io
    // Update gpio_io pins to drive the inout net
// ----------------------------
assign gpio_io[0] = uut.gpio_top_module.gpio_A.reg_dir_ff[0] ? 1'bz : gpio_io_out_a[0];
assign gpio_io[1] = uut.gpio_top_module.gpio_A.reg_dir_ff[1] ? 1'bz : gpio_io_out_a[1]; 
assign gpio_io[2] = uut.gpio_top_module.gpio_A.reg_dir_ff[2] ? 1'bz : gpio_io_out_a[2]; 
assign gpio_io[3] = uut.gpio_top_module.gpio_A.reg_dir_ff[3] ? 1'bz : gpio_io_out_a[3]; 
assign gpio_io[4] = uut.gpio_top_module.gpio_A.reg_dir_ff[4] ? 1'bz : gpio_io_out_a[4]; 
assign gpio_io[5] = uut.gpio_top_module.gpio_A.reg_dir_ff[5] ? 1'bz : gpio_io_out_a[5]; 
assign gpio_io[6] = uut.gpio_top_module.gpio_A.reg_dir_ff[6] ? 1'bz : gpio_io_out_a[6]; 
assign gpio_io[7] = uut.gpio_top_module.gpio_A.reg_dir_ff[7] ? 1'bz : gpio_io_out_a[7]; 

assign gpio_io_rec_a = gpio_io[7:0];

assign gpio_io[8] = uut.gpio_top_module.gpio_B.reg_dir_ff[0] ? 1'bz : gpio_io_out_b[0];
assign gpio_io[9] = uut.gpio_top_module.gpio_B.reg_dir_ff[1] ? 1'bz : gpio_io_out_b[1]; 
assign gpio_io[10] = uut.gpio_top_module.gpio_B.reg_dir_ff[2] ? 1'bz : gpio_io_out_b[2]; 
assign gpio_io[11] = uut.gpio_top_module.gpio_B.reg_dir_ff[3] ? 1'bz : gpio_io_out_b[3]; 
assign gpio_io[12] = uut.gpio_top_module.gpio_B.reg_dir_ff[4] ? 1'bz : gpio_io_out_b[4]; 
assign gpio_io[13] = uut.gpio_top_module.gpio_B.reg_dir_ff[5] ? 1'bz : gpio_io_out_b[5]; 
assign gpio_io[14] = uut.gpio_top_module.gpio_B.reg_dir_ff[6] ? 1'bz : gpio_io_out_b[6]; 
assign gpio_io[15] = uut.gpio_top_module.gpio_B.reg_dir_ff[7] ? 1'bz : gpio_io_out_b[7]; 

assign gpio_io_rec_b = gpio_io_b[15:8] ;

assign gpio_io[16] = uut.gpio_top_module.gpio_C.reg_dir_ff[0] ? 1'bz : gpio_io_out_c[0];
assign gpio_io[17] = uut.gpio_top_module.gpio_C.reg_dir_ff[1] ? 1'bz : gpio_io_out_c[1]; 
assign gpio_io[18] = uut.gpio_top_module.gpio_C.reg_dir_ff[2] ? 1'bz : gpio_io_out_c[2]; 
assign gpio_io[19] = uut.gpio_top_module.gpio_C.reg_dir_ff[3] ? 1'bz : gpio_io_out_c[3]; 
assign gpio_io[20] = uut.gpio_top_module.gpio_C.reg_dir_ff[4] ? 1'bz : gpio_io_out_c[4]; 
assign gpio_io[21] = uut.gpio_top_module.gpio_C.reg_dir_ff[5] ? 1'bz : gpio_io_out_c[5]; 
assign gpio_io[22] = uut.gpio_top_module.gpio_C.reg_dir_ff[6] ? 1'bz : gpio_io_out_c[6]; 
assign gpio_io[23] = uut.gpio_top_module.gpio_C.reg_dir_ff[7] ? 1'bz : gpio_io_out_c[7]; 

assign gpio_io_rec_c = gpio_io[23:16] ;

    // Instantiate the soc_top module
    soc_top uut (
        .rst_n(rst_n),
        .clk(clk),
        .irq_ext_i(irq_ext_i),
        .irq_soft_i(irq_soft_i),
        .gpio_io(gpio_io),
        .gp_switch_i(gp_switch_i),
        .gp_led_o(gp_led_o)
    );

   // Clock generation
   initial begin
    clk = 0;
    forever #5 clk = ~clk; // 100 MHz clock
   end

    // Initial Setup and Test Scenarios
    //reset sequence
    initial begin
        // Initialize inputs
        rst_n = 1'b1;  // Start with reset deasserted
        // Reset sequence
        #1 rst_n = 1'b0;  // Assert reset
        #10 rst_n = 1'b1;  // Deassert reset
    end

    //gpio sequence
    initial begin
        gpio_io_out_a = 8'h00;
        gpio_io_out_b = 8'h00;
        gpio_io_out_c = 8'h00;
        repeat (30)@ (posedge clk);
        gpio_io_out_a = 8'h00;
        gpio_io_out_b = 8'hFF;
        gpio_io_out_c = 8'h00;
        repeat (50)@ (posedge clk);
        gpio_io_out_a = 8'hFF;
        gpio_io_out_b = 8'hAA;
        gpio_io_out_c = 8'hBB;
        repeat (50)@ (posedge clk);
        gpio_io_out_a = 8'hCC;
        gpio_io_out_b = 8'h99;
        gpio_io_out_c = 8'hFF;
        repeat (50)@ (posedge clk);
        
    end


    // Finish the simulation after enough time has passed
    initial begin
        #10000 $stop;  // Adjust the simulation run time as necessary
    end

endmodule
