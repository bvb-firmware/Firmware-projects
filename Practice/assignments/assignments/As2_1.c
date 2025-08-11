// WAP to print sum of digits using goto of a given number

#include<stdio.h>
void main()
{
int num,temp,i,r,sum;
printf("enter any number\n");
scanf("%d",&num);

sum=0;
l1:
r=num%10;
sum=sum+r;
num=num/10;
if(num>0)
goto l1;
printf("sum=%d\n",sum);
} 
