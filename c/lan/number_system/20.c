//WAP to check given number is perfect or not

#include<stdio.h>
void main()
{
int num,i,temp,sum;
printf("enter any number\n");
scanf("%d",&num);

for(temp=num,sum=0,i=1;i<num;i++)
{
if(num%i==0)
sum=sum+i;

}
if(sum==temp)
printf("perfect\n");
else
printf("not perfect\n");

}
