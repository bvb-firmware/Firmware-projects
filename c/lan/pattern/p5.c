
#include<stdio.h>
void main()
{
int i,j,row;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<=(row/2);i++)
{
	for(j=0;j<i*2+1;j++)
	{
		if(j%2==0)
			printf("%d",i+1);
		else
			printf("*");

	}
	printf("\n");
}

for(i=(row/2)-1;i>=0;i--)
{
	for(j=0;j<i*2+1;j++)
	{
		if(j%2==0)
			printf("%d",i+1);
		else
			printf("*");

	}
	printf("\n");
}
}
