/*  WAP in C using Recursive function to check
given num is perfect or not .
i/p: n= 6 o/p: yes perfect
int rec_fun_perfect( int ); */


#include<stdio.h>
int rec_fun_perfect(int);
void main()
{
	int n,p;
	printf("enter any  number\n");
	scanf("%d",&n);

	p=rec_fun_perfect(n);
	if(p==1)
		printf("yes, %d is perfect\n",n);
	else
		printf("no, %d is not perfect\n",n);

}
int rec_fun_perfect(int n)
{
	static int sum=0,i=1;
	if(i<n)
	{
		if(n%i==0)
			sum=sum+i;
		i++;
		rec_fun_perfect(n);

	}
	if(sum==n)
		return 1;
	else
		return 0;
}


