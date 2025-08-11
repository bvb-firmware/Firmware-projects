/* wAP in C to product of digit of all array elements.
i/p: int a[5]={11,202,234,456,90};
o/p: int a[5]={1, 0, 24, 120, 0}; */
#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,mul,r;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

for(i=0;i<n;i++)
{
for( mul=1;*(a+i);*(a+i)/=10)
{
r=*(a+i)%10;
mul=mul*r;
}
*(a+i)=mul;
}

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");
}
