// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: UART receiver module with 8*8 FIFO
//              
//
// Author: Shehzeen Malik, UET Lahore
// Date: 13.7.2022
// Updated: 02.7-2023
 
`ifndef VERILATOR
`include "../../defines/uart_defs.svh"
`else
`include "uart_defs.svh"
`endif

module uart_rx (
    input  logic                                    rst_n,                    // reset
    input  logic                                    clk,                      // clock

    input  logic                                    rx_pin_i,

    // Signals to and from FIFO
    input  logic                                   rx_fifo_read_i,
    output logic                                   rx_fifo_empty_o,
    output logic [7:0]                             rx_fifo_data_o,

    // Signals to and from registers update
    output logic                                   rx_fifo_mark_o,
    input  logic [2:0]                             rx_watermark_i,
    input  logic                                   rx_en_i,
    input  logic [15:0]                            baud_rate_i
);


// Signals for UART state machine
type_uart_rx_states_e rx_state_ff, rx_state_next;

// Control Signals
logic                               baud_cnt_ovf, baud_count_en, baud_count_reset;
logic                               shifter_en;
logic                               bit_count_en, bit_count_load_en;
logic                               sbit_count_reset, sbit_count_en;
logic                               fifo_load_en;

// Datapath Signals
logic [3:0]                         bit_counter;
logic [15:0]                        baud_counter, sbit_sample_counter;
logic                               sbit_mid_point;
logic                               rx_pin_ff;
// Shift register for collecting the incoming bits, acts as a serial to parallel converter
logic [7:0]                         shifter_ff, shifter_next;

//FIFO signals
logic [UART_ADDR_FIFO:0]                  rx_fifo_count;
logic rx_fifo_full, rx_busy;

//============================ UART Receiver Controller ===========================//

// State register synchronous update
// ----------------------------------
always_ff @ (negedge rst_n or posedge clk) begin
    if (!rst_n)
        rx_state_ff <= UART_RX_IDLE;
    else
        rx_state_ff <= rx_state_next;
end

// Next State always block
// ----------------------------------
always_comb begin
rx_state_next = UART_RX_IDLE;
case (rx_state_ff)
    UART_RX_IDLE  : begin if (rx_en_i && !rx_fifo_full && !rx_pin_ff)
                            rx_state_next = UART_RX_START;
                          else 
                            rx_state_next = UART_RX_IDLE; 
                    end
    
    UART_RX_START  : begin if (sbit_mid_point)
                            rx_state_next = UART_RX_DATA;
                         else
                            rx_state_next = UART_RX_START;
                    end
	
    UART_RX_DATA : begin if (!rx_busy)
                            rx_state_next = UART_RX_STOP;
                         else
                            rx_state_next = UART_RX_DATA;
                    end
  
    UART_RX_STOP : begin if (baud_cnt_ovf)
                            rx_state_next = UART_RX_IDLE;
                         else
                            rx_state_next = UART_RX_STOP;
                    end
  
    default       : rx_state_next     = UART_RX_IDLE;
endcase
end

//Control signals always block
//----------------------------------

always_comb begin

case (rx_state_ff)
    UART_RX_IDLE  : begin
                        shifter_en        = 1'b0;
                        baud_count_en     = 1'b0;
                        baud_count_reset  = 1'b1;
                        bit_count_en      = 1'b0;
                        bit_count_load_en = 1'b0;
                        sbit_count_reset  = 1'b1;
                        sbit_count_en     = 1'b0;
                        fifo_load_en      = 1'b0;
                    end
    
    UART_RX_START : begin
                        shifter_en        = 1'b0;
                        baud_count_en     = 1'b0;
                        baud_count_reset  = 1'b1;
                        bit_count_en      = 1'b0;
                        bit_count_load_en = 1'b1;
                        sbit_count_reset  = 1'b0;
                        sbit_count_en     = 1'b1;
                        fifo_load_en      = 1'b0;
                    end
	
    UART_RX_DATA  : begin
                        fifo_load_en      = 1'b0;
                        sbit_count_reset  = 1'b1;
                        sbit_count_en     = 1'b0; 
                        bit_count_load_en = 1'b0;
                        if (baud_cnt_ovf)
                        begin
                            shifter_en       = 1'b1;
                            baud_count_en    = 1'b0;
                            baud_count_reset = 1'b1;
                            bit_count_en     = 1'b1;
                        end
                        else 
                        begin
                            shifter_en       = 1'b0;
                            baud_count_en    = 1'b1;
                            baud_count_reset = 1'b0;
                            bit_count_en     = 1'b0;
                        end
                    end
  
    UART_RX_STOP  : begin
                        shifter_en       = 1'b0; 
                        sbit_count_reset = 1'b0;
                        sbit_count_en    = 1'b0;
                        bit_count_en     = 1'b0;
                        bit_count_load_en = 1'b0;
                        if (baud_cnt_ovf)
                        begin
                            baud_count_en    = 1'b0;
                            baud_count_reset = 1'b1;
                            if (rx_pin_ff)
                                fifo_load_en = 1'b1;
                            else
                                fifo_load_en = 1'b0;
                        end
                        else 
                        begin
                            baud_count_en    = 1'b1;
                            baud_count_reset = 1'b0;
                            fifo_load_en     = 1'b0;
                        end
                    end
  
    default       : begin
                        shifter_en        = 1'b0;
                        baud_count_en     = 1'b0;
                        baud_count_reset  = 1'b1;
                        bit_count_load_en = 1'b0;
                        bit_count_en      = 1'b0;
                        bit_count_load_en = 1'b0;
                        sbit_count_reset  = 1'b1;
                        sbit_count_en     = 1'b0;
                        fifo_load_en      = 1'b0;
                    end
endcase
end


//============================ UART Receiver Datapath ===========================//

always_ff @ (negedge rst_n or negedge clk)
begin
    if (!rst_n) begin
        rx_pin_ff <= 1'b1;
    end else begin
        rx_pin_ff <= rx_pin_i;
    end
end

// shift register
always_ff @ (negedge rst_n or posedge clk)
begin
if (!rst_n)
    shifter_ff <= 8'h00;
else
    shifter_ff <= shifter_next; 
end

//shift register update
always_comb begin
if (shifter_en)
    shifter_next = {rx_pin_ff, shifter_ff[7:1]};
else
    shifter_next = shifter_ff;
end

// Counter to find mid of start bit
always_ff @ (negedge rst_n or posedge clk)
begin
if (!rst_n || sbit_count_reset)
    sbit_sample_counter <= 16'h0000;
else if (sbit_count_en)
    sbit_sample_counter <= sbit_sample_counter + 16'h0001;
end

assign sbit_mid_point = (sbit_sample_counter == baud_rate_i[15:1]) ? 1'b1 : 1'b0;

// Baud rate counter
always_ff @ (negedge rst_n or posedge clk) 
begin
if (!rst_n || baud_count_reset)
    baud_counter <= baud_rate_i;
else if (baud_count_en)
    baud_counter <= baud_counter - 16'h0001;
end

assign baud_cnt_ovf = (baud_counter == 16'h0000) ? 1'b1 : 1'b0; 


always_ff @ (negedge rst_n or posedge clk)
begin
if (!rst_n)
    bit_counter <= 4'h0;
else 
 begin
    if (bit_count_load_en)
        bit_counter <= 4'h8;
    else if (bit_count_en)
        bit_counter <= bit_counter - 4'h1;
 end
end

assign rx_busy = (bit_counter != 4'h0);

//rx fifo watermark check
always_ff @ (negedge rst_n or posedge clk) 
begin
if(!rst_n)
    rx_fifo_mark_o <= 1'b0;
else begin
    if (rx_fifo_count[2:0] > rx_watermark_i)
        rx_fifo_mark_o <= 1'b1;
    else if (rx_fifo_count[2:0] < rx_watermark_i)
        rx_fifo_mark_o <= 1'b0;
    end		
end

uart_fifo rx_fifo(
    .clk      (clk),
    .rst_n    (rst_n),
    .data_in    (shifter_ff),
    .data_out   (rx_fifo_data_o),
    .data_count (rx_fifo_count),
    .fifo_read  (rx_fifo_read_i),
    .fifo_write (fifo_load_en),
    .fifo_full  (rx_fifo_full),
    .fifo_empty (rx_fifo_empty_o)
);
endmodule
