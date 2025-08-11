//WAP to print first 5 prime numbers from 5.

#include<stdio.h>
void main()
{
int n1,c,i;
printf("enter any number to start\n");
scanf("%d",&n1);

for(n1,c=0;n1;n1++)
{
	for(i=2;i<=n1;i++)
	{
		if(n1%i==0)
			break;
	}
	if(n1==i)
	{
		c++;
		printf("prime=%d count=%d\n",n1,c);
	}
	if(c==5)
 	break;
}


}
