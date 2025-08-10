//WAP to count perfect digit using while loop of a given num

#include<stdio.h>
void main()
{
int num,c,i,r,sum;
printf("enter any number\n");
scanf("%d",&num);

c=0;
while(num)
{
	r=num%10;
	num=num/10;

	i=1;
	sum=0;
	while(i<r)
	{
		if(r%i==0)
			sum=sum+i;
		i++;
	}
	if(sum==r)
		c++;


}

printf("count=%d\n",c);

}
