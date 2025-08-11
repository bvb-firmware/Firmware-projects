#include<lpc21xx.h>
#include"header.h"
int c1=0,r=0,i=0;
unsigned char temp[5];
void uart0_isr(void)__irq
{
	c1++;
	r=U0IIR&(0X0E);
	if(r==4)
	{
	while(((U0LSR>>0)&1)==0);
	 temp[i]=U0RBR;
	 //U0THR=temp;
	 U0THR=temp[i];
	 i++;
	 //while(((U0LSR>>5)&1)==0);
	}
	VICVectAddr=0;
}

void config_uart0(void)
{
U0IER=3;
}

void config_vic_for_uart0(void)
{
VICIntSelect=(0<<6);
VICVectCntl0=6|(1<<5);
VICVectAddr0=(unsigned int)uart0_isr;
VICIntEnable=(1<<6);
}
