// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: SPI controller with configurable clock rate. 
//
// Author: Shehzeen Malik, UET Lahore
// Date: 11.4.2023
// Updated: 24.6.2023


`timescale 1ns / 1ps
 
/*`ifndef VERILATOR
`include "../../defines/spi_defs.svh"
`else*/
`include "spi_defs.svh"
//`endif


module spi_controller (
    input  logic                                    rst_n,                    // reset
    input  logic                                    clk,                      // clock
    //slave select
    output logic [1:0]                              spi_slave_sel_i,

    //signals from and to reg update
    input  logic [1:0]                              reg_cs_default_ff_i,
    input  logic [1:0]                              reg_cs_id_ff_i,
    input  logic [11:0]                             spi_clock_period_i,
    input  logic                                    spi_clk_phase_i,
    input  logic                                    spi_clk_polarity_i,
    input  logic [1:0]                              spi_cs_mode_i     ,
    input  logic [7:0]                              c2t_time_i        ,
    input  logic [7:0]                              t2c_time_i        ,
    input  logic [7:0]                              inter_cs_time_i   ,
    input  logic [7:0]                              inter_frame_time_i,
    input  logic [3:0]                              spi_data_size_i   , 
    input  logic                                    rx_fifo_wr_disable_i,
    output logic                                    spi_busy_o,
    output logic                                    spi_hold_off_o,
    
    //signals to datapath
    input  logic                                    tx_fifo_empty_i,
    output logic                                    spi_mosi_first_transmit_o,
    output logic                                    spi_mosi_en_o,
    output logic                                    spi_miso_en_o,
    output logic                                    tx_shift_load_o,
    output logic                                    tx_fifo_read_o,
    output logic                                    rx_fifo_write_o,
    output logic                                    mosi_mux_sel_o,
    output logic                                    sclk_r_o
);
	
logic [8:0]                         c2t_delay,t2c_delay;
logic [7:0]                         count_intercs, count_interfr;
logic [4:0]                         data_cnt;
logic [11:0]                        clock_cnt;
logic [1:0]                         count_up;
logic [4:0]                         max_data_count;

// Signals for SPI state machine
type_spi_states_e                   spi_state_ff, spi_state_next;


assign max_data_count = spi_clk_phase_i ? (spi_data_size_i) : (spi_data_size_i+1);
	
/*================================= State Machine ========================== */

// Current State register synchronous update
always_ff @ (posedge clk , negedge rst_n) begin
    if (!rst_n)
        spi_state_ff <= SPI_ST_IDLE;
    else
        spi_state_ff <= spi_state_next;
end


// Next_state always block
always_comb begin
    spi_state_next = SPI_ST_IDLE;
    case (spi_state_ff)
        SPI_ST_IDLE       : begin if(!tx_fifo_empty_i) 
                                      spi_state_next = SPI_ST_LOAD_DATA;
                                  else 
                                      spi_state_next = SPI_ST_IDLE; 
                            end
        SPI_ST_LOAD_DATA  : begin if (count_intercs == inter_cs_time_i)
                                      spi_state_next = SPI_ST_WAIT;
                                  else
                                      spi_state_next = SPI_ST_LOAD_DATA;
                            end
        SPI_ST_WAIT       : begin if((c2t_delay == c2t_time_i))
                                      spi_state_next = SPI_ST_TRANS;
                                  else 
                                      spi_state_next = SPI_ST_WAIT;
                            end
        SPI_ST_TRANS      : begin if (spi_clk_phase_i == 0) begin
                                if (data_cnt == max_data_count) begin
                                    if (!tx_fifo_empty_i && 
                                      ((spi_cs_mode_i == 2'b10) || (spi_cs_mode_i == 2'b11)))
                                        spi_state_next = SPI_ST_TURNAROUND;
                                    else 
                                        spi_state_next = SPI_ST_INTERVAL;
                                end else
                                    spi_state_next = SPI_ST_TRANS;
                                end else if (spi_clk_phase_i == 1) begin
                                    if((data_cnt == max_data_count) 
							    	  && (sclk_r_o == spi_clk_polarity_i)) begin
                                        if (clock_cnt == (spi_clock_period_i-1)) begin
                                            if (!tx_fifo_empty_i && 
                                              ((spi_cs_mode_i == 2'b10) || (spi_cs_mode_i == 2'b11)))
                                                spi_state_next = SPI_ST_TURNAROUND;
                                            else 
                                                spi_state_next = SPI_ST_INTERVAL;
                                        end else
                                            spi_state_next = SPI_ST_TRANS;
                                        end else
                                            spi_state_next = SPI_ST_TRANS;
                                end
                                
                            end
        SPI_ST_TURNAROUND : begin if(count_interfr == inter_frame_time_i)
                                      spi_state_next = SPI_ST_TRANS;
                                  else 
                                      spi_state_next = SPI_ST_TURNAROUND;
                            end
        SPI_ST_INTERVAL   : begin if(t2c_delay == t2c_time_i)
                                      spi_state_next = SPI_ST_IDLE;
                                  else 
                                      spi_state_next = SPI_ST_INTERVAL;
                            end
        default           : spi_state_next = SPI_ST_IDLE;
    endcase
end
	
// signal for only transmission for mosi pin state
assign mosi_mux_sel_o = (spi_state_ff == SPI_ST_TRANS) ? 1'b1 : 1'b0;

// Slave select update
always_ff @(posedge clk , negedge rst_n) begin
    if (!rst_n || (spi_state_ff == SPI_ST_IDLE))
        spi_slave_sel_i <= reg_cs_default_ff_i;
    else begin
        if ((spi_state_ff == SPI_ST_LOAD_DATA) && (count_intercs == inter_cs_time_i))
            spi_slave_sel_i <= (reg_cs_default_ff_i ^ reg_cs_id_ff_i);
    end
end

// Generate SCLK
always_ff @(posedge clk , negedge rst_n) begin
    if (!rst_n || (spi_state_ff != SPI_ST_TRANS))
        sclk_r_o <= spi_clk_polarity_i;
    else begin
        if ((spi_state_ff == SPI_ST_TRANS) && (clock_cnt == spi_clock_period_i))
            sclk_r_o <= ~sclk_r_o;
    end
end

//clock count
always_ff @(posedge clk , negedge rst_n) begin
    if (!rst_n || (spi_state_ff != spi_state_next))
        clock_cnt <= 8'h00;
    else begin
        if (clock_cnt < spi_clock_period_i)
            clock_cnt <= clock_cnt + 8'h01;
        else if (clock_cnt == spi_clock_period_i)
            clock_cnt <= 8'h00;
    end
end

//count for one period of clock cycle for delay0,1 regs times
always_ff @(posedge clk , negedge rst_n) begin
    if (!rst_n || (spi_state_ff != spi_state_next)) 
        count_up <= 2'b00;
    else begin
        if (clock_cnt == spi_clock_period_i)
            count_up <= count_up  + 2'b01;
        else if (count_up == 2'b10)
            count_up <= 2'b00;
    end
end

//counter for minimum time between deassertion and assertion
always_ff @(posedge clk , negedge rst_n) begin
    if(!rst_n)
        count_intercs <= 8'h00;
    else begin
        if ((spi_state_ff == SPI_ST_LOAD_DATA) && (count_intercs < inter_cs_time_i)) begin
            if (count_up == 2'b10)
                count_intercs <= count_intercs + 8'h01;
        end else
            count_intercs <= 8'h00;
    end	
end

//counter for delay between two frames without deassertion
always_ff @(posedge clk , negedge rst_n) begin
    if(!rst_n)
        count_interfr <= 8'h00;
    else begin
        if ((spi_state_ff == SPI_ST_TURNAROUND) && (count_interfr < inter_frame_time_i)) begin
            if (count_up == 2'b10)  
                count_interfr <= count_interfr + 8'h01;
    end else
        count_interfr <= 8'h00;
    end	
end
	
//counter for ss=0 to transmission and transmission to ss=1
always_ff @(posedge clk , negedge rst_n) begin
    if(!rst_n) begin
        c2t_delay <= 9'h000;
        t2c_delay <= 9'h000;
    end else begin
    if ((spi_state_ff == SPI_ST_WAIT) && (c2t_delay < c2t_time_i)) begin
        if (count_up == 2'b10)
            c2t_delay <= c2t_delay + 1; 
    end else
        c2t_delay <= 9'h000;
        if ((spi_state_ff == SPI_ST_INTERVAL) && (t2c_delay < t2c_time_i)) begin
            if (count_up == 2'b10)
                t2c_delay <= t2c_delay + 1;
    end else
        t2c_delay <= 9'h000;
    end
end
	
// counting number of bits transmitted
always_ff @(posedge clk , negedge rst_n) begin
    if (!rst_n || (spi_state_ff != SPI_ST_TRANS))
        data_cnt <= 0;
    else if (spi_state_ff == SPI_ST_TRANS) begin
        if (spi_clk_phase_i == 0) begin
            if (spi_mosi_first_transmit_o)
                data_cnt <= data_cnt + 1;
            else if (sclk_r_o != spi_clk_polarity_i && data_cnt <= max_data_count) begin
                if ((count_up == 2'b01) && (clock_cnt == spi_clock_period_i))
                    data_cnt <= data_cnt + 1; 
            end
        end else if (spi_clk_phase_i == 1) begin
            if (sclk_r_o != spi_clk_polarity_i && data_cnt < max_data_count) begin
                if ((count_up == 2'b01) && (clock_cnt == spi_clock_period_i))
                    data_cnt <= data_cnt + 1; 
            end
        end
    end else
        data_cnt <= 0;
end
	
	
// Enable for loading changed configurations so that 
//current transmission does not get affected
always_comb begin
    if (spi_state_ff == SPI_ST_IDLE)
        spi_busy_o = 1'b0;
    else
        spi_busy_o = 1'b1;
end

// Enable for loading changed configurations for removing hold mode
always_comb begin
    if ((spi_state_ff == SPI_ST_IDLE) || (spi_state_ff == SPI_ST_TURNAROUND))
        spi_hold_off_o = 1'b1;
    else
        spi_hold_off_o = 1'b0;
end

// first bit is transmitted before clock edge if clock phase = 0
always_ff @(posedge clk , negedge rst_n) begin
    if (!rst_n) 
        spi_mosi_first_transmit_o <= 0;
    else begin
        if (spi_state_ff == SPI_ST_TRANS) begin
            if ((spi_clk_phase_i == 0) && (clock_cnt == 12'h000) && (count_up == 2'b00))
                spi_mosi_first_transmit_o <= (data_cnt==0) ? 1 : 0;
            else
                spi_mosi_first_transmit_o <= 0;
        end else
            spi_mosi_first_transmit_o <= 0;
    end
end

// mosi transmission enable
always_ff @ (posedge clk , negedge rst_n) begin
    if(!rst_n)
        spi_mosi_en_o <= 1'b0;
    else if (spi_state_ff == SPI_ST_TRANS) begin
        if (spi_clk_phase_i == 0) begin
            if ((data_cnt < spi_data_size_i) && (sclk_r_o != spi_clk_polarity_i) 
              && (clock_cnt == spi_clock_period_i) && (count_up == 2'b01))
                spi_mosi_en_o <= 1'b1;
            else
                spi_mosi_en_o <= 1'b0;
        end else begin
            if ((sclk_r_o == spi_clk_polarity_i) && (clock_cnt == spi_clock_period_i) 
              && (count_up == 2'b00))
                spi_mosi_en_o <= 1'b1;
            else
                spi_mosi_en_o <= 1'b0;
        end
    end else
        spi_mosi_en_o <= 1'b0;
end

//miso transmission enable
always_ff @(posedge clk , negedge rst_n) begin
    if(!rst_n)
        spi_miso_en_o <= 1'b0;
    else if (spi_state_ff == SPI_ST_TRANS) begin
        if (spi_clk_phase_i == 0) begin
            if ((sclk_r_o == spi_clk_polarity_i) && (clock_cnt == spi_clock_period_i)
              && (count_up == 2'b00))
                spi_miso_en_o <= 1'b1;
            else
                spi_miso_en_o <= 1'b0;
        end else begin
            if ((sclk_r_o != spi_clk_polarity_i) && (clock_cnt == spi_clock_period_i)
             && (count_up == 2'b01))
                spi_miso_en_o <= 1'b1;
            else
                spi_miso_en_o <= 1'b0;
        end
    end else
        spi_miso_en_o <= 1'b0;
end

// rx fifo write control
always_comb begin
    rx_fifo_write_o = 1'b0;
    if (!rx_fifo_wr_disable_i) begin
        if (spi_clk_phase_i == 0) begin
            if (spi_state_ff == SPI_ST_TRANS && data_cnt == max_data_count)
                rx_fifo_write_o = 1'b1;
            else
                rx_fifo_write_o = 1'b0;
        end else if (spi_clk_phase_i == 1) begin
            if (((spi_state_ff == SPI_ST_TRANS) && (spi_state_next == SPI_ST_INTERVAL))
               || ((spi_state_ff == SPI_ST_TRANS) && (spi_state_next == SPI_ST_TURNAROUND)))
                rx_fifo_write_o = 1'b1;
            else
                rx_fifo_write_o = 1'b0;	
        end else
            rx_fifo_write_o = 1'b0;
        end else
            rx_fifo_write_o = 1'b0;
end

// tx fifo read control
always_comb begin
    if ((((spi_state_ff == SPI_ST_LOAD_DATA) && (count_intercs == 8'h00))||
       ((spi_state_ff == SPI_ST_TURNAROUND) && (count_interfr == 8'h00))) &&
       ((count_up == 2'b00) && (clock_cnt == 12'h000)))
        tx_fifo_read_o = 1'b1;
    else
        tx_fifo_read_o = 1'b0;
end

// tx shifter load control
always_comb begin
    if (((spi_state_ff == SPI_ST_WAIT) || (spi_state_ff == SPI_ST_TURNAROUND))
       && (spi_state_next == SPI_ST_TRANS))
        tx_shift_load_o = 1'b1;
    else
        tx_shift_load_o = 1'b0;
end 

endmodule