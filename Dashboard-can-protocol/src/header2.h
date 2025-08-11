
 typedef struct can2_msg
 {
 unsigned int id;
 unsigned char rtr;
 unsigned char dlc;
 unsigned int data1;
 unsigned int data2;
 }can2;

extern void can2_init(void);
extern void can2_tx(can2 V);
extern void can2_rx(can2 *p);
extern void uart0_init(unsigned int baud);
extern void uart0_tx_string(unsigned char *p);
extern void delay_ms(unsigned int ms);
extern void uart0_tx_integer(int num);

