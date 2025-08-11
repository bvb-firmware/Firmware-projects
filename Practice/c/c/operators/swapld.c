#include<stdio.h>
void main()
{
//swapping of two digit number ex:91  to   19
int num,r;
printf("enter any two or more digit number..\n\n");
scanf("%d",&num);


printf("before swapping the num=%d\n",num);

r=num%10;
num=num/10;
num=r*10+num;

printf("after swapping num=%d\n",num);


//swapping the last two digits of a given number
int f,r1,r2;
f=123456;

printf("before swapping the f=%d\n",f);

r1=f%10;
f=f/10;
r2=f%10;
f=f/10;
f=f*10+r1;
f=f*10+r2;

printf("after swapping f=%d\n",f);
}
