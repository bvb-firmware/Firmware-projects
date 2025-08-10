//WAP to print and count of palindromes b/w 88 and 131

#include<stdio.h>
void main()
{
int n1,n2,temp,r,rev,c;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);

for(n1,c=0;n1<=n2;n1++)
{
	for(temp=n1,rev=0;temp;temp=temp/10)
	{
		r=temp%10;
		rev=rev*10+r;

	}
	if(rev==n1)
	{
		c++;
		printf("palindrome=%d  count=%d\n",n1,c);
	}
}


}

