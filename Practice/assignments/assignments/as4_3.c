// WAP to print sum of last 3 digits usind goto

#include<stdio.h>
void main()
{
int num,temp,c=0,sum=0;
printf("enter any number\n");
scanf("%d",&num);


l1:
temp=num%10;
sum=sum+temp;
num=num/10;
c++;
if(c<=2)
goto l1;

printf("sum of last three digits is: %d\n",sum);

}
