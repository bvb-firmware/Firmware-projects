/*  WAP in C using Recursive function to product
of digit factor of 3 given any int number .
i/p: n= 345638 o/p: product= 54
int rec_fun_product( int num ); */

#include<stdio.h>
int rec_fun_product(int);
void main()
{
	int n,p;
	printf("enter any number\n");
	scanf("%d",&n);

	p=rec_fun_product(n);
	printf("product=%d\n",p);

}
int rec_fun_product(int n)
{
	static int p=1,r;
	if(n)
	{
		r=n%10;
		if(r%3==0)
			p=p*r;
		rec_fun_product(n/10);

	}
	else if(p>1)
		return p;
	else
		return 0;


}

