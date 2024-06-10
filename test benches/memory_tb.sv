// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Aman Murad, UET Lahore
// Date: 30.5.2024

`timescale 1ns / 1ps

`include "../rtl/defines/mem_defs.svh"

module memory_tb();

    // Testbench signals
    logic                                rst_n;
    logic                                clk;
    type_if2mem_s                        if2mem_i;
    type_mem2if_s                        mem2if_o;
    logic                                dmem_sel;
    type_dbus2peri_s                     exe2mem_i;
    type_peri2dbus_s                     mem2wrb_o;

    // Memory instantiation
    memory uut (
        .rst_n(rst_n),
        .clk(clk),
        .if2mem_i(if2mem_i),
        .mem2if_o(mem2if_o),
        .dmem_sel(dmem_sel),
        .exe2mem_i(exe2mem_i),
        .mem2wrb_o(mem2wrb_o)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end
    // Initial block for test stimulus
    initial begin

        // Initialize signals
        rst_n     = 1'b0;
        dmem_sel  = 1'b0;
        if2mem_i  = '0;
        exe2mem_i = '0;
        #10;

        // Test Case 1: Instruction Fetch
        if2mem_i.addr    = 32'h04;
        if2mem_i.req     = 1'b1;
        dmem_sel         = 1'b0;
        exe2mem_i.addr   = 32'h00;
        exe2mem_i.w_data = 32'h00;
        exe2mem_i.w_en   = 1'b0;
        exe2mem_i.req    = 1'b0;
        #10;

        if2mem_i.req     = 1'b0;
        exe2mem_i.addr   = 32'h08;
        exe2mem_i.w_data = 32'hAA;
        exe2mem_i.w_en   = 1'b1;
        exe2mem_i.req    = 1'b1;
        dmem_sel         = 1'b1;
        #10;

        if2mem_i.addr    = 32'h08;
        if2mem_i.req     = 1'b1;
        exe2mem_i.addr   = 32'h18;
        exe2mem_i.w_data = 32'hBB;
        exe2mem_i.w_en   = 1'b1;
        exe2mem_i.req    = 1'b1;
        dmem_sel         = 1'b1;
        #10;

        if2mem_i.req     = 1'b0;
        exe2mem_i.req    = 1'b0;
        #20;
        $finish;
    end

endmodule