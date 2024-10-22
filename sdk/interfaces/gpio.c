// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Aman Murad, UET Lahore
// Date: 31.5.2024

#include <inttypes.h>
#include "gpio.h"



/**********************************************************************//**
 * Initialize GPIO module.
 **************************************************************************/
uint32_t set_dir;
uint32_t in_data, out_data;
uint32_t intr_en, intr_lvl;
void Uetrv32_Gpio_Init(void){
}

/**********************************************************************//**
 * GPIO Set Direction to Pin. This is a blocking function.
 **************************************************************************/

void Uetrv32_Gpio_SetDirection(uint32_t pin, uint32_t direction) {
    set_dir = 1 << pin;
    if (direction) {
        // Set direction of the specific pin to output
        GPIO_Module.dir = GPIO_Module.dir | set_dir;
    } else {
        // Set direction of the specific pin to input
        GPIO_Module.dir = GPIO_Module.dir & ~set_dir;
    }
}

/**********************************************************************//**
 * GPIO Write Data to Pins. This is a blocking function.
 **************************************************************************/

void Uetrv32_Gpio_WriteData(uint32_t pin, uint32_t data) {
    out_data = 1 << pin;
    if (data) {
        // Set the specific pin to high
        GPIO_Module.data = GPIO_Module.data | out_data;
    } else {
        // Set the specific pin to low
        GPIO_Module.data = GPIO_Module.data & ~out_data;
    }
}

/**********************************************************************//**
 * GPIO Read Data from Pin. This is a blocking function.
 **************************************************************************/

uint32_t Uetrv32_Gpio_ReadData(uint32_t pin) {
    // Return the state of the specific pin
    in_data = 1 << pin;
    return GPIO_Module.data & in_data;
}

/**********************************************************************//**
 * GPIO Interrupt Control. This is a blocking function.
 **************************************************************************/

void Uetrv32_Gpio_Interrupt_Enable(uint32_t pin, uint32_t level){
    intr_en  = 1 << pin;
    intr_lvl = 1 << level;
    //GPIO Interupt enable for given pin
    GPIO_Module.ie      = GPIO_Module.ie | intr_en;
    //GPIO Interupt Level Set for given pin
    if (level){
        GPIO_Module.int_lvl = GPIO_Module.int_lvl | intr_lvl;
    } else {
        GPIO_Module.int_lvl = GPIO_Module.int_lvl & (~intr_lvl);
    }
    

    //Inline assembly code block
    asm volatile (
        "csrrw x0, mstatus, %0;"     // Write new_mstatus to mstatus
        "csrrw x0, mie, %1"          // Write new_mstatus to mie
        :                            // No output operands
        : "r" (NVIC_Enable),         // Input operand: new value for mstatus
          "r" (IRQ_Enable)           // Input operand: new value for mie
        :                            // No clobbered registers
    );
}

void Uetrv32_Gpio_Interrupt_Disable(uint32_t pin)
{
    intr_en  = 1 << pin;
    //GPIO Interupt enable fir Pin0
    GPIO_Module.ie      = GPIO_Module.ie & (~intr_en);
}



