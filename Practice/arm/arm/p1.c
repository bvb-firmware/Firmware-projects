#include<lpc21xx.h>
main()
{
T1PC=0;
T1PR=15000000-1;
T1TC=0;
T1TCR=1;
while(T1TC<1);
T1TCR=0;



}
