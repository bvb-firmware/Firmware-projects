#include<lpc21xx.h>
#include"header.h"
extern unsigned char temp;
extern int l,i;
main()
{
IODIR0=7<<17;
IOSET0=7<<17;
uart0_init(9600);
config_sw1();
config_sw2();
config_sw3();
config_vic_for_sw1();
config_vic_for_sw2();
config_vic_for_sw3();
config_vic_for_rx();
config_rx();

while(1)
{
if(l==1 && i==0)
{
 l=0;
			uart0_tx_string("MENU:\r\n");
			uart0_tx_string("a. Bulb on\r\n");
			uart0_tx_string("b. Bulb off\r\n");
			uart0_tx_string("c. Fan on\r\n");
			uart0_tx_string("d. Fan off\r\n");
			uart0_tx_string("e. enter manual mode\r\n");
			uart0_tx_string("Enter an option:");
			uart0_tx_data(temp);
			switch(temp)
			{
					case 'a':  IOCLR0=1<<18; break;
					case 'b':  IOSET0=1<<18; break;
					case 'c':  IOCLR0=1<<19; break;
					case 'd':  IOSET0=1<<19; break;
					case 'e':   i=1;	break;
					default: uart0_tx_string("\r\nInvalid option");
			}
			uart0_tx_string("\r\n");
}
}

}
