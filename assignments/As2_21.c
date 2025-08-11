//WAP to print 1st 5 palindrome numbers from 55.
#include<stdio.h>
void main()
{
int n,temp,rev,r,c;
printf("enter the number to start\n");
scanf("%d",&n);

for(n,c=0;n;n++)
{
	for(temp=n,rev=0;temp;temp/=10)
	{
		r=temp%10;
		rev=rev*10+r;
	}
	if(n==rev)
	{
		c++;
		printf("palindromes=%d count=%d\n",n,c);

	}
	if(c==5)
		break;
}


}
