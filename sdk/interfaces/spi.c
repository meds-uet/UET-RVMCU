#include <inttypes.h>
#include "spi.h"

uint32_t check1;

// Initialize SPI module.
void Uetrv32_Spi_Init(uint32_t sclk) {
    SPI_Module.sckdiv = sclk;     // used formula given in the datasheet
    SPI_Module.csid = SPI_Module.csid | 0x01; 
    //SPI_Module.delay1 = SPI_Module.delay1 | 0x02; 
}

// Enable or disable slave select
void Uetrv32_Spi_CS_CTRL(uint32_t cs_val){
	SPI_Module.csdef = SPI_Module.csdef | cs_val;
}


//CS Mode Control
void Uetrv32_Spi_Cs_Mode(uint32_t mode){
	while(SPI_Module.csmode != (SPI_Module.csmode | mode)){
		SPI_Module.csmode = SPI_Module.csmode | mode; 
    }
}

 void Uetrv32_Spi_Tx(uint32_t  in) { //uint32_t
    while (SPI_Module.tx_data == 0x80000000 ); // wait for transfer to finish    ----    asserting 31st bit 
    SPI_Module.tx_data = in;    // trigger transfer 
    /*check1 = SPI_Module.rx_data;
    while((check1 & 0x80000000) == 0x80000000){
	check1 = SPI_Module.rx_data;}
  return (check1 & 0xFF);  */           // trigger transfer	
}

uint32_t  Uetrv32_Spi_Rx(void) {
    check1 = SPI_Module.rx_data;
  while((check1 & 0x80000000) == 0x80000000)
  check1 = SPI_Module.rx_data;
  return (check1 & 0xFF);             // trigger transfer
}




