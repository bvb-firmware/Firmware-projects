//WAP to delete prime digits from num i/p=3445625  o/p=446

#include<stdio.h>
void main()
{
int n,r,l,sum,i;
printf("enter any number\n");
scanf("%d",&n);

for(sum=0,l=1;n ;n/=10)
{
	r=n%10;
	for(i=2;i<r;i++)
	{
		if(r%i==0)
				break;
	}
	if(r!=i)
	{
		sum=sum+r*l;
		l=l*10;
	}

}
printf("after deleting prime digits number is: %d\n",sum);

}
