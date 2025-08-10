/*   WAP in C using function to reverse all elements
of array ,store results in another array.
i/p: int a[6]={12,42,123,34,78,414};
o/p: int b[6]={21,24,321,43,87,414};
void rev_fun(int *a,int *b , int ele ); */

#include<stdio.h>
//void rev_fun(int *,int*,int);
int * rev_fun(int *,int*,int);
void main()
{
	int n;
	printf("enteer no,of array elaments\n");
	scanf("%d",&n);

	int a[n],b[n],i,*p;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	//rev_fun(a,b,n);
	p=rev_fun(a,b,n);
	for(i=0;i<n;i++)
	printf("%d ",*p++);
	printf("\n");


}
//void rev_fun(int *a,int *b,int n)
int * rev_fun(int *a,int *b,int n)
{
	int i,j,rev,r;
	for(i=0;i<n;i++)
	{
		for(rev=0;a[i];a[i]/=10)
		{
			r=a[i]%10;
			rev=rev*10+r;
		}
		b[i]=rev;
		//printf("%d ",b[i]);

	}

	//printf("\n");
	return b;

}
