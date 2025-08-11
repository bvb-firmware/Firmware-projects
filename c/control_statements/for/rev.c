// WAP to reverse the digits of a given number

#include<stdio.h>
void main()
{
int num,temp,r,rev=0;
printf("enter any number\n");
scanf("%d",&num);

for(temp=num ; temp ; temp=temp/10)
{  
  r=temp%10;
  rev=rev*10+r;
}
printf("rev=%d\n",rev);
}
