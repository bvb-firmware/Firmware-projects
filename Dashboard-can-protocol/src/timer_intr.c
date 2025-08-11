#include<lpc21xx.h>
#include"header.h"
unsigned int flag7;
main()
{
int c=0;
IODIR0=1<<17;
IOSET0=1<<17;
config_vic_for_timer();
config_timer();
delays(500); 
while(1)
{
 c++;
 if(flag7==0)
 IOSET0=1<<17;
 else
 IOCLR0=1<<17;
}
}
