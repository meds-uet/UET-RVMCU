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


void Delay(unsigned int delay)
{
  uint32_t i;
  for (i = 0; i < delay; i++);
}

void All_LEDs_Off()
{
  for (int i = 0; i < 16; i++)
  {
    Uetrv32_Write_LED(i, 0);
  }
}

void Running_Lights()
{
  for (int i = 0; i < 16; i++)
  {
    Uetrv32_Write_LED(i, 1);
    Delay(100000);
    Uetrv32_Write_LED(i, 0);
  }
}

void Alternating_LEDs()
{
  for (int i = 0; i < 16; i += 2)
  {
    Uetrv32_Write_LED(i, 1);
    Uetrv32_Write_LED(i + 1, 0);
  }
  Delay(1000000);
  for (int i = 0; i < 16; i += 2)
  {
    Uetrv32_Write_LED(i, 0);
    Uetrv32_Write_LED(i + 1, 1);
  }
  Delay(1000000);
}

void Bouncing_Light()
{
  int direction = 1; // 1 for forward, -1 for backward
  int position = 0;

  while (1)
  {
    All_LEDs_Off();
    Uetrv32_Write_LED(position, 1);
    Delay(100000);
    position += direction;

    if (position == 15 || position == 0)
    {
      direction = -direction; // Reverse direction at the edges
    }
  }
}


void Knight_Rider()
{
  for (int i = 0; i < 16; i++)
  {
    Uetrv32_Write_LED(i, 1);
    if (i > 0) Uetrv32_Write_LED(i - 1, 0); // Turn off previous LED
    Delay(100000);
  }
  for (int i = 14; i >= 0; i--)
  {
    Uetrv32_Write_LED(i, 1);
    if (i < 15) Uetrv32_Write_LED(i + 1, 0); // Turn off next LED
    Delay(100000);
  }
}

void Wave_Pattern()
{
  for (int i = 0; i < 16; i += 4)
  {
    for (int j = 0; j < 16; j++)
    {
      Uetrv32_Write_LED(j, (j % 4 == i % 4) ? 1 : 0);
    }
    Delay(300000);
  }
}

void Blinking_Center_Out()
{
  for (int i = 0; i < 8; i++)
  {
    All_LEDs_Off();
    Uetrv32_Write_LED(7 - i, 1);
    Uetrv32_Write_LED(8 + i, 1);
    Delay(200000);
  }
}

void Ping_Pong_Pattern()
{
  for (int i = 0; i < 8; i++)
  {
    Uetrv32_Write_LED(i, 1);
    Uetrv32_Write_LED(15 - i, 1);
    Delay(150000);
    Uetrv32_Write_LED(i, 0);
    Uetrv32_Write_LED(15 - i, 0);
  }
}

void Binary_Counter()
{
  for (int count = 0; count < 65536; count++) // 16-bit counter
  {
    for (int i = 0; i < 16; i++)
    {
      Uetrv32_Write_LED(i, (count >> i) & 1); // Light up LED based on bit value
    }
    Delay(300000);
  }
}

int main(void)
{
  while (1)
  {
    Running_Lights();
    Delay(1000000);

    Alternating_LEDs();
    Delay(1000000);

    Knight_Rider();
    Delay(1000000);

    Wave_Pattern();
    Delay(1000000);

    Blinking_Center_Out();
    Delay(1000000);

    Ping_Pong_Pattern();
    Delay(1000000);

    Binary_Counter();
    Delay(1000000);

    Bouncing_Light(); // Infinite bouncing, comment out to stop
  }

  return 0;
}

