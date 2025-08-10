//WAP to check given number is +ve or -ve ior 0 using switch case.

#include<stdio.h>
void main()
{
int num,n;
printf("enter any number\n");
scanf("%d",&num);

if(num>0)
n=1;
else if(num<0)
n=2;
else
n=0;
switch(n)
{
case 1: printf("positive\n");
          break;
case 2: printf("negative\n");
          break;
default: printf("zero\n");
           break;

}


}

