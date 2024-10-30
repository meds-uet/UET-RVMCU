
 #define SPI_SCLK_DIV 14 //Accelero 1MHz, system freq 30MHz
 #define HOLD 0x2
 #define AUTO 0x0
 // if chip select active low
 #define CS_ON 0x1
 #define CS_OFF 0x0

/** SPI module prototype */
typedef struct __attribute__((packed,aligned(4))){
    uint32_t  sckdiv;
    uint32_t  sckmode;
    uint32_t  abc;      //////////////////
    uint32_t  abc1;      //////////////////
    uint32_t  csid;
    uint32_t  csdef;
    uint32_t  csmode;
    uint32_t  abc2;
    uint32_t  abc3;
    uint32_t  abc4;
    uint32_t  delay0;
    uint32_t  delay1;
    uint32_t  abc5; 
    uint32_t  abc6;
    uint32_t  abc7;
    uint32_t  abc8;
    uint32_t  fmt;
    uint32_t  abc13;
    uint32_t  tx_data;
    uint32_t  rx_data;
    uint32_t  txmark;
    uint32_t  rxmark;
    uint32_t  abc9;
    uint32_t  abc10;
    uint32_t  fctrl;
    uint32_t  ffmt;
    uint32_t  abc11;
    uint32_t  abc12;
    uint32_t  ie;
    uint32_t  ip;
} Uetrv32_Spi_Struct;

/** SPI module fpga accelerometer address */
#define SPI_Module (*((volatile Uetrv32_Spi_Struct*) (0x00220000UL)))
/** SPI module fpga pmod-D address */
//#define SPI_Module (*((volatile Uetrv32_Spi_Struct*) (0x00230000UL)))

// Function prototypes
void Uetrv32_Spi_Init(uint32_t sclk);
void Uetrv32_Spi_CS_CTRL(uint32_t cs_val);
uint32_t Uetrv32_Spi_Transfer(uint32_t  in);
//uint32_t  Uetrv32_Spi_Rx(void);
void Uetrv32_Spi_Cs_Mode(uint32_t mode);


