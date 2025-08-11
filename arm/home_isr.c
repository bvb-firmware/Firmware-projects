#include<lpc21xx.h>
#include"header.h"
int i=0,j=0,k=0,l=0;
unsigned char temp;
void isr_sw1(void)__irq
{
i=!i;
if(i==1)
IOCLR0=1<<17;
else
IOSET0=1<<17;
  EXTINT|=2;
  VICVectAddr=0;
}

void isr_sw2(void)__irq
{
j=!j;
if(i==1)
{
if(j==1)
IOCLR0=1<<18;
else
IOSET0=1<<18;
}
  EXTINT|=4;
  VICVectAddr=0;
}

void isr_sw3(void)__irq
{
k=!k;
if(i==1)
{
if(k==1)
IOCLR0=1<<19;
else
IOSET0=1<<19;
}
  EXTINT|=1;
  VICVectAddr=0;
}

void config_sw1(void)
{
	PINSEL0|=0X80000000;
	EXTMODE|=2;
 	EXTPOLAR=0;

}

void config_sw2(void)
{
PINSEL0|=0X20000000;
 EXTMODE|=4;
 EXTPOLAR=0;
}

void config_sw3(void)
{
PINSEL1|=1;
 EXTMODE|=1;
 EXTPOLAR=0;
}

void config_vic_for_sw1(void)
{
 VICIntSelect=0;
 VICVectCntl0=15|(1<<5);
 VICVectAddr0=(unsigned int)isr_sw1;
 VICIntEnable|=1<<15;
}

void config_vic_for_sw2(void)
{
 VICIntSelect=0;
 VICVectCntl1=16|(1<<5);
 VICVectAddr1=(unsigned int)isr_sw2;
 VICIntEnable|=1<<16;

}

void config_vic_for_sw3(void)
{
  VICIntSelect=0;
 VICVectCntl2=14|(1<<5);
 VICVectAddr2=(unsigned int)isr_sw3;
 VICIntEnable|=1<<14;
}


void uart0_rx_isr(void)__irq
{
 int r;
 r=U0IIR&(0xe);
 if(r==4)
 {
 //while((U0LSR&1)==0);
  temp=U0RBR;
  U0THR=temp;
 }
 l=!l;
 VICVectAddr=0;
}

void config_rx(void)
{

U0IER=1;
}

void config_vic_for_rx(void)
{
VICIntSelect=0;
VICVectCntl3=6|(1<<5);
VICVectAddr3=(unsigned int)uart0_rx_isr;
VICIntEnable|=1<<6;
}

