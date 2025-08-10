#include<stdio.h>
void main()
{
	int num,temp,r,i,rev=0;
	printf("enter any number\n");
	scanf("%d",&num);
	/*if(num>0)
	{

		for(temp=num;temp;temp/=10)
		{
			r=temp%10;
			rev=rev*10+r;
		}
		for(rev;rev;rev/=10)
		{
			i=rev%10;
			if(i%3==0)
				printf("%d",i=1);
			else
				printf("%d",i);
		}

		printf("\n");
	}
	else
		printf("invalid input\n");   */




for(num;num;num/=10)
{
r=num%10;
if(r%3==0)
printf("%d",r=1);
else
printf("%d",r);


}
}


