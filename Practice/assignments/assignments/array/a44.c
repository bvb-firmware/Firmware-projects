/*  WAP in C to shift all 0 to left side in same array.
i/p: int a[7]={11,0,0,44,0,33,0};
o/p: int a[7]={0,0,0,0,11,44,33}; */
#include<stdio.h>
void main()
{
int n;
printf("enter no.of array elements\n");
scanf("%d",&n);

int a[n],i,j,r,c;

printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");

for(i=n-1,c=0;i>c;i--)
{
if(a[i]==0)
{
r=a[i];
for(j=i;j>c;j--)
a[j]=a[j-1];
a[j]=r;
++i;
c++;
}
}

printf("after\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
