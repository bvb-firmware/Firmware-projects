//WAP to print first 100 prime numbers

#include<stdio.h>
void main()
{
int n,i,c;
printf("enter num to start\n");
scanf("%d",&n);

for(n,c=0;n;n++)
{
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;

	}
	if(n==i)
	{
		c++;
		printf("%d %d\n",n,c);
	}
	if(c==100)
		break;
}

}
