//WAP to delete odd digits from num i/p=2343356  o/p=246

#include<stdio.h>
void main()
{
int n,r,l,sum;
printf("enter any number\n");
scanf("%d",&n);

for(sum=0,l=1;n ;n/=10)
{
r=n%10;
if(r%2==0)
{
sum=sum+r*l;
l=l*10;
}

}
printf("after deleting odd digits number is: %d\n",sum);

}
