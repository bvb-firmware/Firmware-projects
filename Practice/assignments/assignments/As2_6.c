//WAP to print factorial of num using while loop

#include<stdio.h>
void main()
{
int num,i,f;
printf("enter any number\n");
scanf("%d",&num);


f=1;
i=1;
while(i<=num)
{
f=f*i;
i++;
}
printf("factorial of %d = %d\n",num,f);
}
