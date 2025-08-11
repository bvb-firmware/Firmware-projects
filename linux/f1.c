#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
void main()
{
int m,n,o;
printf("enter any two numbers\n");
scanf("%d%d",&m,&n);
//direct call
o=sum(m,n);
printf("sum=%d\n",o);
o=sub(m,n);
printf("sub=%d\n",o);
o=mul(m,n);
printf("mul=%d\n",o);
o=div(m,n);
printf("div=%d\n",o);

//indirect call;
int (*p)(int,int);
p=sum;
//printf("p=%ld\n",p);

o=(*p)(m,n);
printf("sum=%d\n",o);

p=sub;
o=p(m,n);
printf("sub=%d\n",o);

p=mul;
o=(*p)(m,n);
printf("mul=%d\n",o);

p=div;
o=(*p)(m,n);
printf("div=%d\n",o);

}

int sum(int a,int b)
{
return a+b;
}

int sub(int a,int b)
{
return a-b;
}

int mul(int a,int b)
{
return a*b;
}

int div(int a,int b)
{
return a/b;
}
