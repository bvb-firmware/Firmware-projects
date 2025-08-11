/* wAP in C using Recursive function to count
array element less than 99 more than 39.
i/p: int a[6]={71,53,145,21,49,153};
o/p: count = 3
int rec_fun_count_arr( int *p, int ele ); */

#include<stdio.h>
int rec_fun_arr(int *,int);
void main()
{
	int n;
	printf("enter no.of array elements\n");
	scanf("%d",&n);

	int a[n],i,c;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	c=rec_fun_arr(a,n);
	printf("count=%d\n",c);

}
int rec_fun_arr(int *a,int n)
{
	static int c=0;
	if(*a)
	{
		if(*a>39 && *a<99)
			c++;
		rec_fun_arr(a+1,n);

	}
	else
		return c;
}
