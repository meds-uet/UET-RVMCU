// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Aman Murad, UET Lahore
// Date: 31.5.2024

#include <stdint.h>

#define GLOBAL_INTR_ENABLE         0x100
#define GPIO_IRQ_ENABLE            0x40800 //GPIO 18 bit and M_EXTERNAL 11 bit
#define GPSW_IRQ_ENABLE            0x80800 //GPIO 19 bit and M_EXTERNAL 11 bit

/** GPIO module prototype */
typedef struct __attribute__((packed,aligned(4))){
    uint32_t   data ;
	uint32_t    dir ;
	uint32_t     ip ;
	uint32_t     ie ;
	uint32_t int_lvl;
} Uetrv32_Gpio_Struct;

/** GPIO module prototype */
typedef struct __attribute__((packed,aligned(4))){
    uint32_t   led_data ;
	uint32_t   sw_data ;
	uint32_t   sw_ip ;
	uint32_t   sw_ie ;
	uint32_t   sw_int_lvl;
} Uetrv32_SWLED_Struct;

/** GPIOA module hardware access */
#define GPIOA_Module (*((volatile Uetrv32_Gpio_Struct*) (0x00240000UL))) //GPIOA ADDRESS
/** GPIOB module hardware access */
#define GPIOB_Module (*((volatile Uetrv32_Gpio_Struct*) (0x00250000UL))) //GPIOB ADDRESS
/** GPIOC module hardware access */
#define GPIOC_Module (*((volatile Uetrv32_Gpio_Struct*) (0x00260000UL))) //GPIOC ADDRESS
/** GPLED module hardware access */
#define GPLED_Module (*((volatile Uetrv32_SWLED_Struct*) (0x00270000UL))) //GPLED ADDRESS
/** GPSW module hardware access */
#define GPSW_Module (*((volatile Uetrv32_SWLED_Struct*) (0x00280000UL))) //GPSW ADDRESS


// Function prototypes
void Uetrv32_GpioA_SetDirection(uint32_t pin, uint32_t direction);
void Uetrv32_GpioB_SetDirection(uint32_t pin, uint32_t direction);
void Uetrv32_GpioC_SetDirection(uint32_t pin, uint32_t direction);
void Uetrv32_GpioA_WriteData(uint32_t pin, uint32_t value);
void Uetrv32_GpioB_WriteData(uint32_t pin, uint32_t value);
void Uetrv32_GpioC_WriteData(uint32_t pin, uint32_t value);
uint32_t Uetrv32_GpioA_ReadData(uint32_t pin);
uint32_t Uetrv32_GpioB_ReadData(uint32_t pin);
uint32_t Uetrv32_GpioC_ReadData(uint32_t pin);
void Uetrv32_GpioA_Interrupt_Enable(uint32_t pin, uint32_t level);
void Uetrv32_GpioA_Interrupt_Disable(uint32_t pin);
void Uetrv32_Write_LED(uint32_t pin, uint32_t data);
uint32_t Uetrv32_Read_LED(uint32_t pin);
uint32_t Uetrv32_Read_SW(uint32_t pin);
void Uetrv32_SW_Interrupt_Enable(uint32_t pin, uint32_t level);
void Uetrv32_SW_Interrupt_Disable(uint32_t pin);

