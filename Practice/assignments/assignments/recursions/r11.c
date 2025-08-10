/*  WAP in C using Recursive function to reverse
    array elements and print array in main .
    i/p: int a[6]={11,22,33,44,55,66};
    o/p: a[6]={66,55,44,33,22,11};
    void rec_fun_rev_arr( int *p, int *q ); */

#include<stdio.h>
void rec_fun_rev_arr(int *,int *);
void main()
{
	int n;
	printf("enter no.of array elements\n");
	scanf("%d",&n);

	int a[n],i;
	
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("before\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");

	rec_fun_rev_arr(a,a+n-1);
	printf("after\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");


}

void rec_fun_rev_arr(int *a,int *p)
{
	int t;
	if(a<p)
	{
		t=*a;
		*a=*p;
		*p=t;

		a++;
		--p;
		rec_fun_rev_arr(a,p);
	}
}

