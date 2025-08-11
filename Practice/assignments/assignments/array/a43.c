/* WAP in C to shift all odd elements to right side
in same array.
i/p: int a[7]={11,22,22,44,55,33,88};
o/p: int a[7]={22,22,44,88,11,55,33}; */

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

for(i=0,c=0;i<n-c;i++)
{
if(a[i]%2)
{
r=a[i];
for(j=i;j<n;j++)
a[j]=a[j+1];
a[j-1]=r;
c++;
--i;
}
}


printf("after\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
