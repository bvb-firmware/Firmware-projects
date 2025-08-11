// WAP to print product of last two digits

#include<stdio.h>
void main()
{
int num,temp,mul=1,c=0;
printf("enter any number\n");
scanf("%d",&num);

l1:
temp=num%10;
mul=mul*temp;
num=num/10;
c++;
if(c==1)
goto l1;


printf("product of last two digits is: %d\n",mul);

}
