// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Aman Murad, UET Lahore
// Date: 31.10.2024

#include <inttypes.h>
#include "gpio.h"

uint32_t set_dir;
uint32_t in_data, out_data;
uint32_t intr_en, intr_lvl;
uint32_t sw_data, led_rdata, led_wdata;
uint32_t sw_intr_en, sw_intr_lvl;

/**********************************************************************
 * GPIO SW_LED module.
 **************************************************************************/


/****************** GPIO Write Data to LEDs **************************/
void Uetrv32_Write_LED(uint32_t pin, uint32_t data) {
    led_wdata = 1 << pin;
    if (data) {
        // Set the specific pin to high
        GPLED_Module.led_data = GPLED_Module.led_data | led_wdata;
    } else {
        // Set the specific pin to low
        GPLED_Module.led_data = GPLED_Module.led_data & ~led_wdata;
    }
}

/****************** GPIO Read Data from LEDs ************************/
uint32_t Uetrv32_Read_LED(uint32_t pin) {
    // Return the state of the specific pin
    led_rdata = 1 << pin;
    return GPLED_Module.led_data & led_rdata;
}

/****************** GPIO Read Data from switches ********************/
uint32_t Uetrv32_Read_SW(uint32_t pin) {
    // Return the state of the specific pin
    sw_data = 1 << pin;
    return GPSW_Module.sw_data & sw_data;
}

/********************** GPIO Interrupt Control *********************/

void Uetrv32_SW_Interrupt_Enable(uint32_t pin, uint32_t level){
    sw_intr_en  = 1 << pin;
    sw_intr_lvl = 1 << level;
    //GPIO Interupt enable for given pin
    GPSW_Module.sw_ie      = GPSW_Module.sw_ie | sw_intr_en;
    //GPIO Interupt Level Set for given pin
    if (level){
        GPSW_Module.sw_int_lvl = GPSW_Module.sw_int_lvl | sw_intr_lvl;
    } else {
        GPSW_Module.sw_int_lvl = GPSW_Module.sw_int_lvl & (~sw_intr_lvl);
    }
    

    //Inline assembly code block
    asm volatile (
        "csrrw x0, mstatus, %0;"     // Write new_mstatus to mstatus
        "csrrw x0, mie, %1"          // Write new_mstatus to mie
        :                            // No output operands
        : "r" (GLOBAL_INTR_ENABLE),         // Input operand: new value for mstatus
          "r" (GPSW_IRQ_ENABLE)           // Input operand: new value for mie
        :                            // No clobbered registers
    );
}

void Uetrv32_SW_Interrupt_Disable(uint32_t pin)
{
    sw_intr_en  = 1 << pin;
    //GPIO Interupt enable fir Pin0
    GPSW_Module.sw_ie      = GPSW_Module.sw_ie & (~sw_intr_en);
}


/**************************************************************************
 * GPIO module.
 **************************************************************************/


/********************** GPIO PA Set Direction to Pin **********************/

void Uetrv32_GpioA_SetDirection(uint32_t pin, uint32_t direction) {
    set_dir = 1 << pin;
    if (direction) {
        // Set direction of the specific pin to output
        GPIOA_Module.dir = GPIOA_Module.dir | set_dir;
    } else {
        // Set direction of the specific pin to input
        GPIOA_Module.dir = GPIOA_Module.dir & ~set_dir;
    }
}

/******************** GPIO PA Write Data to Pins *************************/

void Uetrv32_GpioA_WriteData(uint32_t pin, uint32_t data) {
    out_data = 1 << pin;
    if (data) {
        // Set the specific pin to high
        GPIOA_Module.data = GPIOA_Module.data | out_data;
    } else {
        // Set the specific pin to low
        GPIOA_Module.data = GPIOA_Module.data & ~out_data;
    }
}

/********************** GPIO PB Set Direction to Pin **********************/

void Uetrv32_GpioB_SetDirection(uint32_t pin, uint32_t direction) {
    set_dir = 1 << pin;
    if (direction) {
        // Set direction of the specific pin to output
        GPIOB_Module.dir = GPIOB_Module.dir | set_dir;
    } else {
        // Set direction of the specific pin to input
        GPIOB_Module.dir = GPIOB_Module.dir & ~set_dir;
    }
}

/******************** GPIO PB Write Data to Pins *************************/

void Uetrv32_GpioB_WriteData(uint32_t pin, uint32_t data) {
    out_data = 1 << pin;
    if (data) {
        // Set the specific pin to high
        GPIOB_Module.data = GPIOB_Module.data | out_data;
    } else {
        // Set the specific pin to low
        GPIOB_Module.data = GPIOB_Module.data & ~out_data;
    }
}


/********************** GPIO PC Set Direction to Pin **********************/

void Uetrv32_GpioC_SetDirection(uint32_t pin, uint32_t direction) {
    set_dir = 1 << pin;
    if (direction) {
        // Set direction of the specific pin to output
        GPIOC_Module.dir = GPIOC_Module.dir | set_dir;
    } else {
        // Set direction of the specific pin to input
        GPIOC_Module.dir = GPIOC_Module.dir & ~set_dir;
    }
}

/******************** GPIO PC Write Data to Pins *************************/

void Uetrv32_GpioC_WriteData(uint32_t pin, uint32_t data) {
    out_data = 1 << pin;
    if (data) {
        // Set the specific pin to high
        GPIOC_Module.data = GPIOC_Module.data | out_data;
    } else {
        // Set the specific pin to low
        GPIOC_Module.data = GPIOC_Module.data & ~out_data;
    }
}


/******************* GPIO Read Data from Pin PA *********************/
uint32_t Uetrv32_GpioA_ReadData(uint32_t pin) {
    // Return the state of the specific pin
    in_data = 1 << pin;
    return GPIOA_Module.data & in_data;
}

/******************* GPIO Read Data from Pin PB *********************/
uint32_t Uetrv32_GpioB_ReadData(uint32_t pin) {
    // Return the state of the specific pin
    in_data = 1 << pin;
    return GPIOB_Module.data & in_data;
}
/******************* GPIO Read Data from Pin PC *********************/
uint32_t Uetrv32_GpioC_ReadData(uint32_t pin) {
    // Return the state of the specific pin
    in_data = 1 << pin;
    return GPIOC_Module.data & in_data;
}


/********************** GPIO PA Interrupt Control *********************/

void Uetrv32_GpioA_Interrupt_Enable(uint32_t pin, uint32_t level){
    intr_en  = 1 << pin;
    intr_lvl = 1 << level;
    //GPIO Interupt enable for given pin
    GPIOA_Module.ie      = GPIOA_Module.ie | intr_en;
    //GPIO Interupt Level Set for given pin
    if (level){
        GPIOA_Module.int_lvl = GPIOA_Module.int_lvl | intr_lvl;
    } else {
        GPIOA_Module.int_lvl = GPIOA_Module.int_lvl & (~intr_lvl);
    }
    

    //Inline assembly code block
    asm volatile (
        "csrrw x0, mstatus, %0;"     // Write new_mstatus to mstatus
        "csrrw x0, mie, %1"          // Write new_mstatus to mie
        :                            // No output operands
        : "r" (GLOBAL_INTR_ENABLE),         // Input operand: new value for mstatus
          "r" (GPIO_IRQ_ENABLE)           // Input operand: new value for mie
        :                            // No clobbered registers
    );
}

void Uetrv32_GpioA_Interrupt_Disable(uint32_t pin)
{
    intr_en  = 1 << pin;
    //GPIO Interupt enable fir Pin0
    GPIOA_Module.ie      = GPIOB_Module.ie & (~intr_en);
}



