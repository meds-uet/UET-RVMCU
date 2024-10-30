// Standard libraries
// #include <stdint.h>
#include <inttypes.h>
// #include <limits.h>
#include "uart.h"

uint32_t rec_cntrl; //for UART receiving control
uint32_t check_int; //for UART interupt check

/**********************************************************************//**
 * Initialize UART module.
 *
 * @note Configure the baud divisor register.
 *
 * @param baud.
 **************************************************************************/

void Uetrv32_Uart_Init(uint32_t baud) {

  //Initialize baud rate
  UART_Module.baud = baud;
  //Enable UART transmitter control
  UART_Module.tx_crtl = Tx_Cntrl_En ;
  //Enable UART receiver control
  UART_Module.rx_ctrl = Rx_Cntrl_En ;
  //for one stop bit
  UART_Module.tx_crtl = ONE_STOP_BIT;
  /*//for two stop bits
  UART_Module.tx_crtl = TWO_STOP_BITS;*/
  //UART Tx Interupt enable
  UART_Module.int_en = Tx_int ;
  /*//for UART Rx interupt enable
  UART_Module.int_en = Rx_int ;*/
  /*//for UART both Tx & Rx interupt enable
  UART_Module.int_en = Both_int ;*/ 
  
}

/**********************************************************************//**
 * UART data transmit. This is a blocking function.
 *
 **************************************************************************/

void Uetrv32_Uart_Tx(uint32_t tx_data) {
  while(UART_Module.tx_data == 0x80000000);     //Wait until UART fifo is empty
     UART_Module.tx_data = tx_data;             // trigger transfer
}

/**********************************************************************//**
 * UART String data transmit. This is a blocking function.
 *
 **************************************************************************/

void Uetrv32_Uart_Tx_String(char *pt ) {
      while(*pt){
        Uetrv32_Uart_Tx((*pt));
        pt++;
      }
}

/**********************************************************************//**
 * UART data receive. This is a blocking function.
 *
 **************************************************************************/

uint32_t Uetrv32_Uart_Rx(void){
  rec_cntrl = UART_Module.rx_data;
  while((rec_cntrl & 0x80000000) == 0x80000000)  //Uart fifo is full update check
  rec_cntrl = UART_Module.rx_data;
  return (rec_cntrl & 0xFF);             // Trigger receiving
}

/**********************************************************************//**
 * UART String data receive. This is a blocking function.
 *
 **************************************************************************/

void Uetrv32_Uart_Rx_String(char *pt ) {
      int i = 0;
      while(1){
          *pt = Uetrv32_Uart_Rx();
          Uetrv32_Uart_Tx((*pt));
          if (*pt == 'n'){
            break;
          }
          pt++;
          i++;
          if (i>=50){
            break;
          }
      }
}

/**********************************************************************//**
 * UART interupt pending. This is a blocking function.
 *
 **************************************************************************/

/*
uint32_t Uetrv32_Uart_Int_Pend(void){
  check_int = UART_Module.int_pend == Tx_int;  //Checking the type of UART interupt
  return(check_int);
}
*/

/**********************************************************************//**
 * Print string (zero-terminated) via UART. 
 *
 * @note This function is blocking.
 *
 * @param[in] s -- Pointer to string.
 **************************************************************************/

void UETrv32_Uart_Print(const char *s) {

  char c = 0;
  while ((c = *s++)) {
    Uetrv32_Uart_Tx(((uint32_t) c));
  }
}



