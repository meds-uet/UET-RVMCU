// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  this code blinks onboard led of the fpga and reads data from the
//               on-board switches.
//
// Author: Aman Murad, UET Lahore
// Date: 01.10.2024

#include <stdint.h>
#include <stdlib.h>
#include "../interfaces/gpio.h"
#include "../interfaces/uart.h"
#include "../interfaces/spi.h"

// Delay function (adjust the value for desired delay time)
void Delay(unsigned int delay) {
    uint32_t i;
    for (i = 0; i < delay; i++);
}


uint8_t charMap[8] = {
    0b10001001, // H
    0b10000110, // E
    0b11000111, // L
    0b11000111, // L
    0b11000000, // O
    0b11111111, // Blank (for unused displays)
    0b11111111, // Blank
    0b11111111  // Blank
};

int main(void) {

    uint32_t led_data, sw_data[16];
    uint32_t i,j,k;
    uint32_t displayCounter = 0; // Counter for seven-segment display
    int ledState = 1;
    uint8_t value;
    int display, segment, selector;

    // Initialize GPIO pins in Port B (8-15) as output for segments a-g and dot
    for (i = 0; i <= 7; i++) {
        Uetrv32_GpioB_SetDirection(i, 1);
    }

    // Initialize GPIO pins in Port C (16-23) as output for segment selectors
    for (i = 0; i <= 7; i++) {
        Uetrv32_GpioC_SetDirection(i, 1);
    }

    for (i = 0; i <= 15; i++) {
        Uetrv32_Write_LED(i, 1); // Ensure all LEDs are initially on
    }

    // Ensure all GPIO pins in Port B and Port C are initially high (active-low logic)
    for (i = 0; i <= 7; i++) {
        Uetrv32_GpioB_WriteData(i, 1); // Set pins 0-7 in Port B high
        Uetrv32_GpioC_WriteData(i, 1); // Set pins 0-7 in Port C high
    }



    while (1){
        for (i=0; i<16; i++){
            sw_data[i] = Uetrv32_Read_SW(i);
	        Uetrv32_Write_LED(i,sw_data[i]);
	    }
        // Handle seven-segment display refresh
        for (display = 0; display < 8; display++) {
            // Set segment data (a-g and dot) in Port B
            for (segment = 0; segment < 8; segment++) {
                value = (charMap[display] >> segment) & 1;
                Uetrv32_GpioB_WriteData(segment, value);
            }

            // Activate the current segment selector (active-low) in Port C
            for (selector = 0; selector < 8; selector++) {
                Uetrv32_GpioC_WriteData(selector, 1); // Deactivate all selectors
            }
            Uetrv32_GpioC_WriteData(display, 0); // Activate the current selector

            // Small delay to ensure visibility for the current digit
            Delay(2000);
        }

   }

}