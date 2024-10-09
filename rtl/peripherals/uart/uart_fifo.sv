`timescale 1ns / 1ps
/*********************************************************************
 * Filename :    uart_fifo.sv
 * Date     :    02-05-2023
 * Updated  :    19-06-2023
 * Author   :    Shehzeen Malik
 
 * Description:  FIFO for UART Module
 *********************************************************************/

`ifndef VERILATOR
`include "../../defines/uart_defs.svh"
`else
`include "uart_defs.svh"
`endif

module uart_fifo (
    input  logic                                clk,
    input  logic                                rst_n,
    input  logic [7:0]                          data_in,
    output logic [7:0]                          data_out,
    //data_count in fifo
    output logic [UART_ADDR_FIFO:0]                  data_count,
    //read and write requests
    input  logic                                fifo_read,
    input  logic                                fifo_write,
    //flags
    output logic                                fifo_full,
    output logic                                fifo_empty
);


 //fifo
 logic [7:0]       fifo_buffer     [UART_DEPTH_FIFO-1:0];

 //fifo pointers for read and write operations
 logic [UART_ADDR_FIFO:0]       read_ptr , write_ptr; 


 //flags update
 assign fifo_empty = (data_count == 0);
 assign fifo_full  = (data_count == UART_DEPTH_FIFO[UART_ADDR_FIFO:0]);


 //fifo operation
 always_ff @(negedge rst_n or posedge clk)
 begin
    if (!rst_n) begin
        read_ptr   <= '0;
        write_ptr  <= '0;
        data_count <= '0;
        data_out   <= '0;
        for (int i = 0; i < UART_DEPTH_FIFO; i = i+1)
		    fifo_buffer[i] <= '0;
    end
    else begin
        //write operation
        if (fifo_write && !fifo_full) begin
            fifo_buffer [write_ptr] <= data_in;
            data_count              <= data_count + 1;
            write_ptr               <= write_ptr + 1;
        end

        if (write_ptr == UART_DEPTH_FIFO[UART_ADDR_FIFO:0])
                write_ptr <= '0;
        
        //read operation
        if (fifo_read && !fifo_empty) begin
            data_out   <= fifo_buffer [read_ptr];
            read_ptr   <= read_ptr + 1;
            data_count <= data_count - 1;
        end

        if (read_ptr == UART_DEPTH_FIFO[UART_ADDR_FIFO:0])
                read_ptr <= '0;
    end

 end
endmodule