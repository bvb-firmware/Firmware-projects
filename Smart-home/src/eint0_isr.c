#include"header.h"
#include<lpc21xx.h>
int c;
void config_eint0(void)
{
 PINSEL1|=1;
 EXTMODE=1;
 EXTPOLAR=0;
}

void ISR_EINT0(void)__irq
{
c^=1;;
if(c)
IOSET0=1<<18;
else
IOCLR0=1<<18;
EXTINT=1;
VICVectAddr=0;
}

void config_vic_for_eint0(void)
{
VICIntSelect=0;
VICVectCntl7=14|(1<<5);
VICVectAddr7=(unsigned int)ISR_EINT0;
VICIntEnable=1<<14;
}

