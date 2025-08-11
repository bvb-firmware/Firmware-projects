 /* WAP in C to print 1st perfect and pos form array .
i/p: int a[5]={2,4,6,28,6};
o/p: num= 6, pos= 2 */

#include<stdio.h>
void main()
{
int n;
printf("enter no.of array elements\n");
scanf("%d",&n);

int a[n],i,j,r,sum;

printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0;i<n;i++)
{
	for(j=1,sum=0;j<a[i];j++)
	{
		if(a[i]%j==0)
			sum=sum+j;
	}
	if(sum==a[i])
	{
		printf("perfect=%d  and its index=%d\n",a[i],i);
		return ;
	}
}


printf("after\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
