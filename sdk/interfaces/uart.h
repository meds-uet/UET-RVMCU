   #define UART_BAUD_DIV  259 //Baud 115200, System frequency 30MHz = 259
   #define Tx_Cntrl_En    0x01
   #define Rx_Cntrl_En    0x01
   #define TWO_STOP_BITS  0x02
   #define ONE_STOP_BIT   0x00
   #define Tx_int         0x01
   #define Rx_int         0x02
   #define Both_int       0x03
   
/** UART module prototype */
typedef struct __attribute__((packed,aligned(4))) {
	uint32_t tx_data;
	uint32_t rx_data;  
	uint32_t tx_crtl;
	uint32_t rx_ctrl;  
	uint32_t int_en;
	uint32_t int_pend; 
	uint32_t baud;
} Uetrv32_Uart_Struct;

/** UART fpga prog-uart port hardware access */
#define UART_Module (*((volatile Uetrv32_Uart_Struct*) (0x00200000UL)))

// Function prototypes
void Uetrv32_Uart_Init(uint32_t baud);
void Uetrv32_Uart_Tx(uint32_t tx_data);
uint32_t Uetrv32_Uart_Rx(void);
uint32_t Uetrv32_Uart_Int_Pend(void);
void Uetrv32_Uart_Isr(void);
void UETrv32_Uart_Print(const char *s);