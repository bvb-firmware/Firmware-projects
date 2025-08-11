
#include<stdio.h>
void main()
{
int i,j,row;
printf("enter no.of rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
	for(j=0;j<i+1;j++)
	{
		if(i%2==0)
			printf("%d ",j*2+1);
		else
			printf("%d ",j*2+2);

	}
	printf("\n");
}


}
