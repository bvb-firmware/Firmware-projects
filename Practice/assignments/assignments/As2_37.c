//WAP to delete a digit from a number with only 1 for loop i/p=254557 o/p=247

#include<stdio.h>
void main()
{
int n,d,r,sum,l;
printf("enter any number and digit to delete\n");
scanf("%d%d",&n,&d);

for(sum=0,l=1;n;n/=10)
{
r=n%10;
if(r!=d)
{
sum=sum+r*l;
l=l*10;
}

}
printf("after deleting the digit num=%d\n",sum);

}
