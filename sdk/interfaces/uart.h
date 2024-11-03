#define UART_BAUD_DIV  259 //Baud 115200, System frequency 30MHz = 259
#define TX_CNTRL_EN    0x01
#define RX_CNTRL_EN    0x01
#define TWO_STOP_BITS  0x02
#define ONE_STOP_BIT   0x00
#define TX_INT         0x01
#define RX_INT         0x02
#define BOTH_INT       0x03
#define CR										13
#define BS										8
#define LF										10
   
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
#define UART_0_Module (*((volatile Uetrv32_Uart_Struct*) (0x00200000UL)))
/** UART-pmodD module hardware access */
#define UART_1_Module (*((volatile Uetrv32_Uart_Struct*) (0x00210000UL)))

// Function prototypes
void Uetrv32_Uart0_Init(uint32_t baud);
void Uetrv32_Uart1_Init(uint32_t baud);

void Uetrv32_Uart0_Tx(uint32_t tx_data);
void Uetrv32_Uart1_Tx(uint32_t tx_data);

uint32_t Uetrv32_Uart0_Rx(void);
uint32_t Uetrv32_Uart1_Rx(void);

void Uetrv32_Uart0_Tx_String(char *pt );
void Uetrv32_Uart1_Tx_String(char *pt );

void Uetrv32_Uart0_Rx_String(char *pt, uint32_t max );
void Uetrv32_Uart1_Rx_String(char *pt, uint32_t max );

uint32_t Uetrv32_Uart0_Int_Pend(void);
uint32_t Uetrv32_Uart1_Int_Pend(void);

void Uetrv32_Uart_Isr(void);
void UETrv32_Uart_Print(const char *s);