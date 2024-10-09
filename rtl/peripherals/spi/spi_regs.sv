// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: SPI register update module
//
// Author: Shehzeen Malik, UET Lahore
// Date: 11.4.2023
// Updated: 19.6.2023
 

`timescale 1ns / 1ps

`ifndef VERILATOR
`include "../../defines/spi_defs.svh"
`else
`include "spi_defs.svh"
`endif

module spi_regs (
    input  logic                                    rst_n,               // reset
    input  logic                                    clk,                 // clock
    input  logic                                    spi_sel_i,                         
    // Interrupt signal from SPI
    output logic                                    irq_o,    
    // Dbus to SPI module interface
    input  wire type_dbus2peri_s                    dbus2spi_i,          // SPI dbus input signals
    output type_peri2dbus_s                         spi2dbus_o,          // SPI dbus output signals
    
    
    //Signals from and to controller
    input  logic                                    spi_busy_i,
    input  logic                                    spi_hold_off_i,
    output logic [11:0]                             spi_clock_period_o,
    output logic                                    spi_clk_phase_o,
    output logic                                    spi_clk_polarity_o,
    output logic [1:0]                              reg_cs_mode_ff_o,
    output logic [7:0]                              c2t_time_o,
    output logic [7:0]                              t2c_time_o        ,
    output logic [7:0]                              inter_cs_time_o   ,
    output logic [7:0]                              inter_frame_time_o,
    output logic [3:0]                              spi_data_size_o   ,
    output logic [1:0]                              reg_cs_default_ff_o,
    output logic [1:0]                              reg_cs_id_ff_o,
    
    // signals to and from fifo
    input  logic                                    tx_fifo_full_i,
    input  logic                                    rx_fifo_empty_i,
    input  logic [7:0]                              rx_fifo_data_i,
    output logic [7:0]                              reg_tx_data_ff_o,
    output logic                                    rx_fifo_wr_disable_o,
    output logic                                    rx_fifo_read_o,
    output logic                                    tx_fifo_write_o,    
    //signals to and from datapath
    input  logic                                    rx_fifo_mark_i,
    input  logic                                    tx_fifo_mark_i,
    output logic [2:0]                              tx_water_mark_o,
    output logic [2:0]                              rx_water_mark_o,
    output logic                                    spi_shift_direct_o
);
	
// Signal definitions for dbus interface
type_dbus2peri_s                    dbus2spi;
type_peri2dbus_s                    spi2dbus_ff;
logic [7:0]                         reg_addr;
logic                               reg_rd_req;
logic                               reg_wr_req;
// Read and write signals for SPI registers
logic [31:0]                        reg_w_data;
logic [31:0]                        reg_r_data;
logic                               rx_fifo_empty_ff;

// control signals
logic                               spi_sel_sdiv  ;
logic                               spi_sel_ckmode;
logic                               spi_sel_csid  ;
logic                               spi_sel_csdef ;
logic                               spi_sel_csmode;
logic                               spi_sel_del0  ;
logic                               spi_sel_del1  ;
logic                               spi_sel_fmt   ;
logic                               spi_sel_txdata;
logic                               spi_sel_txmark;
logic                               spi_sel_rxmark;
logic                               spi_sel_ie    ;
//The SPI memory map has been designed to only require 
//naturally aligned 32-bit memory accesses.
logic [11:0]                        reg_sck_div_next    , reg_sck_div_ff; 
logic [1:0]                         reg_sck_mode_next   , reg_sck_mode_ff;
logic [1:0]                         reg_cs_id_next;
logic [1:0]                         reg_cs_default_next;
logic [1:0]                         reg_cs_mode_next    ;
logic [15:0]                        reg_delay0_next     , reg_delay0_ff;
logic [15:0]                        reg_delay1_next     , reg_delay1_ff;
logic [7:0]                         reg_fmt_next        , reg_fmt_ff;
logic [7:0]                         reg_tx_data_next    ;
logic [7:0]                         reg_rx_data_next    , reg_rx_data_ff;
logic [2:0]                         reg_tx_mark_next    , reg_tx_mark_ff;
logic [2:0]                         reg_rx_mark_next    , reg_rx_mark_ff;
/*logic [31:0]                        reg_fctrl_next      , reg_fctrl_ff;
logic [31:0]                        reg_ffmt_next       , reg_ffmt_ff;*/
logic [1:0]                         reg_intr_enable_next, reg_intr_enable_ff;
logic [1:0]                         reg_intr_pend_next  , reg_intr_pend_ff;


//================================= Dbus interface ==================================//

assign dbus2spi = dbus2spi_i;

// Signal interface from data bus
assign reg_addr   = type_spi_regs_e'(dbus2spi.addr[7:0]);
assign reg_w_data = dbus2spi.w_data;
assign reg_rd_req = !dbus2spi.w_en && dbus2spi.req && spi_sel_i;
assign reg_wr_req = dbus2spi.w_en  && dbus2spi.req && spi_sel_i;

// SPI write/read operation 
always_ff @(posedge clk) begin  
spi2dbus_ff <= '0;
if ((reg_wr_req | reg_rd_req) & ~spi2dbus_ff.ack) begin
    spi2dbus_ff.ack <= 1'b1;
    if (reg_rd_req)
        spi2dbus_ff.r_data <= reg_r_data;         
end  
end  

// Response signals to dbus 
assign spi2dbus_o.r_data = (reg_addr == SPI_RXDATA_R)? reg_r_data : spi2dbus_ff.r_data;
assign spi2dbus_o.ack = spi2dbus_ff.ack;

//================================= SPI register select operations ==================================//
always_comb begin
    spi_sel_sdiv   = 1'b0;
    spi_sel_ckmode = 1'b0;
    spi_sel_csid   = 1'b0;
    spi_sel_csdef  = 1'b0;
    spi_sel_csmode = 1'b0;
    spi_sel_del0   = 1'b0;
    spi_sel_del1   = 1'b0;
    spi_sel_fmt    = 1'b0;
    spi_sel_txdata = 1'b0;
    spi_sel_txmark = 1'b0;
    spi_sel_rxmark = 1'b0;
    spi_sel_ie     = 1'b0;
    // Register selection for write operation
    if(reg_wr_req && ~spi2dbus_ff.ack) begin
        case (reg_addr)
            SPI_SCK_DIV_R  : spi_sel_sdiv   = 1'b1;
            SPI_SCK_MODE_R : spi_sel_ckmode = 1'b1;
            SPI_CS_ID_R    : spi_sel_csid   = 1'b1;
            SPI_CS_DEF_R   : spi_sel_csdef  = 1'b1;
            SPI_CS_MODE_R  : spi_sel_csmode = 1'b1;
            SPI_DELAY_0_R  : spi_sel_del0   = 1'b1;
            SPI_DELAY_1_R  : spi_sel_del1   = 1'b1;
            SPI_FMT_R      : spi_sel_fmt    = 1'b1;
            SPI_TXDATA_R   : spi_sel_txdata = 1'b1;
            SPI_RXDATA_R   : begin              end
            SPI_TX_MARK_R  : spi_sel_txmark = 1'b1;
            SPI_RX_MARK_R  : spi_sel_rxmark = 1'b1;
            SPI_FCTRL_R    : begin              end
            SPI_FFMT_R     : begin              end 
            SPI_IE_R       : spi_sel_ie     = 1'b1;
            SPI_IP_R       : begin              end 
            default        : begin              end
        endcase // reg_addr
    end
end

	
//================================= SPI register read operations ==================================//

always_comb begin
    reg_r_data  = 32'h0000; 
    if(reg_rd_req) begin
        case (reg_addr)
            // SPI data receive registers
            SPI_SCK_DIV_R  : reg_r_data = {20'b0, reg_sck_div_ff}; 
            SPI_SCK_MODE_R : reg_r_data = {30'b0, reg_sck_mode_ff};
            SPI_CS_ID_R    : reg_r_data = {30'b0, reg_cs_id_ff_o};
            SPI_CS_DEF_R   : reg_r_data = {30'b0, reg_cs_default_ff_o};
            SPI_CS_MODE_R  : reg_r_data = {30'b0, reg_cs_mode_ff_o};
            SPI_DELAY_0_R  : reg_r_data = {8'b0, reg_delay0_ff[15:8], 8'b0, reg_delay0_ff[7:0]};
            SPI_DELAY_1_R  : reg_r_data = {8'b0, reg_delay1_ff[15:8], 8'b0, reg_delay1_ff[7:0]};
            SPI_FMT_R      : reg_r_data = {12'b0, reg_fmt_ff[7:4], 12'b0, reg_fmt_ff[3:0]};
            SPI_TXDATA_R   : reg_r_data = {tx_fifo_full_i, 30'b0};
            SPI_RXDATA_R   : reg_r_data = {rx_fifo_empty_ff, 23'b0, rx_fifo_data_i};
            SPI_TX_MARK_R  : reg_r_data = {29'b0, reg_tx_mark_ff};
            SPI_RX_MARK_R  : reg_r_data = {29'b0, reg_rx_mark_ff};
            SPI_FCTRL_R    : begin end //reg_r_data = {31'b0, reg_fctrl};
            SPI_FFMT_R     : begin end //reg_r_data = reg_ffmt;
            SPI_IE_R       : reg_r_data = {30'b0, reg_intr_enable_ff};
            SPI_IP_R       : reg_r_data = {30'b0, reg_intr_pend_ff};
            default        : reg_r_data = 32'h0;
        endcase // reg_addr
    end
end

//delaying rx fifo empty flag by one cycle so valid data does not get discarded by reader
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) 
        rx_fifo_empty_ff <= 1'b1;
    else
        rx_fifo_empty_ff <= rx_fifo_empty_i;
end

//rx fifo read request
always_comb begin
    if(reg_rd_req) begin
        if ((reg_addr == SPI_RXDATA_R) && !spi2dbus_ff.ack)
            rx_fifo_read_o = 1'b1;
        else
            rx_fifo_read_o = 1'b0; 
	end else begin
            rx_fifo_read_o = 1'b0;
	end
end

//tx fifo write request
always_ff @(posedge clk , negedge rst_n) begin
    if (!rst_n)
        tx_fifo_write_o <= 1'b0;
    else begin
        if (spi_sel_txdata) 
            tx_fifo_write_o <= 1'b1;
        else
            tx_fifo_write_o <= 1'b0;
    end
end
//================================= SPI register write operations ==================================//
// ----------------------------
// Update SPI registers 
// ----------------------------
always_ff @(negedge rst_n , posedge clk) begin
    if(~rst_n) begin
        reg_sck_div_ff      <= 12'h003; 
        reg_sck_mode_ff     <= 2'b00;
        reg_cs_id_ff_o      <= 2'b00;
        reg_cs_default_ff_o <= 2'b11;
        reg_cs_mode_ff_o    <= 2'b00;
        reg_delay0_ff       <= 16'h0101;
        reg_delay1_ff       <= 16'h0001;
        reg_fmt_ff          <= 8'h80;
        reg_tx_data_ff_o    <= 8'h00;
        reg_tx_mark_ff      <= 3'h0;
        reg_rx_mark_ff      <= 3'h0;
        /*reg_fctrl_ff      <= 1'b0;
        reg_ffmt_ff         <= 32'h00030007;*/
        reg_intr_enable_ff  <= 2'b00;
        reg_intr_pend_ff    <= 2'b00;
    end else begin
        reg_tx_data_ff_o   <= reg_tx_data_next;
        reg_intr_enable_ff <= reg_intr_enable_next;
        reg_intr_pend_ff   <= reg_intr_pend_next;
        reg_tx_mark_ff     <= reg_tx_mark_next;
        reg_rx_mark_ff     <= reg_rx_mark_next;
        if (spi_hold_off_i) begin
            reg_cs_mode_ff_o    <= reg_cs_mode_next;
            reg_cs_id_ff_o      <= reg_cs_id_next;
            reg_cs_default_ff_o <= reg_cs_default_next;
        end if (!spi_busy_i) begin
            reg_sck_div_ff     <= reg_sck_div_next;
            reg_sck_mode_ff    <= reg_sck_mode_next;
            reg_delay0_ff      <= reg_delay0_next;
            reg_delay1_ff      <= reg_delay1_next;
            reg_fmt_ff         <= reg_fmt_next;
            /*reg_fctrl_ff     <= reg_fctrl_next;
            reg_ffmt_ff        <= reg_ffmt_next;*/
        end
    end
end
// ----------------------------
// Update SPI Next register 
// ----------------------------
// ----------------------------
// Update SPI Interrupt pending register 
// ----------------------------
assign reg_intr_pend_next = {rx_fifo_mark_i,tx_fifo_mark_i};

always_comb begin	
    // ----------------------------
    // Update SPI CLock Divisor register 
    // ----------------------------
    if (spi_sel_sdiv) 
        reg_sck_div_next = reg_w_data[11:0];
    else
        reg_sck_div_next = reg_sck_div_ff;
    // ----------------------------
    // Update SPI Serial Clock Mode register 
    // ----------------------------
    if (spi_sel_ckmode) 
        reg_sck_mode_next = reg_w_data[1:0];
    else
        reg_sck_mode_next = reg_sck_mode_ff;
    // ----------------------------
    // Update SPI Chip Select ID register 
    // ----------------------------	
    if (spi_sel_csid) 
        reg_cs_id_next = reg_w_data[1:0];
    else
        reg_cs_id_next = reg_cs_id_ff_o;
    // ----------------------------
    // Update SPI Chip Select Default register 
    // ----------------------------	
    if (spi_sel_csdef) 
        reg_cs_default_next = reg_w_data[1:0];
    else
        reg_cs_default_next = reg_cs_default_ff_o;
    // ----------------------------
    // Update SPI Chip Select Mode register 
    // ----------------------------	
    if (spi_sel_csmode) 
        reg_cs_mode_next = reg_w_data[1:0];
    else
        reg_cs_mode_next = reg_cs_mode_ff_o;
    // ----------------------------
    // Update SPI Delay0 Control register 
    // ----------------------------	
    if (spi_sel_del0) 
        reg_delay0_next = {reg_w_data[23:16],reg_w_data[7:0]};
    else
        reg_delay0_next = reg_delay0_ff;
    // ----------------------------
    // Update SPI Delay1 Control register 
    // ----------------------------
    if (spi_sel_del1) 
        reg_delay1_next = {reg_w_data[23:16],reg_w_data[7:0]};
    else
        reg_delay1_next = reg_delay1_ff;
    // ----------------------------
    // Update SPI Frame Format register 
    // ----------------------------
    if (spi_sel_fmt) 
        reg_fmt_next = {reg_w_data[19:16],reg_w_data[3:2],2'b00};
    else
        reg_fmt_next = reg_fmt_ff;
    // ----------------------------
    // Update SPI Transmit Data register 
    // ----------------------------	
    if (spi_sel_txdata) 
        reg_tx_data_next = reg_w_data[7:0];
    else
        reg_tx_data_next = reg_tx_data_ff_o;
    // ----------------------------
    // Update SPI Transmit Watermark register 
    // ----------------------------	
    if (spi_sel_txmark) 
        reg_tx_mark_next = reg_w_data[2:0];
    else
        reg_tx_mark_next = reg_tx_mark_ff;
    // ----------------------------
    // Update SPI Receive Watermark register 
    // ----------------------------
    if (spi_sel_rxmark) 
        reg_rx_mark_next = reg_w_data[2:0];
    else
        reg_rx_mark_next = reg_rx_mark_ff;
    // ----------------------------
    // Update SPI Interrupt enable register 
    // ----------------------------
    if (spi_sel_ie) 
        reg_intr_enable_next = reg_w_data[1:0];
    else
        reg_intr_enable_next = reg_intr_enable_ff;
end

// bits to signals
always_comb begin
    spi_clock_period_o   = reg_sck_div_ff;
    spi_clk_phase_o      = reg_sck_mode_ff[0];
    spi_clk_polarity_o   = reg_sck_mode_ff[1];
    c2t_time_o           = reg_delay0_ff[7:0];
    t2c_time_o           = reg_delay0_ff[15:8];
    inter_cs_time_o      = reg_delay1_ff[7:0];
    inter_frame_time_o   = reg_delay1_ff[15:8];
    spi_data_size_o      = reg_fmt_ff[7:4];
    rx_fifo_wr_disable_o = reg_fmt_ff[3];
    spi_shift_direct_o   = reg_fmt_ff[2];
    tx_water_mark_o      = reg_tx_mark_ff;
    rx_water_mark_o      = reg_rx_mark_ff;
end
// ----------------------------
//SPI Interrupt Request
// ----------------------------
assign irq_o = ((reg_intr_enable_ff[1] & reg_intr_pend_ff[1])
				|(reg_intr_enable_ff[0] & reg_intr_pend_ff[0]));



endmodule