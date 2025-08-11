//WAP to print alternative palindromes b/w 112 and 222 using while loop

#include<stdio.h>
void main()
{
int n1,n2,temp,rev,r,c;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);


c=0;
while(n1<=n2)
{ 
	temp=n1;
	rev=0;
	while(temp)
	{
		r=temp%10;
		rev=rev*10+r;
		temp/=10;
	}
	if(n1==rev)
	{	
		c++;
	if(c%2)
		printf("palindromes=%d  count=%d\n",n1,c);
	
	}
	n1++;
}


}
