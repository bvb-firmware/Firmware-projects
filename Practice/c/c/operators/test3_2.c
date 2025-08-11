#include<stdio.h>
void main()
{
// WAP to clear 3rd and 2nd bits of a given number input=63 o/p=51

int num,pos,pos1,r;
printf("Enter any number\n");
scanf("%d",&num);
printf("Enter the bit positions to clear\n");
scanf("%d%d",&pos,&pos1);

r=num&~(1<<pos);
r=r&~(1<<pos1);
printf("after clearing the bit positions o/p=%d\n",r);


// other expression
r=(num&~(1<<pos))&(num&~(1<<pos1));

printf("after clearing the bit  positions o/p=%d\n",r);


}
