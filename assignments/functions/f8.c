/* WAP in C using function to merge 2 array data
in 3rd array .
i/p: int a[6]={2,3,4}, b[3]={11,22,33};
o/p: int c[6]= {2,11,3,22,4,33};
void in_fun(int *a, int *b, int *c,
int ele1,int ele2, int ele3 ); */


#include<stdio.h>
void merg_fun(int *,int *,int *,int,int);
void main()
{
	int n,n1;
	printf("enter no.of elements in first and second array\n");
	scanf("%d%d",&n,&n1);

	int a[n],b[n1],c[n+n1],i;
	printf("enter a and b array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n1;i++)
		scanf("%d",b+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	for(i=0;i<n1;i++)
		printf("%d ",*(b+i));
	printf("\n");

	merg_fun(a,b,c,n,n1);

	for(i=0;i<n1+n;i++)
		printf("%d ",*(c+i));
	printf("\n");



}

/* void merg_fun(int *a,int *b,int *c,int n,int n1)
{
	int i,k;

	for(i=0,k=0; ;i++)
	{
		if(i!=n && i!=n1)
		{
			c[k++]=a[i];
			c[k++]=b[i];

		}
		else
			break;
	}

	if(i!=n)
	{
		for(i;i<n;i++)
			c[k++]=a[i];
	}

	else if(i!=n1)
	{
		for(i;i<n1;i++)
			c[k++]=b[i];

	}



}*/


void merg_fun(int *a,int *b,int *c,int n,int n1)
{
int i,j;
for(i=0,j=0;i<n+n1;i++)
{
if(i<n)
c[j++]=a[i];
if(i<n1)
c[j++]=b[i];
}



}







