/* WAP in C to delete perfect number from array .
i/p: int a[6]={6,6,7,28,6,5,24};
o/p: int a[6]={7,5,24}; */

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,sum,mul,j;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

for(i=0;i<n;i++)
{
	sum=0;
	mul=1;
	while(mul<*(a+i))
	{
		if(*(a+i)%mul==0)
		sum=sum+mul;
		mul++;

	}
	if(sum==*(a+i))
	{
		for(j=i;j<n;j++)
		*(a+j)=*(a+j+1);
		--n;
		--i;

	}
}

printf("after\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");
}
