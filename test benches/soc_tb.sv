`timescale 1ns / 1ps

module soc_tb();

    logic                        rst_n;
    logic                        clk;
    logic                        irq_ext_i;
    logic                        irq_soft_i;
    logic [23:0]                 gpio_io;
    logic [15:0]                 gp_switch_i;
    logic [15:0]                 gp_led_o;

soc_top sc(
    rst_n,
    clk,
    irq_ext_i,
    irq_soft_i
    /*gpio_io,
    gp_switch_i,
    gp_led_o*/
);


// Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end
    // Initial block for test stimulus
    initial begin
        // Initialize signals
        rst_n = 1'b0;
        @ (posedge clk);
        rst_n = 1'b1;
        repeat (100) @ (posedge clk);

    end
    
endmodule