/*WAP in C using Recursive function to check
given num is prime or not .
i/p: n= 17 o/p: yes prime
int rec_fun_prime ( int ,int );*/



#include<stdio.h>
int rec_fun_prime(int,int);
void main()
{
	int n,p,i=1;
//	static int i=1;
	printf("enter any number\n");
	scanf("%d",&n);

	p=rec_fun_prime(n,i);
	if(p==2)
		printf("yes, %d is prime\n",n);
	else
		printf("no, %d is not prime\n",n);

}
int rec_fun_prime(int n,int i)
{	
	static int c=0;
	if(i<=n)
	{
		if(n%i==0)
		c++;
		i++;
	rec_fun_prime(n,i);
	}
	else
		return c;

}
