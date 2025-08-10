//WAP to print count of  even digits using do-while loop of a given number

#include<stdio.h>
void main()
{
int num,r,c,i;
printf("enter any number\n");
scanf("%d",&num);

c=0;
do
{
r=num%10;
if(r%2==0)
c++;
num=num/10;
}while(num);

printf("count=%d\n",c);
}
