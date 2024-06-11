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
#include "../Interfaces/gpio.h"

int main(void) {
    // Initialize GPIO
    Uetrv32_Gpio_Init();

    // Set pin 0 as output
    Uetrv32_Gpio_SetDirection(0x01, 1);

    // Set pin 1 as output
    Uetrv32_Gpio_SetDirection(0x02, 1);

    // Set pin 2 as input
    Uetrv32_Gpio_SetDirection(0x03, 0);

    // Set pin 0 to high
    Uetrv32_Gpio_WriteData(0x01, 1);

    // Set pin 1 to low
    Uetrv32_Gpio_WriteData(0x01, 0);

    // Read the state of pin 0
    uint32_t state0 = Uetrv32_Gpio_ReadData(0x01);

    // Read the state of pin 1
    uint32_t state1 = Uetrv32_Gpio_ReadData(0x02);

    //Initialize GPIO Interrupt
    Uetrv32_Gpio_Interrupt();
  
}