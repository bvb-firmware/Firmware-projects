//WAP to print factor of given number using goto

#include<stdio.h>
void main()
{
int num,i;
printf("enter any number\n");
scanf("%d",&num);


i=1;
l1:
if(num%i==0)
printf("%d\n",i);
i++;
if(i<=num)
goto l1;
}
