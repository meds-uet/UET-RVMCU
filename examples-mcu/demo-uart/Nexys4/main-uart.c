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

const char message[16] = {'U','E','T','-','R','V','M','C','U',' ','d','e','m','o','\n', '\r'};

int main(void) {
  uint32_t var,rav;
  uint32_t count = 0;

  Uetrv32_Write_LED (0,1);
  Uetrv32_Uart0_Init(UART_BAUD_DIV);
  Uetrv32_Write_LED (1,1);
    
  while(1) 
  {
    for(count = 0; count < 16; count++) 
    {
      Uetrv32_Uart0_Tx((message[count])); 
    }
    Uetrv32_Uart0_Tx(('\n')); 
    Uetrv32_Uart0_Tx(('\r')); 

    Uetrv32_Write_LED(5,1);

    var = Uetrv32_Uart0_Rx();
    Uetrv32_Uart0_Tx(var);
    Uetrv32_Write_LED(7,1);
    rav = Uetrv32_Uart0_Rx();
    Uetrv32_Uart0_Tx(rav);
    
   }

}