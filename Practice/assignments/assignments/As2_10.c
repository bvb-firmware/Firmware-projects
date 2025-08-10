//WAP to print given number is armstrong or not using for loop

#include<stdio.h>
void main()
{
	int num,r,i,r1,temp1,sum,temp,c;
	printf("enter any number\n");
	scanf("%d",&num);
	
	for(temp=num,c=0;temp;temp=temp/10,c++);
	
       for(temp1=num,sum=0;temp1;temp1=temp1/10)
	{
		r1=temp1%10;
		for(i=0,r=r1;i<c-1;i++)
		{
			r1=r1*r;
		}


		sum=sum+r1;

	}
	if(num==sum)
		printf("armstrong number\n");
	else
		printf("not armstrong\n");


}
