#include<lpc21xx.h>
#include"header2.h"
can2 v1;
main()
{
uart0_init(9600);
can2_init();
uart0_tx_string("node:b\r\n");
while(1)
{
delay_ms(100);
can2_rx(&v1);
uart0_tx_string("ID: ");
uart0_tx_integer(v1.id);
uart0_tx_string("\r\nRTR: ");
uart0_tx_integer(v1.rtr);
uart0_tx_string("\r\nRTR: ");
uart0_tx_integer(v1.dlc);
if(v1.rtr==0)
uart0_tx_string("\r\ndata frame\r\n");
else
uart0_tx_string("\r\nremote frame\r\n");
}
}
