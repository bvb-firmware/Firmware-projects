//WAP to swap two numbers using bit wise operator

#include<stdio.h>
void main()
{
int n1,n2;
printf("entert any numbers\n");
scanf("%d%d",&n1,&n2);

n1=n1^n2;
n2=n1^n2;
n1=n1^n2;

printf("after swapping: %d %d\n",n1,n2);
}
