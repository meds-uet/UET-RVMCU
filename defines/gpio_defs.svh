`ifndef GPIO_DEFS
`define GPIO_DEFS

`include "pcore_config_defs.svh"

typedef enum logic [7:0] {
    GPIO_DATA_R    = 8'h00;
    GPIO_DIR_R     = 8'h04;
    GPIO_IP_R      = 8'h08;
    GPIO_IE_R      = 8'h0C;
    GPIO_AFSEL_R   = 8'h10;
    GPIO_PCTL_R    = 8'h14;
    GPIO_INT_LVL_R = 8'h18;
} type_gpio_regs_e;


`endif