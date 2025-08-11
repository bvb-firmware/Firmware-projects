//WAP to count prime digits using do-while loop of a given num

#include<stdio.h>
void main()
{
int num,i,c,r,temp,r1;
printf("enter any number\n");
scanf("%d",&num);


c=0;
do
{
	r=num%10;
	num=num/10;
	i=2;
	while(i<=r)
	{
	if(r%i==0)
	break;
	
		i++;
	}
if(r==i)
c++;
}while(num);

printf("count=%d\n",c);
}
