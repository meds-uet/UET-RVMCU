// Standard libraries
// #include <stdint.h>
#include <inttypes.h>
// #include <limits.h>
#include "uart.h"

uint32_t uart0_rx_data, uart1_rx_data; //for UART receiving control
uint32_t check_uart0_int, check_uart0_int; //for UART interupt check

/**********************************************************************//**
 * Initialize UART module.
 *
 * @note Configure the baud divisor register.
 *
 * @param baud.
 **************************************************************************/

void Uetrv32_Uart0_Init(uint32_t baud) {

  //Initialize baud rate
  UART_0_Module.baud = baud;
  //Enable UART transmitter control
  UART_0_Module.tx_crtl |= TX_CNTRL_EN ;
  //Enable UART receiver control
  UART_0_Module.rx_ctrl |= RX_CNTRL_EN ;
  //for one stop bit
  UART_0_Module.tx_crtl |= ONE_STOP_BIT;
  /*//for two stop bits
  UART_0_Module.tx_crtl = TWO_STOP_BITS;*/
  //UART Tx Interupt enable
  UART_0_Module.int_en = TX_INT ;
  /*//for UART Rx interupt enable
  UART_0_Module.int_en = rx0_inT ;*/
  /*//for UART both Tx & Rx interupt enable
  UART_0_Module.int_en = BOTH_INT ;*/ 
}

void Uetrv32_Uart1_Init(uint32_t baud) {

  //Initialize baud rate
  UART_1_Module.baud = baud;
  //Enable UART transmitter control
  UART_1_Module.tx_crtl |= TX_CNTRL_EN ;
  //Enable UART receiver control
  UART_1_Module.rx_ctrl |= RX_CNTRL_EN ;
  //for one stop bit
  UART_1_Module.tx_crtl |= ONE_STOP_BIT;
  /*//for two stop bits
  UART_1_Module.tx_crtl = TWO_STOP_BITS;*/
  /*//UART Tx Interupt enable
  UART_1_Module.int_en = TX_INT ;
  //for UART Rx interupt enable
  UART_1_Module.int_en = rx0_inT ;*/
  /*//for UART both Tx & Rx interupt enable
  UART_1_Module.int_en = BOTH_INT ;*/ 
}

/**********************************************************************//**
 * UART data transmit. This is a blocking function.
 *
 **************************************************************************/

void Uetrv32_Uart0_Tx(uint32_t tx_data) {
  while(UART_0_Module.tx_data == 0x80000000);     //Wait until UART fifo is empty
     UART_0_Module.tx_data = tx_data;             // trigger transfer
}

void Uetrv32_Uart1_Tx(uint32_t tx_data) {
  while(UART_1_Module.tx_data == 0x80000000);     //Wait until UART fifo is empty
     UART_1_Module.tx_data = tx_data;             // trigger transfer
}

/**********************************************************************//**
 * UART String data transmit. This is a blocking function.
 *
 **************************************************************************/

void Uetrv32_Uart0_Tx_String(char *pt ) {
  while(*pt){
    Uetrv32_Uart0_Tx((*pt));
    pt++;
  }
}

void Uetrv32_Uart1_Tx_String(char *pt ) {
  while(*pt){
    Uetrv32_Uart1_Tx((*pt));
    pt++;
  }
}

/**********************************************************************//**
 * UART data receive. This is a blocking function.
 *
 **************************************************************************/

uint32_t Uetrv32_Uart0_Rx(void){
  uart0_rx_data = UART_0_Module.rx_data;
  while((uart0_rx_data & 0x80000000) == 0x80000000)  //Uart fifo is full update check
  uart0_rx_data = UART_0_Module.rx_data;
  return (uart0_rx_data & 0xFF);             // Trigger receiving
}

uint32_t Uetrv32_Uart1_Rx(void){
  uart1_rx_data = UART_1_Module.rx_data;
  while((uart1_rx_data & 0x80000000) == 0x80000000)  //Uart fifo is full update check
  uart1_rx_data = UART_0_Module.rx_data;
  return (uart1_rx_data & 0xFF);             // Trigger receiving
}

/**********************************************************************//**
 * UART String data receive. This is a blocking function.
 *
 **************************************************************************/

void Uetrv32_Uart0_Rx_String(char *pt, uint32_t max ) {
uint32_t length = 0;
char rx0_in;
rx0_in = Uetrv32_Uart0_Rx();

while(rx0_in != CR){
  if (rx0_in == BS){
    if (length>0){
      pt--;
      length--;
      Uetrv32_Uart0_Tx(BS);
    }
  }
  else if (length < max){
    *pt = rx0_in;
    pt++;
    length++;
    Uetrv32_Uart0_Tx(rx0_in);
  }
  else if (length >= max){
      break;
    }
  rx0_in = Uetrv32_Uart0_Rx();
  }
  *pt = 0;
}

void Uetrv32_Uart1_Rx_String(char *pt, uint32_t max ) {
uint32_t length = 0;
char rx1_in;
rx1_in = Uetrv32_Uart1_Rx();

while(rx1_in != CR){
  if (rx1_in == BS){
    if (length>0){
      pt--;
      length--;
      Uetrv32_Uart0_Tx(BS);
    }
  }
  else if (length < max){
    *pt = rx1_in;
    pt++;
    length++;
    Uetrv32_Uart0_Tx(rx1_in);
  }
  else if (length >= max){
      break;
    }
  rx1_in = Uetrv32_Uart1_Rx();
  }
  *pt = 0;
}


/**********************************************************************//**
 * UART interupt pending.
 *
 **************************************************************************/

/*
uint32_t Uetrv32_Uart0_Int_Pend(void){
  check_uart0_int = (UART_0_Module.int_pend == TX_INT);  //Checking the type of UART interupt
  return(check_uart0_int);
}

uint32_t Uetrv32_Uart1_Int_Pend(void){
  check_uart1_int = (UART_1_Module.int_pend == TX_INT);  //Checking the type of UART interupt
  return(check_uart1_int);
}

*/
