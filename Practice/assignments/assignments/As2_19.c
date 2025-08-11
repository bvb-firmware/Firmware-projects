//WAP to print alternative prime numbers between 5 to 35 using while loop

#include<stdio.h>
void main()
{
int n1,n2,i,c;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);

for(n1,c=0;n1<=n2;n1++)
{
	for(i=2;i<=n1;i++)
	{
		if(n1%i==0)
			break;

	}
	if(n1==i)
	{
		c++;
		if(c%2)
			printf("prime=%d\n",n1);
	}

}



}
