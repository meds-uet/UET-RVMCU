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

int main(void)
{
  int a,b,c;
  a=12;
  b=124;
  c=a+b;

  return 0;
}

