/* WAP in C using function to delete 1st digits of
all elements in array .
i/p: int a[6]={12,142,1234,314,78,414};
o/p: int a[6]={2,42,234,34,8,14};
void del_fun(int *a, int ele ); */

#include<stdio.h>
void del_fun(int *,int);
void main()
{
	int n;
	printf("enter no,of array elements\n");
	scanf("%d",&n);

	int a[n],i;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	del_fun(a,n);

}
void del_fun(int *a,int n)
{
	int i,j,k,temp,c,sum,r,l;
	for(i=0;i<n;i++)
	{
		for(c=0,temp=a[i];temp;temp/=10,c++);
		for(sum=0,l=1,k=0 ; k<c-1 ; k++,a[i]/=10)
		{
			r=a[i]%10;
			sum=sum+l*r;
			l=l*10;
		}

		a[i]=sum;
		printf("%d ",a[i]);
	}
//	for(i=0;i<n;i++)
//		printf("%d ",a[i]);
	printf("\n");

}






