/* 1
   2 4
   3 6 9
   4 8 12 16
   5 10 15 20 25 */

#include<stdio.h>
void main()
{
int i,j,k,row,l;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
	for(j=0;j<i+1;j++)
	{
		printf("%d",j+1);

	}

	for(k=0;k<row-1-i;k++)
		printf(" ");
	for(k=0,l=row;k<row-1-i;k++,l--)
		printf(" ");
	for(j=0;j<i+1;j++)
	{
		printf("%d",l--);

	}
	printf("\n");
}
}
