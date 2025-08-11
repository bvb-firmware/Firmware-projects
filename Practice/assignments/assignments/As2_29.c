//WAP to print 1st 2 perfect numbers from 3

#include<stdio.h>
void main()
{
int n,i,r,c,sum;
printf("enter the number to start\n");
scanf("%d",&n);


c=0;
while(n)
{
	sum=0;
	i=1;
	while(i<n)
	{
		if(n%i==0)
			sum=sum+i;
		i++;

	}
	if(sum==n)
	{
		c++;
		printf("perfect=%d count=%d\n",n,c);
	}
	if(c==2)
		break;
	n++;
}

}
