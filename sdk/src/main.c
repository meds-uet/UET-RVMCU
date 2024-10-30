// Copyright 2023 University of Engineering and Technology Lahore.
// Licensed under the Apache License, Version 2.0, see LICENSE file for details.
// SPDX-License-Identifier: Apache-2.0
//
// Description:  
//
// Author: Aman Murad, UET Lahore
// Date: 31.5.2024

#include <stdint.h>
#include <stdlib.h>
#include "../interfaces/gpio.h"
#include "../interfaces/uart.h"
#include "../interfaces/spi.h"

const char message[10] = {'p','a','k','i','s','t','a','n','\n', '\r'};
char dst[8] = {0,0,0,0,0,0,0,0};

int main(void) {
    uint32_t count = 0;
    uint32_t wait = 0;
    uint32_t spy, spi_mid, spi_mtype, spi_cap, spi_did,spi_xaxis;
    uint32_t byte = 0;
    uint32_t var,rav;

    Uetrv32_Uart_Init(UART_BAUD_DIV);
    
    for(count = 0; count < 10; count++) {
    Uetrv32_Uart_Tx((message[count])); }

    Uetrv32_Spi_Init(SPI_SCLK_DIV);

////////////////////////////////////////////////////////////////////////////////////

    // Initialize GPIO
   /* Uetrv32_Gpio_Init();

    // Set pin 0 as output
    Uetrv32_Gpio_SetDirection(0, 1);

    // Set pin 1 as output
    Uetrv32_Gpio_SetDirection(1, 1);

    // Set pin 2 as input
    Uetrv32_Gpio_SetDirection(2, 0);*/

    // Set pin 0 to high
    Uetrv32_Gpio_WriteData(0, 1);

    // Set pin 1 to low
    Uetrv32_Gpio_WriteData(1, 0);

    // Read the state of pin 0
    uint32_t state0 = Uetrv32_Gpio_ReadData(0);

    // Read the state of pin 1
    uint32_t state1 = Uetrv32_Gpio_ReadData(1);

    //Initialize GPIO Interrupt
   // Uetrv32_Gpio_Interrupt_Enable(3,0);

////////////////////////////////////////////////////////////////////////////////////

  Uetrv32_Spi_CS_CTRL(CS_ON);
  spy = Uetrv32_Spi_Transfer(0x05);
  spy = Uetrv32_Spi_Transfer(0xCC);
  Uetrv32_Spi_CS_CTRL(CS_OFF);
  Uetrv32_Uart_Tx((spy + 0x45));

  //for mems
  spy =  Uetrv32_Spi_Transfer(0x0B);
  spy = Uetrv32_Spi_Transfer(0x01);
  spi_did =Uetrv32_Spi_Transfer(0xCC);
    Uetrv32_Uart_Tx((spi_did+ 0x7));
    for(wait = 0; wait < 400; wait++ );
    spy =    Uetrv32_Spi_Transfer(0x0B);
    spy =    Uetrv32_Spi_Transfer(0x00);
    spi_mid =Uetrv32_Spi_Transfer(0xCC);
    Uetrv32_Uart_Tx((spi_mid- 0x40)); 
  for(wait = 0; wait < 400; wait++ );
    for(count = 0; count < 10; count++) {
    Uetrv32_Uart_Tx((message[count])); }

  while(1) { 
    for(count = 0; count < 10; count++) {
    Uetrv32_Uart_Tx((message[count])); }

        Uetrv32_Uart_Tx(('\n')); 
    Uetrv32_Uart_Tx(('\r')); 

    var = Uetrv32_Uart_Rx();
    Uetrv32_Uart_Tx(var);
    rav = Uetrv32_Uart_Rx();
    Uetrv32_Uart_Tx(rav);

////////////////////////////////////////////////////////////////////////////////////
  
  //   Uetrv32_Spi_Cs_Mode(HOLD);
     //Uetrv32_Spi_CS_CTRL(CS_ON);
  
  //for mems
  spy =  Uetrv32_Spi_Transfer(0x0B);
  spy = Uetrv32_Spi_Transfer(0x08);
  spi_xaxis = Uetrv32_Spi_Transfer(0xCC);

    Uetrv32_Uart_Tx((spi_xaxis+ 0x30)); 
  for(wait = 0; wait < 400; wait++ );
    for(count = 0; count < 10; count++) {
    Uetrv32_Uart_Tx((message[count])); }
  }
}

////////////////////////////////////////////////////////////////////////////////////

   //for flash
//  Uetrv32_Spi_Transfer(0x9F);
//   Uetrv32_Spi_Transfer(0x12);
//   Uetrv32_Spi_Transfer(0xAA);
//   Uetrv32_Spi_Transfer(0xCC);
//     spy = Uetrv32_Spi_Rx();
//   spi_mid = Uetrv32_Spi_Rx();
//   spi_mtype = Uetrv32_Spi_Rx();
//   spi_cap = Uetrv32_Spi_Rx();
//   //Uetrv32_Spi_CS_CTRL(CS_OFF);
//   for(wait = 0; wait < 400; wait++ );
// for(wait = 0; wait < 400; wait++ );
//  for(count = 0; count < 10; count++) {
//     Uetrv32_Uart_Tx((message[count])); } 
//   Uetrv32_Uart_Tx((spi_mid+ 0x06));
//   Uetrv32_Uart_Tx((spi_mtype));
//   Uetrv32_Uart_Tx((spi_cap+ 0xE));
//   Uetrv32_Spi_Cs_Mode(HOLD);
//   //Uetrv32_Spi_CS_CTRL(CS_ON);
//   Uetrv32_Spi_Transfer(0x90);
//   Uetrv32_Spi_Transfer(0x00);
//   Uetrv32_Spi_Transfer(0x00);
//   Uetrv32_Spi_Transfer(0x00);
//   Uetrv32_Spi_Transfer(0xAA);
//   Uetrv32_Spi_Transfer(0xCC);
//   spy = Uetrv32_Spi_Rx();
//   spy = Uetrv32_Spi_Rx();
//   spy = Uetrv32_Spi_Rx();
//   spy = Uetrv32_Spi_Rx();
//   spi_mid= Uetrv32_Spi_Rx();
//   spi_did = Uetrv32_Spi_Rx();
//   for(wait = 0; wait < 400; wait++ );

//   //Uetrv32_Spi_Cs_Mode(AUTO);
// for(wait = 0; wait < 400; wait++ );
//  // Uetrv32_Spi_CS_CTRL(CS_OFF);
//   Uetrv32_Uart_Tx((spi_mid+ 0x06));
//  Uetrv32_Uart_Tx((spi_did+ 0x11));


 /* Uetrv32_Spi_CS_CTRL(CS_ON);
  spy = Uetrv32_Spi_Transfer(0x66);
  Uetrv32_Spi_CS_CTRL(CS_OFF);
  
  Uetrv32_Spi_CS_CTRL(CS_ON);
  spy = Uetrv32_Spi_Transfer(0x99);
  Uetrv32_Spi_CS_CTRL(CS_OFF);

  for(wait = 0; wait < 400; wait++ ); */

  //Uetrv32_Spi_Cs_Mode(HOLD);
  /*
  // Release from deep power down
  Uetrv32_Spi_CS_CTRL(CS_ON);
  spy = Uetrv32_Spi_Transfer(0xAB);
  Uetrv32_Spi_CS_CTRL(CS_OFF);
  for(wait = 0; wait < 50; wait++ );
  */
/*
  //---------------------------------------
	// ABh command to only read device ID
	//---------------------------------------
  Uetrv32_Spi_CS_CTRL(CS_ON);
  spy = Uetrv32_Spi_Transfer(0xAB);
  //Three dummy bytes sent
  for (byte = 0; byte < 3; byte ++){
    spy = Uetrv32_Spi_Transfer(0xCC); 
  }
  //receive Device ID (4th byte)
    spi_id = Uetrv32_Spi_Transfer(0xCC); 
    Uetrv32_Uart_Tx((spi_id + 0x46));
    Uetrv32_Spi_CS_CTRL(CS_OFF); 
*/
    //---------------------------------------
	// 9fh command
	//---------------------------------------
  //  Uetrv32_Spi_CS_CTRL(CS_ON);
  //  spy = Uetrv32_Spi_Transfer(0x9f);

  //Three dummy bytes sent to receive manufacturer ID and Device ID
  /* for (byte = 0; byte < 3; byte ++){
    spi_id = Uetrv32_Spi_Transfer(0xCC); 
    Uetrv32_Uart_Tx((spi_id + 0x46));
  }
    
	Uetrv32_Spi_CS_CTRL(CS_OFF);
	*/
	//Uetrv32_Spi_Cs_Mode(AUTO);

    
    
    //Uetrv32_Spi_Cs_Mode(HOLD);

    //---------------------------------------
	// 90h command
	//---------------------------------------
	/*Uetrv32_Spi_CS_CTRL(CS_ON);
    spy = Uetrv32_Spi_Transfer(0x90);

 //Address 000000h sent
  for (byte = 0; byte < 3; byte ++){
    spy = Uetrv32_Spi_Transfer(0x00); 
  }
  //Two dummy bytes sent to receive manufacturer ID and Device ID
  for (byte = 0; byte < 2; byte ++){
    spi_id = Uetrv32_Spi_Transfer(0xCC); 
    Uetrv32_Uart_Tx((spi_id + 0x46));
  }
    
	Uetrv32_Spi_CS_CTRL(CS_OFF);

  for(wait = 0; wait < 200; wait++ ); 
*/
/*
}*/
