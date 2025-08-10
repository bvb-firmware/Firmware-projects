/* WAP in C to delete odd elements from array .
i/p: int a[6]={11,12,14,13,15,18};
o/p: int a[6]={12,14,18}*/
#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,j;
printf("enter a[n] aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);


printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");


for(i=0;i<n;i++)
{
if(a[i]%2)
{
for(j=i;j<n;j++)
*(a+j)=*(a+j+1);
--i;
--n;
}

}

printf("after\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

}
