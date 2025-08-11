#include<lpc21xx.h>
#include"header.h"
int c1=0,flag=0,r=0,i=0;

	
extern unsigned char arr[12];

void config_uart(void)
{
U0IER=1;
}


void uart_isr(void)__irq
{
c1++;
if(c1%2)
IOCLR0=1<<17;
else
IOSET0=1<<17;
r=U0IIR&(0XE);
if(r==4)
{
 arr[i]=U0RBR;
 
 if(arr[i]=='\r')
 {
 arr[i]='\0';
 flag=1;
 }
 if(i==12)
 {
 arr[++i]='\0';
 flag=1;
 }
 if(arr[i]!='\0')
 i++;
 else
 i=0;
}
VICVectAddr=0;
}


void config_vic_for_uart(void)
{
VICIntSelect=0<<6;
VICVectCntl0=6|(1<<5);
VICVectAddr0=(unsigned int)uart_isr;
VICIntEnable=(1<<6);
}
