/*  WAP in C using Recursive function to sum of
last 3 digits of given any int number .
i/p: n= 23456 o/p: sum= 15
int rec_fun_sum( int num , int c );  */

#include<stdio.h>
int rec_fun_sum(int,int);
void main()
{
	int n,sum,c;
	printf("enter any number and no.of digits to do sum\n");
	scanf("%d%d",&n,&c);

	sum=rec_fun_sum(n,c);
	printf("sum=%d\n",sum);

}
int rec_fun_sum(int n,int c)
{
	static int sum=0,r,c1=0;
	if(c1<c)
	{
		c1++;
		sum=sum+(n%10);
		rec_fun_sum(n/10,c);
	}
	else
		return sum;

}
