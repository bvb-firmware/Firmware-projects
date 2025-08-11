 
 #include<lpc21XX.h>
 #include"header.h"
 main()
 {
 unsigned int ch_num=1,temp;
 float vout,temprature;
 while(1)
 {
 PINSEL1|=0x15400000;
 ADCR|=0X00200400;
 ADCR|=1<<ch_num;
 ADCR|=1<<24;
 while(((ADDR>>31)&1)==0);
 ADCR^=1<<24;
 ADCR^=1<<ch_num;
 temp=(ADDR>>6)&0x3FF;
 uart0_init(9600);
 //lcd4_init();
 uart0_tx_string("digital output: ");
 uart0_tx_integer(temp);
 uart0_tx_string("\r\n");
 vout=(temp*3.3)/1023;
 uart0_tx_string("output voltage: ");
 uart0_tx_float(vout);
 uart0_tx_string("\r\n");
 temprature=(vout-0.5)/0.01;
 uart0_tx_string("temprature: ");
 uart0_tx_float(temprature);
 uart0_tx_string("\r\n");
 uart0_tx_string("\r\n");
 delay_ms(200);
 }
 }
