/* WAP in C to delete odd palindrome number
from array .
i/p: int a[6]={22,141,222,45,33,77};
o/p: int a[6]={22,222,45}; */

#include<stdio.h>
void main()
{
int n;
printf("enter the no.of array elements\n");
scanf("%d",&n);

int a[n],i,j,rev,temp,r;
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

for(i=0;i<n;i++)
{
	for(temp=a[i],rev=0;temp;temp/=10)
	{
		r=temp%10;
		rev=rev*10+r;

	}
	if(rev==a[i])
	{
		if(a[i]%2)
		{
			for(j=i;j<n;j++)
				a[j]=a[j+1];
			--i;
			--n;

		}

	}

}


printf("after\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");


}
