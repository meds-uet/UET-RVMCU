`timescale 1ns / 1ps

module soc_top_tb;

    // Input and Output Declarations
    logic rst_n;
    logic clk;
    logic irq_ext_i;
    logic irq_soft_i;
    logic [15:0] gp_switch_i;
    logic [15:0] gp_led_o;
    logic   uart_rxd_i;
    logic   uart_txd_o;
    reg   [7:0] r_sg;
    reg   [7:0] r_an;
    logic       spi_clk_o;
    logic       spi_cs_o;
    logic       spi_miso_i;
    logic       spi_mosi_o;

    // Inout port
	wire [23:0] gpio_io;   // bidirectional signal from DUT
    reg  [23:0] gpio_io_drive;  // locally driven value

    assign gpio_io = gpio_io_drive;

    // Instantiate the soc_top module
    soc_top uut (
        .rst_n(rst_n),
        .clk(clk),
        .irq_ext_i(irq_ext_i),
        .irq_soft_i(irq_soft_i),
        .gpio_io(gpio_io),
        .gp_switch_i(gp_switch_i),
        .gp_led_o(gp_led_o),
        .r_sg(r_sg),
        .r_an(r_an),
        .spi_clk_o(spi_clk_o),
        .spi_cs_o(spi_cs_o),
        .spi_miso_i(spi_miso_i),
        .spi_mosi_o(spi_mosi_o),
        .uart_txd_o(uart_txd_o),
        .uart_rxd_i(uart_rxd_i)
    );

   // Clock generation
   initial begin
    clk = 0;
    forever #5 clk = ~clk; // 100 MHz clock
   end

    // Initial Setup and Test Scenarios
    initial begin
        // Initialize inputs
        rst_n         = 1'b1;  // Start with reset deasserted
        // Reset sequence
        #1 rst_n = 1'b0;  // Assert reset
        #10 rst_n = 1'b1;  // Deassert reset

    end

    // Finish the simulation after enough time has passed
    initial begin
        #10000 $finish;  // Adjust the simulation run time as necessary
    end

endmodule
