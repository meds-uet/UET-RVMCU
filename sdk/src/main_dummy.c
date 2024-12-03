// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Aman Murad, UET Lahore
// Date: 31.5.2024

#include <stdint.h>
#include <stdlib.h>
#include "../interfaces/gpio.h"
#include "../interfaces/uart.h"
#include "../interfaces/spi.h"

const char message[10] = {'x','-','a','x','i','s','d','a','t','a'};

int main(void) {
  uint32_t var,rav;
  uint32_t count = 0;
  uint32_t wait = 0;
  uint32_t spy, spi_mid, spi_mtype, spi_cap, spi_did,spi_xaxis;

  Uetrv32_Write_LED (0,1);
  Uetrv32_Uart0_Init(UART_BAUD_DIV);
  Uetrv32_Write_LED (1,1);
  for(count = 0; count < 10; count++) 
    {
      Uetrv32_Uart0_Tx((message[count])); 
    }
    Uetrv32_Uart0_Tx(('\n')); 
    Uetrv32_Uart0_Tx(('\r'));
  Uetrv32_Spi0_CS_Mode(HOLD);
  
  Uetrv32_Spi0_Init(SPI_SCLK_DIV);

  SPI_0_Module.tx_data = 0xB;
  spy = Uetrv32_Spi0_Transfer(0x08);
  while(1) 
  {
    spy = Uetrv32_Spi0_Transfer(0xCC);
    spi_xaxis = Uetrv32_Spi0_Transfer(0xCC);
    Uetrv32_Uart0_Tx((spy+ 0x30)); 
    Uetrv32_Uart0_Tx((spi_xaxis+ 0x30));
    Uetrv32_Uart0_Tx(('\n')); 
    Uetrv32_Uart0_Tx(('\r'));
   }

}