#include<lpc21xx.h>
#include"header3.h"
extern unsigned int flag7;
//extern can2 v1;
//extern unsigned char flag,flag1,flag2;
 //IODIR0=1<<17;
 //IOSET0=1<<17;
 //unsigned int count;
void timer_isr()__irq
{
int m=T1IR;
 T1IR=2;
 T1PC=0;
 T1TC=0;
 flag7=1;
 //count++;
 T1IR=m;
 VICVectAddr=0;
}

void config_vic_for_timer(void)
{
VICIntSelect=0;
VICVectCntl5=5|(1<<5);
VICVectAddr5=(unsigned int)timer_isr;
VICIntEnable=(1<<5);
}

void config_timer(void)
{
  PINSEL0|=0x08000000;
  T1MCR=8; //interrupt on MR0 match
}

void delays(unsigned int ms)
{
  int arr[]={15,60,30,15,15};
  int pclk=0;
  pclk=arr[VPBDIV]*1000;
  T1PC=0;
  T1PR=pclk-1;
  T1TC=0;
  T1MR1=ms;
  T1TCR=1; 

}

void isr_sw1(void)__irq
{
	//flag^=1;
  EXTINT|=2;
  VICVectAddr=0;
}

void isr_sw2(void)__irq
{
//	flag1^=1;
  EXTINT|=4;
  VICVectAddr=0;
}

void isr_sw3(void)__irq
{
  //flag2^=1;
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
 VICVectCntl1=15|(1<<5);
 VICVectAddr1=(unsigned int)isr_sw1;
 VICIntEnable|=1<<15;
}

void config_vic_for_sw2(void)
{
 VICIntSelect=0;
 VICVectCntl2=16|(1<<5);
 VICVectAddr2=(unsigned int)isr_sw2;
 VICIntEnable|=1<<16;

}

void config_vic_for_sw3(void)
{
  VICIntSelect=0;
 VICVectCntl3=14|(1<<5);
 VICVectAddr3=(unsigned int)isr_sw3;
 VICIntEnable|=1<<14;
}


