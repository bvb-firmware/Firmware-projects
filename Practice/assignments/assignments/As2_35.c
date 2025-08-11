//WAP to delete first two digits of a given number i/p=123456   o/p=3456
#include<stdio.h>
void main()
{
int n,i,r,sum,c,l,digits;
printf("enter any number and no.of digits to delete\n");
scanf("%d%d",&n,&digits);


for(sum=0,c=0,l=1;n;n/=10)
{
	r=n%10;
	c++;
	if(c<digits)
	{
		sum=sum+r*l;
		l=l*10;
	}

}
printf("after deleting digits number is: %d\n",sum);
}
