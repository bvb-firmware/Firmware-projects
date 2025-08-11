
#include<lpc21xx.h>
#include"header3.h"
extern can2 v2;
extern unsigned int flag;

void can2rx_isr(void)__irq
{
   //while((C2GSR&1)==0);
   v2.id=C2RID;
   v2.dlc=(C2RFS>>16)&(0xf);
   v2.rtr=(C2RFS>>30)&1;
   if((v2.rtr)==0)
   {
   	v2.data1=C2RDA;
	v2.data2=C2RDB;
   }
   C2CMR=4;
   flag=1;
   VICVectAddr=0;
}

void config_can2rx(void)
{
   C2IER=1;
}

void config_vic_for_can2rx(void)
{
VICIntSelect=0;
VICVectCntl0=27|(1<<5);
VICVectAddr0=(unsigned int)can2rx_isr;
VICIntEnable=(1<<27);

}
