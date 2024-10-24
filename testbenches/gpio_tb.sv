// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Aman Murad, UET Lahore
// Date: 30.5.2024

`timescale 1ns / 1ps

`ifndef VERILATOR
`include "../rtl/defines/gpio_defs.svh"
`else
`include "../../defines/gpio_defs.svh"
`endif

module gpio_tb();

    // Clock and reset
    logic clk;
    logic rst_n;

    // Inputs
    logic gpio_sel_i;

    type_dbus2peri_s   dbus2gpio_i;

    // wire [7:0] gpio_io;

    // Inout port
	wire [7:0] gpio_io;   // bidirectional signal from DUT
    reg [7:0] gpio_io_out;  // locally driven value
    wire [7:0] gpio_io_rec;  // locally received value (optional, but models typical pad)

    assign gpio_io_rec = gpio_io;
    
    // Bidirectional control for gpio_io
assign gpio_io[0] = uut.reg_dir_ff[0] ? 1'bz : gpio_io_out[0];
assign gpio_io[1] = uut.reg_dir_ff[1] ? 1'bz : gpio_io_out[1];
assign gpio_io[2] = uut.reg_dir_ff[2] ? 1'bz : gpio_io_out[2];
assign gpio_io[3] = uut.reg_dir_ff[3] ? 1'bz : gpio_io_out[3];
assign gpio_io[4] = uut.reg_dir_ff[4] ? 1'bz : gpio_io_out[4];
assign gpio_io[5] = uut.reg_dir_ff[5] ? 1'bz : gpio_io_out[5];
assign gpio_io[6] = uut.reg_dir_ff[6] ? 1'bz : gpio_io_out[6];
assign gpio_io[7] = uut.reg_dir_ff[7] ? 1'bz : gpio_io_out[7];

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
        repeat (2)@ (posedge clk);
        rst_n = 1;
        @ (posedge clk);
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h04; //Direction Register
        dbus2gpio_i.w_data    = 32'hFF;
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
        @ (posedge clk);
        // Test case
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h00; //Data Register
        dbus2gpio_i.w_data    = 32'hAA; 
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
		gpio_io_out           = 8'h55;
        @ (posedge clk);
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h08; //Interrupt Pending Register
        dbus2gpio_i.w_data    = 32'hFF; 
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
        @ (posedge clk);
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h0C; //Interrupt Enable Register
        dbus2gpio_i.w_data    = 32'h0F; 
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
        @ (posedge clk);
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h10; //Interrupt Level Register
        dbus2gpio_i.w_data    = 32'hF0; 
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
        @ (posedge clk);
        gpio_sel_i = 0;
        @ (posedge clk);
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h00;
        dbus2gpio_i.w_en      = 1'b0;
        dbus2gpio_i.req       = 1'b1;
        gpio_io_out           = 8'hFF;
        @ (posedge clk);
        gpio_sel_i = 0;
        dbus2gpio_i.req       = 1'b0;
        repeat (3)@ (posedge clk);
        gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h04; //Direction Register
        dbus2gpio_i.w_data    = 32'hF0;
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
		@ (posedge clk);
		gpio_sel_i = 1;
        dbus2gpio_i.addr      = 32'h00; //Data Register
        dbus2gpio_i.w_data    = 32'hA0; 
        dbus2gpio_i.w_en      = 1'b1;
        dbus2gpio_i.req       = 1'b1;
        repeat (3)@ (posedge clk);
        
        // Finish the simulation
        @ (posedge clk);$stop;
    end


endmodule
