#include<lpc21xx.h>
#include"header.h"
   int c1=0;
 //IODIR0=1<<17;
 //IOSET0=1<<17;
void timer_isr()__irq
{
c1++;
 //IOCLR0=1<<17;
 T0IR=1;
 T0PC=0;
 T0TC=0;
 
VICVectAddr=0;
}

void config_vic_for_timer(void)
{
VICIntSelect=0;
VICVectCntl0=4|(1<<5);
VICVectAddr0=(unsigned int)timer_isr;
VICIntEnable=(1<<4);
}

void config_timer(void)
{
  PINSEL1=(3<<12);
  T0MCR=1;
}

void delays(unsigned int ms)
{
  int arr[]={15,60,30,15,15};
  int pclk=0;
  pclk=arr[VPBDIV]*1000;
  T0PC=0;
  T0PR=pclk-1;
  T0TC=0;
  T0TCR=1;
  T0MR0=ms;

}

