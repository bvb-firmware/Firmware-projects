//WAP to find product of odd digts using for loop of a given num

#include<stdio.h>
void main()
{
int num,r,mul;
printf("enter any number\n");
scanf("%d",&num);

for(num,mul=1;num;num=num/10)
{
r=num%10;
if(r%2)
mul=mul*r;

}
printf("product=%d\n",mul);

}
