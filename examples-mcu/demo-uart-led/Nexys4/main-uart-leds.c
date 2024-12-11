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
  uint32_t var1,var2,rav1,rav2;
  uint32_t val1,val2,val3;
  uint32_t val4,val5,val6;
 
  uint32_t led_no;
  uint32_t count = 0;
  char rec_str[4];

  Uetrv32_Write_LED (0,1);
  Uetrv32_Uart0_Init(UART_BAUD_DIV);
  Uetrv32_Write_LED (1,1);
   for(count = 0; count < 16; count++) 
    {
      Uetrv32_Uart0_Tx((message[count])); 
    }
  while(1) 
  {
   
    Uetrv32_Uart0_Tx_String("Enter the number (00-15) of LED you want to turn on");
    Uetrv32_Uart0_Tx(('\n')); 
    Uetrv32_Uart0_Tx(('\r'));

    //Receiving LED Number to Turn On
    var1 = Uetrv32_Uart0_Rx();
    var2 = Uetrv32_Uart0_Rx();
    Uetrv32_Uart0_Tx(var1);
    Uetrv32_Uart0_Tx(var2);
    Uetrv32_Uart0_Tx(('\n')); 
    Uetrv32_Uart0_Tx(('\r'));
    val1 = (var1 - 48); //Converting from ascii to decimal
    val2 = (var2 - 48); //Converting from ascii to decimal
    val3 = (val1*10) + val2;
    //Using received value to turn on LED
    Uetrv32_Write_LED(val3,1);

    Uetrv32_Uart0_Tx_String("Enter any number to turn Off LED\n\r");

    //Receiving LED Number to Turn off
    rav1 = Uetrv32_Uart0_Rx();
    rav2 = Uetrv32_Uart0_Rx();
    val4 = (rav1 - 48) & 0xFF; //Converting from ascii to decimal
    val5 = (rav2 - 48)& 0xFF; //Converting from ascii to decimal
    val6 = (val4 *10) + val5;
    Uetrv32_Uart0_Tx(rav1);
    Uetrv32_Uart0_Tx(rav2);
    Uetrv32_Uart0_Tx(('\n')); 
    Uetrv32_Uart0_Tx(('\r'));
    //Using received value to turn off LED
    Uetrv32_Write_LED(val6,0);
    
   }

}