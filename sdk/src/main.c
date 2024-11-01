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

const char message[10] = {'p','a','k','i','s','t','a','n','\n', '\r'};

int main(void) {
  uint32_t var,rav;
  uint32_t count = 0;

  Uetrv32_Write_LED (0,1);
  Uetrv32_Uart0_Init(UART_BAUD_DIV);
  Uetrv32_Write_LED (1,1);
  Uetrv32_Uart1_Init(UART_BAUD_DIV);
  Uetrv32_Write_LED (2,1);
    
  while(1) 
  {
    for(count = 0; count < 5; count++) 
    {
      Uetrv32_Uart0_Tx((message[count])); 
    }
    Uetrv32_Uart0_Tx(('\n')); 
    Uetrv32_Uart0_Tx(('\r'));

    Uetrv32_Write_LED(3,1);

    for(count = 5; count < 10; count++) 
    {
      Uetrv32_Uart1_Tx((message[count])); 
    }
    Uetrv32_Uart1_Tx(('\n')); 
    Uetrv32_Uart1_Tx(('\r')); 

    Uetrv32_Write_LED(4,1);

    var = Uetrv32_Uart0_Rx();
    Uetrv32_Uart0_Tx(var);

    Uetrv32_Write_LED(7,1);
    
    rav = Uetrv32_Uart0_Rx();
    Uetrv32_Uart0_Tx(rav);
    
    Uetrv32_Write_LED(5,1);
   }

}