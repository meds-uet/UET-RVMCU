#include <inttypes.h>
#include "spi.h"

uint32_t check1, check0;

// Initialize SPI module.
void Uetrv32_Spi0_Init(uint32_t sclk) {
    SPI_0_Module.sckdiv = sclk;     // used formula given in the datasheet
    SPI_0_Module.csid = SPI_0_Module.csid | 0x01; 
    //SPI_0_Module.delay1 = SPI_0_Module.delay1 | 0x02; 
}

void Uetrv32_Spi1_Init(uint32_t sclk) {
    SPI_1_Module.sckdiv = sclk;     // used formula given in the datasheet
    SPI_1_Module.csid = SPI_1_Module.csid | 0x01; 
    //SPI_1_Module.delay1 = SPI_1_Module.delay1 | 0x02; 
}

// Default value for slave select
void Uetrv32_Spi0_CS_CTRL(uint32_t cs_val){
	SPI_0_Module.csdef = SPI_0_Module.csdef | cs_val;
}

void Uetrv32_Spi1_CS_CTRL(uint32_t cs_val){
	SPI_1_Module.csdef = SPI_1_Module.csdef | cs_val;
}


//CS Mode Control
void Uetrv32_Spi0_CS_Mode(uint32_t mode){
	while(SPI_0_Module.csmode != (SPI_0_Module.csmode | mode)){
		SPI_0_Module.csmode = SPI_0_Module.csmode | mode; 
    }
}

void Uetrv32_Spi1_CS_Mode(uint32_t mode){
	while(SPI_1_Module.csmode != (SPI_1_Module.csmode | mode)){
		SPI_1_Module.csmode = SPI_1_Module.csmode | mode; 
    }
}

//tranmit and receive
uint32_t Uetrv32_Spi0_Transfer(uint32_t  in) { //uint32_t
    while (SPI_0_Module.tx_data == 0x80000000 ); // wait for transfer to finish    ----    asserting 31st bit 
    SPI_0_Module.tx_data = in;    // trigger transfer 
    check0 = SPI_0_Module.rx_data;
    while((check0 & 0x80000000) == 0x80000000){
	check0 = SPI_0_Module.rx_data;}
  return (check0 & 0xFF);
}

uint32_t Uetrv32_Spi1_Transfer(uint32_t  in) { //uint32_t
    while (SPI_1_Module.tx_data == 0x80000000 ); // wait for transfer to finish    ----    asserting 31st bit 
    SPI_1_Module.tx_data = in;    // trigger transfer 
    check1 = SPI_1_Module.rx_data;
    while((check1 & 0x80000000) == 0x80000000){
      check1 = SPI_1_Module.rx_data;}
  return (check1 & 0xFF);
}



