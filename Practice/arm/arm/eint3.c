#include<lpc21xx.h>
#include"header.h"
int c=0;
//extern void EINT3_ISR(void)__irq;
main()
{
	/*PINSEL1=0x20000000;
	EXTPOLAR=0X0;
	EXTMODE=1;

	VICIntSelect=0X0;
	VICVectCntl0=17|(1<<5);
	VICVectAddr0=(unsigned int)EINT3_ISR;
	VICIntEnable=1<<17;*/
	config_eint2();
	config_vic_for_eint2();
while(1)
{

	c++;

}

}

