/* WAP in C using function to sum of digit of all
elements in array , store results in another array.
i/p: int a[6]={1,22,121,34,78,444};
o/p: int b[6]= {1, 4, 4, 7, 15, 12 };
void sum_fun(int *a,int *b , int ele ); */

#include<stdio.h>
//int * sum_fun(int *,int *,int);
void sum_fun(int *,int *,int);
void main()
{
	int n;
	printf("enter no.of array elements\n");
	scanf("%d",&n);

	int a[n],b[n],i,*p;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
		printf("\n");
		
	sum_fun(a,b,n);
	/*p=sum_fun(a,b,n);
	for(i=0;i<n;i++)
	printf("%d ",*p++);
	printf("\n"); */

}
void sum_fun(int *a,int *b,int n)
//int * sum_fun(int *a,int *b,int n)
{
	int i,sum,r;

	for(i=0;i<n;i++)
	{
		for(a[i],sum=0;a[i];a[i]/=10)
		{
			r=a[i]%10;
			sum=sum+r;
		}
		b[i]=sum;
		printf("%d ",b[i]);
	}
	printf("\n");

//return b;
}
