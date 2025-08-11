#include<lpc21xx.h>
#include"header.h"
main()
{
unsigned short int temp=0;
float vout=0;
unsigned char op,op1;
adc1_init();
spi0_init();
uart0_init(9600);
lcd4_init();
while(1)
{
uart0_tx_string("MENU\r\n  1)ext adc\r\n  2)on-chip adc  \r\n3)exit\r\n");
uart0_tx_string("enter any option:");
op=uart0_rx_data();
uart0_tx_data(op);
switch(op)
{
case '1':uart0_tx_string("Pre-MENU\r\n  1)ext adc potentiometer\r\n  2)ext adc LDR sensor\r\n");
uart0_tx_string("enter any option: ");
op1=uart0_rx_data();
uart0_tx_data(op1);
uart0_tx_string("\r\n");
switch(op1)
{
case '1':	temp=mcp3204(0);
		vout=((temp*5)/4095);
		lcd4_cmd(0x01);
		uart0_tx_float(vout);
		uart0_tx_string(" volts");
		lcd4_float(vout);
		lcd4_string(" volts");
		uart0_tx_string("\r\n"); 
		 break;
case '2':	temp=mcp3204(2);
		lcd4_cmd(0x01);
		temp=((temp/4095)*100);
		uart0_tx_integer(temp);
		uart0_tx_string("%");
		lcd4_int(temp);
		lcd4_string("%");
		uart0_tx_string("\r\n");
		break;
default:uart0_tx_string("\r\ninvalid option");
}  break;

case '2':  uart0_tx_string("Pre-MENU\r\n  1)on_chip adc potentiometer\r\n  2)on_chip adc temprature sensor\r\n");
uart0_tx_string("enter any option:");
op1=uart0_rx_data();
uart0_tx_data(op1);
uart0_tx_string("\r\n");
switch(op1)
{
case '1':	temp=adc1_read(2);
		vout=((temp*3.3)/1023);
		lcd4_cmd(0x01);
		uart0_tx_float(vout);
		uart0_tx_string(" volts");
		lcd4_float(vout);
		lcd4_string(" volts");
		uart0_tx_string("\r\n");
		break;
case '2':	temp=adc1_read(1);
        vout=((temp*3.3)/1023);
		temp=((vout-0.5)/0.01);
		lcd4_cmd(0x01);
		uart0_tx_string("temp:");
		uart0_tx_integer(temp);
		uart0_tx_string(" degrees");
		lcd4_string("temp:");
		lcd4_int(temp);
		lcd4_string(" degrees");
		uart0_tx_string("\r\n");
		break;
default:uart0_tx_string("\r\ninvalid option");
}  break;
case '3': return 0;
default: uart0_tx_string("\r\ninvalid option");
}
uart0_tx_string("\r\n");
} 
}
