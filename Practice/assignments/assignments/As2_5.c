//WAP to print sum of first n natural numbers

#include<stdio.h>
void main()
{
int n,i,sum;
printf("enter range natural numbers to print sum\n");
scanf("%d",&n);

for(i=1,sum=0;i<=n;i++)
sum=sum+i;

printf("sum=%d\n",sum);




}
