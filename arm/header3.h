typedef struct can2_msg
{
unsigned int id;
unsigned int data1;
unsigned char rtr;
unsigned char dlc;
unsigned int data2;
}can2;

extern void can2_init(void);
extern void can2_tx(can2 V);
extern void can2_rx(can2 *p);
extern void config_can2rx(void);
extern void config_vic_for_can2rx(void);
extern void delay_ms(unsigned int ms);
extern void adc_init(void);
extern unsigned int adc_read(unsigned char ch_num);
extern void lcd4_data(unsigned char data);
extern void lcd4_cmd(unsigned char cmd);
extern void lcd4_init(void);
extern void lcd4_string(unsigned char *p);
extern void lcd4_int(int num);
extern void lcd4_cgram(unsigned char *p);
extern void lcd4_float(float num); 
extern void config_timer(void);
extern void delays(unsigned int ms);
extern void config_vic_for_timer(void);

extern void config_sw1(void);
extern void config_sw2(void);
extern void config_sw3(void);
extern void config_vic_for_sw1(void);
extern void config_vic_for_sw2(void);
extern void config_vic_for_sw3(void);
extern void uart0_init(unsigned int baud);
extern void uart0_tx_integer(int num);		   
