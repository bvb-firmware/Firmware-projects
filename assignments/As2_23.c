//WAP to print and count armstrong numbers b/w 6 to 666 using for loop inside while loop

#include<stdio.h>
void main()
{
int n1,n2,temp,temp1,r,r1,c,c1,i,sum;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);


for(n1,c1=0;n1<=n2;n1++)
{
	for(temp=n1,c=0;temp;temp/=10) // to know how many digits is n1
	{
		c++;
	}

	sum=0;
	temp1=n1;
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
		printf("armstrong=%d count=%d\n",n1,c1);
	}


}
}
