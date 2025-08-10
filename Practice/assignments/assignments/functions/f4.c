/*  WAP in C using function to count strong and
armstrong number elements in array .
i/p: int a[6]={2,153,145,2,3,153};
o/p: strong number count = 3
armstrong number count = 5
int strong_fun(int *a, int ele );
int armstrong_fun(int *a, int ele ); */

#include<stdio.h>
int strong_fun(int *, int);
int armstrong_fun(int *,int);

void main()
{
int n;
printf("enter no.of array elements\n");
scanf("%d",&n);

int a[n],i,p,q;
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

p=strong_fun(a,n);
printf("strong count=%d\n",p);
q=armstrong_fun(a,n);
printf("armstrong count=%d\n",q);


}
int strong_fun(int *a,int n)
{
	int i,j,r,r1,temp,sum,c;
	for(i=0,c=0;i<n;i++)
	{
		for(temp=a[i],sum=0;temp;temp/=10)
		{
			r=temp%10;
			for(r1=1;r>0;r--)
				r1=r1*r;

			sum=sum+r1;
		}
		if(sum==a[i])
			c++;
	}
	return c;
}
int armstrong_fun(int *a,int n)
{
	int i,j,r,r1,c,c1,temp,temp1,sum;
	for(i=0,c1=0;i<n;i++)
	{
		for(temp=a[i],c=0;temp;c++,temp/=10);
		for(temp1=a[i],sum=0;temp1;temp1/=10)
		{
			r=temp1%10;
			for(r1=r,j=0;j<c-1;j++)
				r1=r1*r;

			sum=sum+r1;
		}
		if(sum==a[i])
			c1++;
	
	}
	return c1;
}


