//WAP to print strong numbers between 1 to 150 i/p: ./a.out 1 150

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	int i,temp,r,r1,r2,sum,temp1;
	for(r1=atoi(argv[1]),r2=atoi(argv[2]); r1<=r2 ; r1++)
	{
		for(temp1=r1,sum=0;temp1;temp1/=10)
		{
			temp=temp1%10;
		for(r=1;temp;temp--)
			r=temp*r;
		sum=sum+r;
		}
		if(sum==r1)
			printf("%d ",r1);
	}
	printf("\n");

}
