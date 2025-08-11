//WAP to print alternative armstrong numbers b/w 4 and 444 using whileloop

#include<stdio.h>
void main()
{
int n1,n2,temp,temp1,r,r1,i,c,c1,sum;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);

c1=0;
while(n1<=n2)
{
	temp=n1;
	c=0;
	while(temp)
	{
		c++;
		temp/=10;
	}
	temp1=n1;
	sum=0;
	while(temp1)
	{
		r=temp1%10;
		temp1/=10;
		i=1;
		r1=1;
		while(i<=c)
		{
			r1=r1*r;
			i++;
		}
		sum=sum+r1;
	}
	if(n1==sum)
	{
		c1++;
		if(c1%2)
			printf("armstrong=%d count=%d\n",n1,c1);
	}
	n1++;
}



}
