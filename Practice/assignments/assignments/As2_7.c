//WAP to check given num is prime or not using goto
#include<stdio.h>
void main()
{
int num,c,i;
printf("enter any number\n");
scanf("%d",&num);

i=1;
c=0;
l1:
if(num%i==0)
c++;
i++;
if(i<=num)
goto l1;

if(c==2)
printf("prime\n");
else
printf("not prime\n");
}
