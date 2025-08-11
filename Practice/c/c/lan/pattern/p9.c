
#include<stdio.h>
void main()
{
int i,j,row,k;

printf("enter no.of rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
	for(j=0;j<row-1-i;j++)
		printf("  ");
	for(k=0;k<i*2+1;k++)
		printf("%d ",k+1);
	printf("\n");


}

}
