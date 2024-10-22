// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description: External LED on GPIO A pin 0 blinking example
//
// Author: Aman Murad, UET Lahore
// Date: 31.5.2024
// Modified: 07.10.2024

#include <stdint.h>
#include <stdlib.h>
#include "../Interfaces/gpio.h"

int main(void) {
    
    int i;
    uint32_t state0,state1;
    // Set pin 0 as output
    Uetrv32_Gpio_SetDirection(0x01, 1);

    while (1)
    {
        // Set pin 0 to high
        Uetrv32_Gpio_WriteData(0x01, 1);
        //delay
        for (i=0; i<100000; i++);
        // Read the state of pin 0
        state0 = Uetrv32_Gpio_ReadData(0x01);
        // Set pin 0 to low
        Uetrv32_Gpio_WriteData(0x01, 0);
        //delay
        for (i=0; i<100000; i++);
        // Read the state of pin 0
        state1 = Uetrv32_Gpio_ReadData(0x01);
    }
}
