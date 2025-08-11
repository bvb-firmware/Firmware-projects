
/* adc driver */
#include<lpc21xx.h>
#include"header.h"
main()
{
int result;
uart0_init(9600);
PINSEL1|=0x15400000;
ADCR|=0X00200400;
ADCR|=0X01;
ADCR|=1<<24;
uart0_tx_string("adc test\r\n");
while(((ADDR>>31)&1)==0);
ADCR^=0X01;
ADCR^=1<<24;
result=(ADDR>>5)&0x3ff;
uart0_tx_intger(result);

}
