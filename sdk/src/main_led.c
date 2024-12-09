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

void Delay(unsigned int delay)
{
  uint32_t i;
  for (i=0; i<delay;i++);
}


int main(void) {

   while (1){
  Uetrv32_Write_LED (0,1);
  Uetrv32_Write_LED (1,1);
  Uetrv32_Write_LED (2,1);
  Uetrv32_Write_LED (3,1);
  Uetrv32_Write_LED (4,1);
  Uetrv32_Write_LED (5,1);
  Uetrv32_Write_LED (6,1);
  Uetrv32_Write_LED (7,1);
  Uetrv32_Write_LED (8,1);
  Uetrv32_Write_LED (9,1);
  Uetrv32_Write_LED (10,1);
  Uetrv32_Write_LED (11,1);
  Uetrv32_Write_LED (12,1);
  Uetrv32_Write_LED (13,1);
  Uetrv32_Write_LED (14,1);
  Uetrv32_Write_LED (15,1);

  Delay(10000);

  Uetrv32_Write_LED (0,0);
  Uetrv32_Write_LED (1,0);
  Uetrv32_Write_LED (2,0);
  Uetrv32_Write_LED (3,0);
  Uetrv32_Write_LED (4,0);
  Uetrv32_Write_LED (5,0);
  Uetrv32_Write_LED (6,0);
  Uetrv32_Write_LED (7,0);
  Uetrv32_Write_LED (8,0);
  Uetrv32_Write_LED (9,0);
  Uetrv32_Write_LED (10,0);
  Uetrv32_Write_LED (11,0);
  Uetrv32_Write_LED (12,0);
  Uetrv32_Write_LED (13,0);
  Uetrv32_Write_LED (14,0);
  Uetrv32_Write_LED (15,0);

  Delay(10000);



  }

}