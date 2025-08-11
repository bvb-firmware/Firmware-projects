//WAP to find sum of all array elements

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,sum;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

for(i=0,sum=0;i<n;i++)
{
sum=sum+*(a+i);
printf("%d ",*(a+i));
}
printf("\n");
printf("sum=%d\n",sum);
}
