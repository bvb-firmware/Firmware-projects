#include<stdio.h>
int sum(int,float);
int sub(int,float);
int mul(int,float);
int div(int,float);
void main()
{
	int i,k;
	float j;
	printf("enter any two numbers\n");
	scanf("%d%f",&i,&j);
	int (*p[4])(int,float)={sum,sub,mul,div};
	//for(i=0;i<3;i++)
	
	p[0]=sum;
	k=(*p[0])(i,j);
	printf("sum=%d\n",k);
	
	p[1]=sub;
	k=(*p[1])(i,j);
	printf("sub=%d\n",k);
	
	p[2]=mul;
	k=(*p[2])(i,j);
	printf("mul=%d\n",k);
	
	p[3]=div;
	k=(*p[3])(i,j);
	printf("div=%d\n",k); 
}

int sum(int a,float b)
{
	return a+b;
}

int sub(int a,float b)
{
	return a-b;
}

int mul(int a,float b)
{
	return a*b;
}

int div(int a,float b)
{
	return a/b;
}
