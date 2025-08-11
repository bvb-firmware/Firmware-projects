#include<lpc21xx.h>
#include"header.h"
unsigned char s[10];
extern int flag;
main()
{
uart0_init(9600);
config_fiq();
config_UART();
while(1)
{
if(flag==1)
{
flag=0;
 uart0_tx_string("rev string:");
 uart0_tx_string(s);
 uart0_tx_string("\r\n");
}
}


}
