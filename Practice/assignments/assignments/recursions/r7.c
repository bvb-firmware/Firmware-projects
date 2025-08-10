/* WAP in C using Recursive function to count set
bit in given num. // pass address of variable
i/p: n= 63 o/p: count: 6
int rec_fun_count( int * ); */


#include<stdio.h>
int rec_fun_set(int *);
void main()
{
	int n,c;
	printf("enter any number\n");
	scanf("%d",&n);

	c=rec_fun_set(&n);
	printf("set bit count=%d\n",c);

}
int rec_fun_set(int *n)
{
	static int pos=31,c=0;
	if(pos>=0)
	{
		if(*n>>pos&1)
			c++;
		pos--;
		rec_fun_set(n);
	}
	else
		return c;
}
