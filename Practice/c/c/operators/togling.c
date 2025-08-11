#include<stdio.h>
void main()
{
// togling the bit position of a given number
int num,pos,r;

num=10,pos=0;
printf("num=%d pos=%d\n",num,pos);
r=num^2<<pos;
printf("r=%d\n\n",r); 

num=10,pos=1;
printf("num=%d pos=%d\n",num,pos);
r=num^1<<pos;
printf("r=%d\n\n",r); 

num=10,pos=2;
printf("num=%d pos=%d\n",num,pos);
r=num^1<<pos;
printf("r=%d\n\n",r); 

num=10,pos=3;
printf("num=%d pos=%d\n",num,pos);
r=num^1<<pos;
printf("r=%d\n\n",r); 

num=10,pos=4;
printf("num=%d pos=%d\n",num,pos);
r=num^1<<pos;
printf("r=%d\n\n",r); 

num=10,pos=5;
printf("num=%d pos=%d\n",num,pos);
r=num^1<<pos;
printf("r=%d\n\n",r); 

num=10,pos=6;
printf("num=%d pos=%d\n",num,pos);
r=num^1<<pos;
printf("r=%d\n\n",r); 

num=-10,pos=0;
printf("num=%d pos=%d\n",num,pos);
r=num^1<<pos;
printf("r=%d\n\n",r); 

num=-10,pos=1;
printf("num=%d pos=%d\n",num,pos);
r=num^1<<pos;
printf("r=%d\n\n",r); 

num=-10,pos=-2;
printf("num=%d pos=%d\n",num,pos);
r=num^1<<pos;
printf("r=%d\n",r); 

}
