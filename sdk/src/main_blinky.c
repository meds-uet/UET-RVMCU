// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Aman Murad, UET Lahore
// Date: 01.10.2024

#include <stdint.h>
#include <stdlib.h>
#include "../interfaces/gpio.h"
#include "../interfaces/uart.h"
#include "../interfaces/spi.h"


int main(void) {

  uint32_t led_data, sw_data[16];
  uint32_t i,j,k;
  uint32_t gpio_val0, gpio_val1, gpio_val2;

  Uetrv32_Write_LED (0,1);

  led_data = Uetrv32_Read_LED(0);

  Uetrv32_Write_LED(5,1);

  Uetrv32_Write_LED(8,1);

  // Set pin 0 as output
    Uetrv32_Gpio_SetDirection(0, 1);

    // Set pin 1 as output
    Uetrv32_Gpio_SetDirection(1,1);

    // Set pin 2 as input
    Uetrv32_Gpio_SetDirection(2,0);

    // Set pin 0 to high
    Uetrv32_Gpio_WriteData(0,1);

    // Set pin 1 to low
    Uetrv32_Gpio_WriteData(1,0);

    // Read the gpio_val of pin 0
    gpio_val0 = Uetrv32_Gpio_ReadData(0);

    // Read the gpio_val of pin 1
    gpio_val1 = Uetrv32_Gpio_ReadData(1);

    //Initialize GPIO Interrupt
   Uetrv32_Gpio_Interrupt_Enable(2,0);

   while (1){
    for (i=0; i<16; i++)
      sw_data[i] = Uetrv32_Read_SW(i);
    gpio_val2 = Uetrv32_Gpio_ReadData(2);

    if (GPIO_Module.ip == 4)
        Uetrv32_Write_LED(15,1);
    else
        Uetrv32_Write_LED(15,0);
    
    for (j=0; j<100000; j++);
    Uetrv32_Gpio_WriteData(0,1);
    Uetrv32_Gpio_WriteData(1,0);
    Uetrv32_Write_LED(10,1);
    Uetrv32_Write_LED(2,0);

    for (k=0; k<100000; k++);
    Uetrv32_Gpio_WriteData(0,0);
    Uetrv32_Gpio_WriteData(1,1);
    Uetrv32_Write_LED(10,0);
    Uetrv32_Write_LED(2,1);
   }

}