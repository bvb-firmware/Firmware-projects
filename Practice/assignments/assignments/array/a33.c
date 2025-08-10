/* WAP in C to store factorial of array in another array.
i/p: int a[4]={ 4, 5, 6, 4};
o/p: int b[4]={24,120,720,24}*/

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,mul,b[n];
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

for(i=0;i<n;i++)
{
mul=1;
while(*(a+i))
{
mul=mul*(*(a+i));
--*(a+i);
}
*(b+i)=mul;
}

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(b+i));
printf("\n");
}
