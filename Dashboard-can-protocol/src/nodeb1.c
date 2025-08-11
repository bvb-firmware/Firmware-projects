#include<lpc21xx.h>
#include"header2.h"
can2 v3;
main()
{
IODIR0=(7<<17);
IOSET0=(7<<17);
can2_init();
//uart0_init();
while(1)
{
can2_rx(&v3);
if((v3.data1)&(0xff)==(0x1))
IOCLR0=(1<<17);
else if((v3.data1)&(0xff)==(0x2))
 IOSET0=(1<<17);

else if((v3.data1)&(0xff)==(0x3))
{
while(1)
{
can2_rx(&v3);
if((v3.data1)&(0xff)==(0x1))
IOCLR0=(1<<17);
else if((v3.data1)&(0xff)==(0x2))
IOSET0=(1<<17);

IOCLR0=(1<<18);
delay_ms(500);
IOSET0=(1<<18);
delay_ms(500);

if((v3.data1)&(0xff)==())
{
IOSET0=(1<<18);
break;
}
}
}

else if((v3.data1)&(0xff)==(0x5))
{

while((v3.data1)&(0xff)==(0x5))
{
can2_rx(&v3);
if((v3.data1)&(0xff)==(0x1))
IOCLR0=(1<<17);
else if((v3.data1)&(0xff)==(0x2))
 IOSET0=(1<<17);
IOCLR0=(1<<19);
delay_ms(500);
IOSET0=(1<<19);
delay_ms(500);
}
}

}

}
