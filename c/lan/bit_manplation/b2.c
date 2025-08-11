//WAP to find given number is even or odd using bitwisw operator.

#include<stdio.h>
void main()
{
int num;
printf("enter any number\n");
scanf("%d",&num);

if(num&1)
printf("odd\n");
else
printf("even");

}
