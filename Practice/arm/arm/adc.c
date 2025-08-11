
#include<lpc21xx.h>
#include"header.h"
main()
{	
	float vout,temprature;
	unsigned short int temp;   //for receving result form adc =temprat degrees
	uart0_init(9600);
	adc_init();
	lcd4_init();
	/*uart0_tx_string("adc test\r\n");
	while(1)
	{
	 temp=adc_read(2);
	 uart0_tx_integer(temp);
	 uart0_tx_string("\r\n");
	} */

	
	while(1)
	{
		temp=adc_read(1);
		vout=(temp*3.3)/1023;
		temprature=(vout-0.5)/0.01;
		uart0_tx_float(temp);
		lcd4_float(temp);
		uart0_tx_string("\r\n");
		lcd4_cmd(0X40);
	}
  	

}
