#include<lpc21xx.h>
#include"header.h"
#define bulb (1<<18)
#define fan (1<<19)
#define led (1<<17)
#define sw1 ((IOPIN0>>14)&1)
#define sw2 ((IOPIN0>>15)&1)
#define sw3 ((IOPIN0>>16)&1)
unsigned char flag=0;
main()
{
		unsigned char op;
		int flag1=0,flag2=0;
		IODIR0=bulb|fan|led;
		IOSET0=bulb|fan|led;
		uart0_init(9600);
	while(1)
	{
		if(flag==0)
		{
										
			   
				uart0_tx_string("Menu:\r\n");
				uart0_tx_string("a. Bulb on\r\n");
				uart0_tx_string("b. Bulb off\r\n");
				uart0_tx_string("c. Fan on\r\n");
				uart0_tx_string("d. Fan off\r\n");
				uart0_tx_string("e. enter manual mode\r\n");
				uart0_tx_string("Enter an option:");
				op=uart0_rx_data();
				uart0_tx_data(op);
				switch(op)
				{
					case 'a':  IOCLR0=bulb; break;
					case 'b':  IOSET0=bulb; break;
					case 'c':  IOCLR0=fan; break;
					case 'd':  IOSET0=fan; break;
					case 'e':  flag=1;	break;
					default: uart0_tx_string("\r\nInvalid option");
				
				}
				uart0_tx_string("\r\n");
	   }
			if(flag==1)
			{
				 IOCLR0=led;
						 if(sw2==0)
						 {
						 	while(sw2==0);
							flag1++;
						 }
						 if(((flag1)%2)==1)
						 IOCLR0=bulb;
						 else if(((flag1)%2)==0)
						 IOSET0=bulb;
					
						 if(sw3==0)
						 {
						 	while(sw3==0);
							flag2++;
						 }
						 if(((flag2)%2)==1)
						 IOCLR0=fan;
						 else if(((flag2)%2)==0)
						 IOSET0=fan;
						 if(sw1==0)
						 {
						 	while(sw1==0);
							flag=0;
							IOSET0=led;
					 	}
			}
		 
	}
}
