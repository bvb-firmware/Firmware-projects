#include<stdio.h>
void main()
{
// WAP to toggle 1st and 4th bits of a given number input=42 o/p=56

int num,pos,pos1,r;
printf("Enter any number\n");
scanf("%d",&num);
printf("Enter the bit positions to toggle\n");
scanf("%d%d",&pos,&pos1);

r=num^1<<pos;
r=r^1<<pos1;
printf("after toggling the bit positions o/p=%d\n",r);

/* other expression
r=(num^1<<pos)|(num^1<<pos1);
printf("after toggling the bit positions o/p=%d\n",r);
    */

}
