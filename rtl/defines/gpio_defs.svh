// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Shehzeen Malik, MEDS UET Lahore
// Date: 01.04.2024

`ifndef GPIO_DEFS
`define GPIO_DEFS

`include "pcore_interface_defs.svh"

typedef enum logic [7:0] {
    GPIO_DATA_R    = 8'h00,
    GPIO_DIR_R     = 8'h04,
    GPIO_IP_R      = 8'h08,
    GPIO_IE_R      = 8'h0C,
    GPIO_INT_LVL_R = 8'h10
} type_gpio_regs_e;

typedef enum logic [7:0] {
    GPLED_DATA_R   = 8'h00,
    GPSW_DATA_R    = 8'h04,
    GPSW_IP_R      = 8'h08,
    GPSW_IE_R      = 8'h0C,
    GPSW_INT_LVL_R = 8'h10
} type_gpsl_regs_e;


`endif
