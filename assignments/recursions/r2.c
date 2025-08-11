/*  WAP in C using Recursive function to count
    digit less than 6 of given any int number .
    i/p: n= 2658942 o/p: count= 4
    int rec_fun_count( int num );*/

#include<stdio.h>
int rec_fun_count(int);
void main()
{
	int n,c;
	printf("enter any number\n");
	scanf("%d",&n);

	c=rec_fun_count(n);
	printf("count=%d\n",c);
}
int rec_fun_count(int n)
{
	static int len=0;
	if(n)
	{
		if((n%10)<6)
			len++;
		rec_fun_count(n/10);


	}
	else 
		return len;
}

