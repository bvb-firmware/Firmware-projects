//WAP to print 1st armstrong numbers from 5

#include<stdio.h>
void main()
{
int n,temp,temp1,r,r1,i,c,c1,sum;
printf("enter the number to start\n");
scanf("%d",&n);

for(n,c1=0;n;n++)
{
	for(temp=n,c=0;temp;temp/=10,c++);
	for(temp1=n,sum=0;temp1;temp1/=10)
	{
		r=temp1%10;
		for(i=1,r1=1;i<=c;i++)
		{
			r1=r*r1;
		}
		sum=sum+r1;
	}
	if(sum==n)
	{
		c1++;
		printf("armstrong=%d count=%d\n",n,c1);
	}
	if(c1==5)
		break;
}


}
