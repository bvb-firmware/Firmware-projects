
/* digital speedmeter */

#include<lpc21xx.h>
#include"header.h"
main()
{
	unsigned int temp;
	float s;
	
	uart0_init(9600);
	adc_init();
	lcd4_init();
	while(1)
	{
		temp=adc_read(2);
		s=temp/3.65;
		uart0_tx_string("speed:");
		lcd4_string("speed:");
		uart0_tx_float(s);
		lcd4_float(s);
		uart0_tx_string("kmph\r\n");
		lcd4_string("kmph");
		delay_ms(200);
		lcd4_cmd(0x80);
	
	}
}
