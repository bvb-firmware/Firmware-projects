#include<lpc21xx.h>
#include"header.h"
main()
{

unsigned short int temp;

uart0_init(9600);
spi0_init();
lcd4_init();
IODIR0=3<<17;
IOSET0=3<<17;
uart0_tx_string("adc_test\r\n");

/* while(1)
{
temp=mcp3204(2);
lcd4_cmd(0x01);
uart0_tx_integer(temp);
lcd4_int(temp);
uart0_tx_string("\r\n");
} */
while(1)
{																														   
temp=mcp3204(2);
lcd4_cmd(0x01);
uart0_tx_integer(temp);
lcd4_int(temp);
uart0_tx_string("\r\n");
if(temp>=3500)
IOCLR0=3<<17;
else
IOSET0=3<<17;
}
}
