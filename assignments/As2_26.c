//WAP to print and count of perfect numbers b/w 2 and 502

#include<stdio.h>
void main()
{
int n1,n2,temp,c,r,r1,i,sum;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);


for(n1,c=0;n1<=n2;n1++)
{
	for(i=1,sum=0;i<n1;i++)
	{
		r=n1%i;

		if(r==0)
			sum=sum+i;
	}
	if(sum==n1)
	{
		c++;
		printf("perfect=%d count=%d\n",n1,c);
	}


}


}
