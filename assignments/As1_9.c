//WAP to print sum of even digit of a given number

#include<stdio.h>
void main()
{
int num,sum,r,temp;
printf("enter any number\n");
scanf("%d",&num);


for(temp=num,sum=0;temp;temp=temp/10)
{
r=temp%10;
if((r&1)==0)
sum=sum+r;
}
printf("sum=%d\n",sum);




}
