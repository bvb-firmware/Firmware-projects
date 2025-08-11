//WAP to print armstrong numbers b/w 1 to 500 

#include<stdio.h>
void main()
{
int n1,n2,r,r1,i,sum,c,temp,temp1;

printf("enter the range\n");
scanf("%d%d",&n1,&n2);

for(n1;n1<=n2;n1++)
{
for(temp=n1,c=0;temp;c++,temp/=10);
for(temp1=n1,sum=0;temp1;temp1/=10)
{
r=temp1%10;
for(r1=1,i=1;i<=c;i++)
r1=r1*r;
sum=sum+r1;

}
if(sum==n1)
printf("%d\n",n1);

}

}
