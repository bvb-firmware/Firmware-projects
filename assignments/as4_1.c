// WAP to count odd digits in sum using goto

#include<stdio.h>
void main()
{
int num,temp,c=0;
printf("enter any number\n");
scanf("%d",&num);

temp=num;
l1:
if(temp%2==1)
c++;
temp=temp/10;
if(temp>0)
goto l1;

printf("count of odd numbers is: %d\n",c);


}
