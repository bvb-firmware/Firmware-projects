//WAP to print palindrome numbers b/w 1 to 500 

#include<stdio.h>
void main()
{
int n1,n2,r,rev,temp;

printf("enter the range\n");
scanf("%d%d",&n1,&n2);

for(n1;n1<=n2;n1++)
{
for(temp=n1,rev=0;temp;temp/=10)
{
r=temp%10;
rev=rev*10+r;
}
if(rev==n1)
printf("%d\n",n1);

}

}
