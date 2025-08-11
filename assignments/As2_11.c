//WAP to check given number is strong or not using while loop

#include<stdio.h>
void main()
{
int num,r,temp,r1,i,sum;
printf("enter any number\n");
scanf("%d",&num);
/*
for(temp=num,sum=0;temp;temp=temp/10)
{
	r=temp%10;
	for(i=1,r1=1;i<=r;i++)
	{
		r1=i*r1;
	}	
	sum=sum+r1;
}
printf("sum= %d\n",sum);
if(num==sum)
	printf("strong number\n");
	else
	printf("not strong number\n");
*/

temp=num;
sum=0;
/*
while(temp)
{
	r=temp%10;
	temp=temp/10;
	i=1;
	r1=1;
	while(i<=r)
	{
		r1=r1*i;
		i++;
	}
	sum=sum+r1;
}
printf("sum=%d\n",sum);
if(num==sum)
	printf("strong number\n");
	else
	printf("not strong number\n");

                                                */
do
{
	r=temp%10;
	temp=temp/10;
	i=1;
	r1=1;
	while(i<=r)
	{
		r1=r1*i;
		i++;
	}
	sum=sum+r1;
}while(temp);
printf("sum=%d\n",sum);
if(num==sum)
	printf("strong number\n");
	else
	printf("not strong number\n");

}
