#include<lpc21xx.h>
#include"header.h"
extern unsigned int c,c1,c2,c3,flag,flag1,flag2;

void sw3_isr(void)__irq
{
  flag=1;
  EXTINT=1;
  VICVectAddr=0;
}

void sw2_isr(void)__irq
{
 flag1=1;
 EXTINT=4;
 VICVectAddr=0;
}

void sw1_isr(void)__irq
{
 flag2=1;
 c1++;
 EXTINT=2;
 VICVectAddr=0;
}

void config_sw3(void)
{
 PINSEL1|=0X1;
 EXTMODE=1;
 EXTPOLAR=0;
}

void config_sw2(void)
{
  PINSEL0|=0X80000000;
  EXTMODE=4;
  EXTPOLAR=0;
}

void config_sw1(void)
{
 PINSEL0|=0X20000000;
 EXTMODE=2;
 EXTPOLAR=0;
}

void config_vic_for_sw3(void)
{
  VICIntSelect=(0<<14);
  VICVectCntl0=14|(1<<5);
  VICVectAddr0=(unsigned int)sw3_isr;
  VICIntEnable=(1<<14);
}

void config_vic_for_sw2(void)
{
  VICIntSelect=0;
  VICVectCntl1=16|(1<<5);
  VICVectAddr1=(unsigned int)sw2_isr;
  VICIntEnable=(1<<16);
}

void config_vic_for_sw1(void)
{
 VICIntSelect=0;
 VICVectCntl2=15|(1<<5);
 VICVectAddr2=(unsigned int)sw1_isr;
 VICIntEnable=(1<<15);
}
