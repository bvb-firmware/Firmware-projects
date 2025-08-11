#include"header.h"
void main()
{
int c=0,c1=200;
while(++c<10)
{
if(fork())
{
printf("c=%d\n",c);
}
else
printf("c1=%d\n",c1);
}
}
