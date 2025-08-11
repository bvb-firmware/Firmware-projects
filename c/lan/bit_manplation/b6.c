//WAP to find given number is divisible by 8 or not.

#include<stdio.h>
void main()
{
int num;
printf("enter any number\n");
scanf("%d",&num);

if(num&7)
printf("not divisible by 8\n");
else
printf("divisible by 8\n");

}
