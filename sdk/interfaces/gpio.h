// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Aman Murad, UET Lahore
// Date: 31.5.2024

#include <stdint.h>

#define GPIO_Int_pin0       0x01
#define GPIO_Int_Lvl_pin0   0x01
#define NVIC_Enable         0x100
#define IRQ_Enable          0x40800 //GPIO 11 bit and M_EXTERNAL 18 bit

/** GPIO module prototype */
typedef struct __attribute__((packed,aligned(4))){
    uint32_t   data ;
	uint32_t    dir ;
	uint32_t     ip ;
	uint32_t     ie ;
	uint32_t int_lvl;
} Uetrv32_Gpio_Struct;

/** GPIOA module hardware access */
#define GPIO_Module (*((volatile Uetrv32_Gpio_Struct*) (0xA0000000UL))) //GPIOA ADDRESS
/** GPIOB module hardware access */
// #define GPIO_Module (*((volatile Uetrv32_Gpio_Struct*) (0xA4000000UL))) //GPIOB ADDRESS
/** GPIOC module hardware access */
// #define GPIO_Module (*((volatile Uetrv32_Gpio_Struct*) (0xA8000000UL))) //GPIOC ADDRESS
/** GPLED module hardware access */
// #define GPIO_Module (*((volatile Uetrv32_Gpio_Struct*) (0xB0000000UL))) //GPLED ADDRESS
/** GPSW module hardware access */
// #define GPIO_Module (*((volatile Uetrv32_Gpio_Struct*) (0xB4000000UL))) //GPSW ADDRESS


// Function prototypes
void Uetrv32_Gpio_Init(void);
void Uetrv32_Gpio_SetDirection(uint32_t pin, uint32_t direction);
void Uetrv32_Gpio_WriteData(uint32_t pin, uint32_t value);
uint32_t Uetrv32_Gpio_ReadData(uint32_t pin);
void Uetrv32_Gpio_Interrupt(void);

