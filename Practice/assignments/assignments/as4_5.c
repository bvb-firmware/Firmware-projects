// WAP to print sum of alternate digits of a given number

#include<stdio.h>
void main()
{
int num,temp,c=0,sum=0,rev=0,temp1;
printf("enter any number\n");
scanf("%d",&num);

temp=num;
l1:
temp=num%10;
rev=rev*10+temp;
num=num/10;
if(num>0)
goto l1;


l2:
temp=rev%10;
sum=sum+temp;
rev=rev/100;
if(rev>0)
goto l2;

printf("sum of alternate digits is: %d\n",sum);



}
