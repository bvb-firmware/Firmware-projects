//WAP to find sum of 1st digit of  all array elements

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,sum,r;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

for(i=0,sum=0;i<n;i++)
{
printf("%d ",*(a+i));
for( ;*(a+i);*(a+i)/=10)
r=*(a+i)%10;
sum=sum+r;
}
printf("\n");
printf("sum=%d\n",sum);
}
