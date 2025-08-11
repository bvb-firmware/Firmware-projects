/* WAP in C using Recursive function to sum of
even digits of given any int number .
i/p: n= 2345 o/p: sum= 6
int rec_fun_sum( int num ); */


#include<stdio.h>
int rec_fun_sum(int);
void main()
{
	int n,sum;
	printf("enter any number\n");
	scanf("%d",&n);
	sum=rec_fun_sum(n);
	printf("sum=%d\n",sum);

}
int rec_fun_sum(int n)
{
	static int r,sum=0;
	if(n)
	{
		r=n%10;
		if(r%2==0)
			sum=sum+r;
		rec_fun_sum(n/10);
	}
	else
		return sum;
}

