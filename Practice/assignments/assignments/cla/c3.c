//WAP to print prime numbers between 11 to 66 using cla i/p: ./a.out 11 66

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	int temp,i,r,r1;
	for(r=atoi(argv[1]),r1=atoi(argv[2])  ;r<=r1;r++)
	{
		for(temp=r,i=2;i<=temp;i++)
		{
			if(temp%i==0)
				break;

		}
		if(temp==i)
			printf("%d ",temp);
	}

	printf("\n");
}
