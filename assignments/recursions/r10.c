/*  WAP in C using Recursive function to sum of
half of array element.
i/p: int a[6]={10,20,30,44,55,66};
o/p: sum = 60
int rec_fun_sum_arr( int *p, int ele );*/

#include<stdio.h>
int rec_fun_arr_sum(int *,int);
void main()
{
	int n;
	printf("enteer no,of array elements\n");
	scanf("%d",&n);
	int a[n],i,sum;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));


	sum=rec_fun_arr_sum(a,n);
	printf("sum=%d\n",sum);




}
int rec_fun_arr_sum(int *a,int n)
{
	static int c=0,sum=0;
	if(c<(n/2))
	{
		sum=*a+sum;
		c++;
		rec_fun_arr_sum(a+1,n);

	}
	else
		return sum;


}
