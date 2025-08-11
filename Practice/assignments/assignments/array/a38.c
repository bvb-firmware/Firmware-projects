//WAP to right rotate array elements 1 time in the same array.

#include<stdio.h>
void main()
{
int n;
printf("enter no.of array elements\n");
scanf("%d",&n);

int a[n],i,j,t,r;
printf("enter no.of times to rotate right\n");
scanf("%d",&t);

for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0;i<t;i++)
{
r=a[n-1];
for(j=n-1;j>0;j--)
a[j]=a[j-1];
a[j]=r;
}


printf("after\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
