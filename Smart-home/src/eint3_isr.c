#include<lpc21xx.h>
int c1=0;
void EINT3_ISR(void)__irq
{
 c1++;
 EXTINT=1;
 VICVectAddr=0;
}

void config_eint2(void)
{
PINSEL0=(3<<14); //EINT2 P0.7
EXTPOLAR=0; //ACTIVE LOW EXTERNAL DEVICE
EXTMODE=(1<<2); //EDGE TRIGGERED
}

void config_vic_for_eint2(void)
{
VICIntSelect=0;
VICVectCntl0=16|(1<<5);
VICVectAddr0=(unsigned int)EINT3_ISR;
VICIntEnable=1<<16;
}

