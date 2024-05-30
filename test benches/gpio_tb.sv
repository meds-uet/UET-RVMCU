`timescale 1ns / 1ps

`include "../rtl/defines/gpio_defs.svh"

module gpio_tb();

    // Clock and reset
    logic clk;
    logic rst_n;

    // Inputs
    logic gpio_sel_i;

    type_dbus2peri_s   dbus2gpio_i;

    // wire [7:0] gpio_io;

    // Inout port
    wire [7:0] gpio_io;
    reg  [7:0] gpio_io_out;
    reg        gpio_io_drive;
    
    // Bidirectional control for gpio_io
    assign gpio_io = gpio_io_drive ? gpio_io_out : 8'bz;

    // Outputs
    type_peri2dbus_s   gpio2dbus_o;
    logic gpio_irq_o;

    // Instantiate the Unit Under Test (UUT)
    gpio uut (
        .clk(clk),
        .rst_n(rst_n),
        .gpio_sel_i(gpio_sel_i),
        .dbus2gpio_i(dbus2gpio_i),
        .gpio2dbus_o(gpio2dbus_o),
        .gpio_irq_o(gpio_irq_o),
        .gpio_io(gpio_io)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end

    // Test procedure
    initial begin
        // Initialize Inputs
        rst_n                 = 1'b0;
        gpio_sel_i            = 1'b0;
        dbus2gpio_i.addr      = 32'h0;
        dbus2gpio_i           = '0;
        gpio_io_drive         = 1'b0;
        #20
        rst_n = 1;
        #10
        // Test case
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h00; //Data Register
        dbus2gpio_i.w_data    = 32'hAA; 
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
        #10
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h04; //Direction Register
        dbus2gpio_i.w_data    = 32'h55;
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
        #10
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h08; //Interrupt Pending Register
        dbus2gpio_i.w_data    = 32'hFF; 
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
        #10
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h0C; //Interrupt Enable Register
        dbus2gpio_i.w_data    = 32'h0F; 
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
        #10
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h10; //Interrupt Level Register
        dbus2gpio_i.w_data    = 32'hF0; 
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
        #10
        gpio_sel_i = 0;
        #10
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h00;
        dbus2gpio_i.w_en      = 1'b0;
        dbus2gpio_i.req       = 1'b1;
        gpio_io_drive         = 1'b1;
        gpio_io_out           = 8'hC7;
        #10
        gpio_sel_i = 0;
        dbus2gpio_i.req       = 1'b0;
        #10
        gpio_io_drive         = 1'b0;
        
        // Finish the simulation
        #100 $finish;
    end


endmodule
