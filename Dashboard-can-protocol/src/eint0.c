#include<lpc21xx.h>
#include"header.h"
main()
{
int i;
unsigned char t;
IODIR0|=3<<17;
IOSET0=3<<17;
uart0_init(9600);
lcd4_init();
config_eint0();
config_vic_for_eint0();
while(100)
{
t=uart0_rx_data();
uart0_tx_data(t);
lcd4_data(t);
}
}
