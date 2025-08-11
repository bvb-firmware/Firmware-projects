/* WAP in C to store 1st 7 prime number in array .
i/p: int a[7];
o/p: int a[7]={2,3,5,7,11,13,17}; */

#include<stdio.h>
void main()
{
int n;
printf("enter no.of array elements\n");
scanf("%d",&n);

int a[n],i,j;

printf("enter array elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",a+i);
	if(a[i]<20)
	{
		for(j=2;j<=a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]!=j)
			--i;
	}
	else
		--i;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}

