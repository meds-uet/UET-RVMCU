// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: Header File for UART module. 
//
// Author: Shehzeen Malik, UET Lahore
// Date: 13.7.2022

`ifndef UART_DEFS
`define UART_DEFS

`include "pcore_interface_defs.svh"

localparam int unsigned UART_DEPTH_FIFO = 8;
localparam int unsigned UART_ADDR_FIFO  = $clog2 (UART_DEPTH_FIFO);

typedef enum logic [3:0] {
    UART_TX_DATA_R  = 4'h0,
    UART_RX_DATA_R  = 4'h1,
    UART_TX_CTRL_R  = 4'h2,
    UART_RX_CTRL_R  = 4'h3,
    UART_INT_EN_R   = 4'h4,
    UART_INT_PEND_R = 4'h5,
    UART_BAUD_R     = 4'h6
} type_uart_regs_e;


typedef enum logic [1:0] {
    UART_TX_IDLE  = 2'h0,
    UART_TX_START = 2'h1,
    UART_TX_DATA  = 2'h2
} type_uart_tx_states_e;


typedef enum logic [1:0] {
    UART_RX_IDLE  = 2'h0,
    UART_RX_START = 2'h1,
    UART_RX_DATA  = 2'h2,
    UART_RX_STOP  = 2'h3
} type_uart_rx_states_e;


`endif // UART_DEFS 

   

