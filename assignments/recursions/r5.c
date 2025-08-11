/*   WAP in C using Recursive function to reverse
the number of given any int number .
i/p: n= 23456 o/p: rev = 65432
int rec_fun_rev( int );   */

#include<stdio.h>
int rec_fun_rev(int);
void main()
{
	int n,rev;
	printf("enter any numbewr\n");
	scanf("%d",&n);

	rev=rec_fun_rev(n);
	printf("reverse=%d\n",rev);
}
int rec_fun_rev(int n)
{
	static 	int rev=0;
	if(n)
	{
		rev=rev*10+(n%10);
		rec_fun_rev(n/10);
	}
	else
		return rev;


}
