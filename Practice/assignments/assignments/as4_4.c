// WAP to print sum of digit divisible by three of a given number using goto

#include<stdio.h>
void main()
{
int num,temp,sum=0;
printf("enter any number\n");
scanf("%d",&num);

temp=num;

l1:
temp=num%10;
if(temp%3==0)
sum=sum+temp;
num=num/10;
if(num>0)
goto l1;

printf("the sum of digits divisible by 3 is: %d\n",sum);




}
