/*********************************************************************
 * Filename   :  uart_top.sv
 * Date       :  13-05-2023
 * Updated    :  25-06-2023
 * Author     :  Shehzeen Malik
 * Adopted from uart.scala by Dr. Muhammad Tahir
 
 * Description:  Uart top module with configurable baud rate using
 *               buad register and 8*8 FIFO according to UART SiFive.
 *********************************************************************/

`ifndef VERILATOR
`include "../../defines/uart_defs.svh"
`else
`include "uart_defs.svh"
`endif


module uart ( 
    input  logic                                    rst_n,                    // reset
    input  logic                                    clk,                      // clock

    // Dbus to UART module interface
    input  wire type_dbus2peri_s                    dbus2uart_i,              
    output type_peri2dbus_s                         uart2dbus_o,              

    // Selection signal from address decoder of dbus interconnect 
    input  logic                                    uart_sel_i,
	
    // Interrupt signal from Uart
    output logic                                    uart_irq_o,
     
    // Rx Tx signals from Uart 
    input  logic                                    uart_rxd_i,
    output logic                                    uart_txd_o
);

//Internal connectivity signals
logic                               uart_rx_fifo_empty;
logic                               uart_tx_fifo_full;
logic [7:0]                         uart_rx_fifo_data;
logic                               uart_rx_fifo_read;
logic                               uart_tx_fifo_write;
logic [7:0]                         uart_tx_data;
logic                               uart_rx_fifo_mark;
logic                               uart_tx_fifo_mark;
logic [2:0]                         uart_rx_watermark;
logic [2:0]                         uart_tx_watermark;
logic                               uart_tx_en;
logic                               uart_rx_en;
logic                               uart_two_stop_bits;
logic [15:0]                        uart_baud_rate;


uart_regs uart_regs_module ( 
    .rst_n           (rst_n),
    .clk             (clk),          
    .uart_sel_i      (uart_sel_i),
    .irq_o           (uart_irq_o),
    .dbus2uart_i     (dbus2uart_i),
    .uart2dbus_o     (uart2dbus_o),
    .rx_fifo_empty_i (uart_rx_fifo_empty),
    .tx_fifo_full_i  (uart_tx_fifo_full),
    .rx_fifo_data_i  (uart_rx_fifo_data),
    .rx_fifo_read_o  (uart_rx_fifo_read),
    .tx_fifo_write_o (uart_tx_fifo_write),
    .tx_data_i       (uart_tx_data),
    .rx_fifo_mark_i  (uart_rx_fifo_mark),
    .tx_fifo_mark_i  (uart_tx_fifo_mark),
    .rx_watermark_o  (uart_rx_watermark),
    .tx_watermark_o  (uart_tx_watermark),
    .tx_en_o         (uart_tx_en),
    .rx_en_o         (uart_rx_en),
    .two_stop_bits_o (uart_two_stop_bits),
    .baud_rate_o     (uart_baud_rate)
);

uart_tx uart_transmitter_module(
    .rst_n           (rst_n),      
    .clk             (clk),           	
    .txd_pin_o       (uart_txd_o),
    .tx_fifo_full_o  (uart_tx_fifo_full),
    .tx_fifo_write_i (uart_tx_fifo_write),
    .tx_data_i       (uart_tx_data),
    .tx_fifo_mark_o  (uart_tx_fifo_mark),
    .tx_watermark_i  (uart_tx_watermark),
    .tx_en_i         (uart_tx_en),
    .two_stop_bits_i (uart_two_stop_bits),
    .baud_rate_i     (uart_baud_rate)
);

uart_rx uart_receiver_module(
    .rst_n           (rst_n),
    .clk             (clk),
    .rx_pin_i        (uart_rxd_i),
    .rx_fifo_read_i  (uart_rx_fifo_read),
    .rx_fifo_empty_o (uart_rx_fifo_empty),
    .rx_fifo_data_o  (uart_rx_fifo_data),
    .rx_fifo_mark_o  (uart_rx_fifo_mark),
    .rx_watermark_i  (uart_rx_watermark),
    .rx_en_i         (uart_rx_en),
    .baud_rate_i     (uart_baud_rate)
);

endmodule