// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  dir = 1 output, dir = 0 input
//               gpio A,B and C will be pmod connectors A,B and C.
//               gpsw are 16 switches present on nexysA7
//               gpled are 16 leds present on nexysA7
//
// Author: Shehzeen Malik, UET Lahore
// Date: 20.5.2024


`ifndef VERILATOR
`include "gpio_defs.svh"
`else
`include "gpio_defs.svh"
`endif

module gpio_main(
    input  logic                                clk,
    input  logic                                rst_n,
    output logic                                gpio_irq,
//    output logic                                gpio_ack,
    output logic                                gpio_sel_data,
    inout  logic [23:0]                         gpio_ioo,
    input  logic [15:0]                         gp_sw,
    output logic [15:0]                         gp_led,
	output logic [6:0]                          sv_seg_data,
	output logic [7:0]                          sv_seg_en
);

//internal signals
logic                                          gpioA_sel ;
logic                                          gpioB_sel ;
logic                                          gpioC_sel ;
logic                                          gpsw_sel  ;
logic                                          gpled_sel ;
logic                                          seg_clk ;
logic                                          data_clk ;
logic [3:0]                                    m_out;
logic [3:0]                                    select;
logic [3:0]                                    data_chng_cnt;
logic [31:0]                                   ctck;

type_dbus2peri_s                dbus2gpio;
type_peri2dbus_s                gpio2dbus;

//------------------------------ displaying data on seven segments---------------------------//
// seg_clk generation
    
    always_ff @ (posedge clk)
    begin
	if (!rst_n) begin
	    seg_clk  <= 1'b0;
	    data_clk <= 1'b0;
        ctck     <= '0;
    end else begin
        seg_clk  <= ctck[16]; //16
	    data_clk <= ctck[29]; //29
        ctck     <= ctck+1;
    end
end


// select generation
always_ff @(posedge seg_clk or negedge rst_n) begin
    if (!rst_n || select>=7)   
       select <= 0;
    else
       select <= select+1; 
end

//assign gpio_ack = gpio2dbus.ack;

//8*1 mux will decide which data will go to seven segment for showing
	always_comb begin
		case(select)
		0: m_out = data_chng_cnt;      
		1: m_out = dbus2gpio.addr[3:0];
		2: m_out = dbus2gpio.addr[7:4];
		3: m_out = gpio2dbus.r_data[3:0];
		4: m_out = gpio2dbus.r_data[7:4];
		5: m_out = gpio2dbus.r_data[11:8];
		6: m_out = gpio2dbus.r_data[15:12];
		7: m_out = gpio2dbus.r_data[19:16];
		default: m_out = 4'h0;
		endcase
	end

// sv_seg_data patterns of the 7-segment 1 LED display 
    always_comb begin
        case(m_out)
        4'b0000: sv_seg_data <= 7'b0000001; // "0"     
        4'b0001: sv_seg_data <= 7'b1001111; // "1" 
        4'b0010: sv_seg_data <= 7'b0010010; // "2" 
        4'b0011: sv_seg_data <= 7'b0000110; // "3" 
        4'b0100: sv_seg_data <= 7'b1001100; // "4" 
        4'b0101: sv_seg_data <= 7'b0100100; // "5" 
        4'b0110: sv_seg_data <= 7'b0100000; // "6" 
        4'b0111: sv_seg_data <= 7'b0001111; // "7" 
        4'b1000: sv_seg_data <= 7'b0000000; // "8"     
        4'b1001: sv_seg_data <= 7'b0000100; // "9"
		4'b1010: sv_seg_data <= 7'b0001000; // "A"     
        4'b1011: sv_seg_data <= 7'b1100000; // "b"     
        4'b1100: sv_seg_data <= 7'b0110001; // "C"     
        4'b1101: sv_seg_data <= 7'b1000010; // "d"     
        4'b1110: sv_seg_data <= 7'b0110000; // "E"     
        4'b1111: sv_seg_data <= 7'b0111000; // "F"     
        
        default: sv_seg_data = 7'b1111111; // "-"
        endcase
    end
	
	
	always_comb begin
		case(select)
        0: sv_seg_en = 8'b11111110;
        1: sv_seg_en = 8'b11111101;
        2: sv_seg_en = 8'b11111011;
        3: sv_seg_en = 8'b11110111; 
        4: sv_seg_en = 8'b11101111; 
        5: sv_seg_en = 8'b11011111; 
        6: sv_seg_en = 8'b10111111; 
        7: sv_seg_en = 8'b01111111; 
		default: sv_seg_en = 8'b11111111;
        endcase
    end
	
	//------------------------- generating data for dbus2gpio -----------------------------------------//
	
	always_ff @ (posedge data_clk or negedge rst_n) begin
	if (!rst_n)
	    data_chng_cnt <= '0;
	else begin 
	    data_chng_cnt <=  data_chng_cnt + 4'h1;
	end
end
	
	always_comb begin
	
	case (data_chng_cnt)
	// gp led
	0: begin dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h18011995;
	         dbus2gpio.w_en   = 1'b1;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b0;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b1; end
	
	// gp switches		 
	1: begin dbus2gpio.addr   = 32'h00000004;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b0;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b0;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b1;
	         gpled_sel        = 1'b0; end
	
	// gpioA as dir = all input		 
	2: begin dbus2gpio.addr   = 32'h00000004;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b1;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	// gpioA direction read		 
	3: begin dbus2gpio.addr   = 32'h00000004;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b0;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	 
	 //gpioA data
	4: begin dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b0;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	
	//gpioA read data
	5: begin dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b0;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	
	6: begin dbus2gpio.addr   = 32'h00000004;
	         dbus2gpio.w_data = 32'h000000F0;
	         dbus2gpio.w_en   = 1'b1;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	// gpioA data read		 
	7: begin dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b0;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	 
	 //gpioA data write
	8: begin dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h000000F0;
	         dbus2gpio.w_en   = 1'b1;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	
	//gpioA data read
	9: begin dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b0;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	
	// gpioA direction 0F
	10: begin dbus2gpio.addr   = 32'h00000004;
	         dbus2gpio.w_data = 32'h0000000F;
	         dbus2gpio.w_en   = 1'b1;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	// gpioA data write read		 
	11: begin dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h0000000F;
	         dbus2gpio.w_en   = 1'b1;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	 
	 //gpioA data read
	12: begin dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b0;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	
	//gpioB wr data = 9C
	13: begin dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h0000009C;
	         dbus2gpio.w_en   = 1'b1;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	
	// gpioA read data
	14: begin dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b0;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	
	15: begin dbus2gpio.addr  = 32'h00000000;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b0;
	         dbus2gpio.req    = 1'b1;
			 gpioA_sel        = 1'b1;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
	
	default: begin 
	         dbus2gpio.addr   = 32'h00000000;
	         dbus2gpio.w_data = 32'h00000000;
	         dbus2gpio.w_en   = 1'b0;
	         dbus2gpio.req    = 1'b0;
			 gpioA_sel        = 1'b0;
	         gpioB_sel        = 1'b0;
	         gpioC_sel        = 1'b0;
	         gpsw_sel         = 1'b0;
	         gpled_sel        = 1'b0; end
			 
	endcase
	end
	
	
	

//-------------------------------- gpio top module instantiation ------------------------------------//
gpio_top gpt(
    .clk         (clk),
    .rst_n       (rst_n),
    .gpioA_sel_i (gpioA_sel),
    .gpioB_sel_i (gpioB_sel),
    .gpioC_sel_i (gpioC_sel),
    .gpsw_sel_i  (gpsw_sel),
    .gpled_sel_i (gpled_sel),
    .dbus2gpio_i (dbus2gpio),
    .gpio2dbus_o (gpio2dbus),
    .gpio_irq_o  (gpio_irq),
    .gpio_io     (gpio_ioo),
    .gp_switch_i (gp_sw),
    .gp_led_o    (gp_led),
    .gpio_sel_data(gpio_sel_data)
);

    
endmodule