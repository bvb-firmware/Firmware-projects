#include<lpc21xx.h>
#include"header.h"
unsigned char arr[13];
int c=0;
extern int flag;
main()
{
IODIR0=(1<<17);
IOSET0=(1<<17);
uart0_init(9600);
config_uart();
config_vic_for_uart();
while(1)
{
c++;
if(flag==1)
{
flag=0;
uart0_tx_string(arr);
uart0_tx_string("\r\n");
}
 }
}
