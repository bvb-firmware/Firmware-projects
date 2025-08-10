#include<lpc21xx.h>
#include"header.h"
extern unsigned char arr[13];
int i=0,flag=0;

void isr_rfid(void)__irq
{
 int r;
 r=U0IIR&(0xE);
 if(r==4)
 {
  arr[i]=U0RBR;
   i++;
   if(i==12)
   {
   flag=1;
   arr[i]='\0';
   i=0;
   }
 }
 VICVectAddr=0;
}

void config_rfid(void)
{
U0IER=1;
}

void config_vic_for_rfid(void)
{
 VICIntSelect=0;
 VICVectCntl5=6|(1<<5);
 VICVectAddr5=(unsigned int)isr_rfid;
 VICIntEnable=1<<6;
}
