//WAP to check given number is strong or not.

#include<stdio.h>
void main()
{
int num,i,r,sum,r1,temp;
printf("enter any number\n");
scanf("%d",&num);

for(temp=num,sum=0;temp;temp/=10)
{
r=temp%10;
for(r1=1,i=1;i<=r;i++)
r1=r1*i;
sum=sum+r1;

}
if(sum==num)
printf("strong\n");
}
