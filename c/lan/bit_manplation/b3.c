//WAP to find given number is +ve or -ve using bitwise operator.

#include<stdio.h>
void main()
{
int num;
printf("enter any number\n");
scanf("%d",&num);

if(num>>31&1)
printf("-ve\n");
else
printf("+ve\n");


}
