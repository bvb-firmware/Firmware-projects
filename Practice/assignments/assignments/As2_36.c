//WAP to shift odd digits right side in given num i/p=2345   o/p=2435

#include<stdio.h>
void main()
{
int n,sum,l,r,i,sum1,l1,n1,rev;
printf("enter any number\n");
scanf("%d",&n);

for(sum=0,l=1,sum1=0,l1=1;n;n/=10)
{
	r=n%10;
	if(r%2)
	{
		sum=sum*10+r;

	}
	else
	{
		sum1=sum1*10+r;

	}

}
for(rev=0,sum1;sum1;sum1/=10)
{
	r=sum1%10;
	rev=rev*10+r;

}
for( ;sum;sum/=10)
{
	r=sum%10;
	rev=rev*10+r;
}
printf("afte rev=%d\n",rev);

}
