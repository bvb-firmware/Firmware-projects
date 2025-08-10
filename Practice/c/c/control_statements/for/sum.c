// WAP to print the sum of first and last digit of a given number

#include<stdio.h>
void main()
{
int num,temp,r,l,f,rev=0,sum;
printf("Enter any number\n");
scanf("%d",&num);

l=num%10;
printf("last digit of %d is : %d\n",num,l);

for(temp=num ;temp ;temp=temp/10)
{
   r=temp%10;
   rev=rev*10+r;

}
printf("rev=%d\n",rev);

f=rev%10;
printf("first digit of %d is : %d\n",num,f);
 sum=f+l;
printf("sum=%d\n",sum);

}





































