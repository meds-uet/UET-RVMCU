// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Aman Murad, UET Lahore
// Date: 31.5.2024

#include <stdint.h>

#define GPIO_Int      0x01
#define GPIO_Int_Lvl  0x01

/** GPIO module prototype */
typedef struct __attribute__((packed,aligned(4))){
    uint32_t   data ;
	uint32_t    dir ;
	uint32_t     ip ;
	uint32_t     ie ;
	uint32_t int_lvl;
} Uetrv32_Gpio_Struct;

/** GPIO module hardware access */
#define GPIO_Module (*((volatile Uetrv32_Gpio_Struct*) (0x00000UL)))

// Function prototypes
void Uetrv32_Gpio_Init(void);
void Uetrv32_Gpio_SetDirection(uint32_t pin, uint32_t direction);
void Uetrv32_Gpio_WriteData(uint32_t pin, uint32_t value);
uint32_t Uetrv32_Gpio_ReadData(uint32_t pin);
// void Uetrv32_Spi_Cs_Mode(uint32_t mode);


