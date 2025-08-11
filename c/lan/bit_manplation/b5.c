//WAP to find given number is power of 2 or not.

#include<stdio.h>
void main()
{
int num;
printf("enter any number\n");
scanf("%d",&num);

if(num&(num-1))
printf("not powe of 2\n");
else
printf("power of 2\n");

}
