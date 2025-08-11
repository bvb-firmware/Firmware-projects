#include<lpc21xx.h>
#include"header.h"
main()
{
int c=0;
config_vic_for_timer();
config_timer();
delays(100);
while(1)
{
 c++;
}
}
