/*WAP in C to delete 0th index element from array
i/p: int a[5]={99,88,77,66,55}, in=0;
o/p: int a[5]={88,77,66,55};*/

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,t;
printf("enter a[n] aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);


printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

printf("enter index to delete\n");
scanf("%d",&t);

for(i=t;i<n;i++)
*(a+i)=*(a+i+1);
--n;

printf("after\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

}
