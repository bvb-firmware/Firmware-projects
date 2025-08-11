#include<lpc21xx.h>
#include"header2.h"
can2 v1,v2;
main()
{
can2_init();
while(1)
{
v1.id=0x12;
v1.rtr=0;
v1.dlc=8;
v1.data1=0x44332211;
v1.data2=0x88776655;
can2_tx(v1);
delay_ms(100);
}
 
}
