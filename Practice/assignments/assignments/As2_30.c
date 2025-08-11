//WAP to print and count of strong numbers b/w 1 and 222

#include<stdio.h>
void main()
{
int n1,n2,temp,r,r1,sum,c,i;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);

for(n1,c=0;n1<=n2;n1++)
{
	for(temp=n1,sum=0;temp;temp/=10)
	{
		r=temp%10;
		for(i=1,r1=1;i<=r;i++)
		{
			r1=r1*i;
		}
		sum=sum+r1;

	}
	if(sum==n1)
	{
		c++;
		printf("strong=%d  count=%d\n",n1,c);
	}
}


}
