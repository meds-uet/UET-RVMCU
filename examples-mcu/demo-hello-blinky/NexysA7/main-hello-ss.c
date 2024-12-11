// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Umer Shahid, UET Lahore
// Date: 09.12.2024

#include <stdint.h>
#include <stdlib.h>
#include "../interfaces/gpio.h"
#include "../interfaces/uart.h"
#include "../interfaces/spi.h"

// Adjust this value for desired LED toggle rate
#define LED_TOGGLE_RATE 1000000

// Adjust this value for display refresh rate
#define DISPLAY_REFRESH_RATE 1000

// Delay function (adjust the value for desired delay time)
void Delay(unsigned int delay) {
    uint32_t i;
    for (i = 0; i < delay; i++);
}

// Segment data for "HELLO" (assuming common anode logic with active-low)
uint8_t charMap[8] = {
    0b10000011, // H
    0b11101011, // E
    0b11000111, // L
    0b11000111, // L
    0b10111111, // O
    0b11111111, // Blank (for unused displays)
    0b11111111, // Blank
    0b11111111  // Blank
};

int main(void) {
    int i;
    uint32_t ledCounter = 0;     // Counter for LED toggling
    uint32_t displayCounter = 0; // Counter for seven-segment display
    static uint8_t ledState = 0;
    int display, segment, selector;

    // Initialize GPIO pins in Port B (8-15) as output for segments a-g and dot
    for (i = 0; i <= 7; i++) {
        Uetrv32_GpioB_SetDirection(i, 1);
    }

    // Initialize GPIO pins in Port C (16-23) as output for segment selectors
    for (i = 0; i <= 7; i++) {
        Uetrv32_GpioC_SetDirection(i, 1);
    }

    // Initialize LEDs as outputs (assuming a function for this exists)
    for (i = 0; i <= 15; i++) {
        Uetrv32_Write_LED(i, 0); // Ensure all LEDs are initially off
    }

    // Ensure all GPIO pins in Port B and Port C are initially high (active-low logic)
    for (i = 0; i <= 7; i++) {
        Uetrv32_GpioB_WriteData(i, 1); // Set pins 0-7 in Port B high
        Uetrv32_GpioC_WriteData(i, 1); // Set pins 0-7 in Port C high
    }


    while (1) {
        // Handle LED toggling at a slower rate
        if (ledCounter >= LED_TOGGLE_RATE) { 
            for (i = 0; i <= 15; i++) {
                Uetrv32_Write_LED(i, ledState); // Toggle LEDs
            }
            ledCounter = 0; // Reset LED counter
        }
        ledCounter++;

        // Handle seven-segment display refresh
        if (displayCounter >= DISPLAY_REFRESH_RATE) { 
            for (display = 0; display < 8; display++) {
                // Set segment data (a-g and dot) in Port B
                for (segment = 0; segment < 8; segment++) {
                    uint8_t value = (charMap[display] >> segment) & 1;
                    Uetrv32_GpioB_WriteData(segment, value);
                }

                // Activate the current segment selector (active-low) in Port C
                for (selector = 0; selector < 8; selector++) {
                    Uetrv32_GpioC_WriteData(selector, 1); // Deactivate all selectors
                }
                Uetrv32_GpioC_WriteData(display, 0); // Activate the current selector

                // Small delay to ensure visibility for the current digit
                Delay(5000);
            }
            displayCounter = 0; // Reset display counter
        }
        displayCounter++;
    }

    return 0;
}
