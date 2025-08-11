/*       1
       1 2 3
     1 2 3 4 5   */


#include<stdio.h>
void main()
{
int i,j,row,k;

printf("enter no.of rows\n");
scanf("%d",&row);

for(i=0;i<=(row/2);i++)
{
	for(j=0;j<(row/2)-i;j++)
		printf("  ");
	for(k=0;k<i*2+1;k++)
		printf("%d ",k+1);
	printf("\n");


}

for(i=0;i<(row/2);i++)
{
	for(j=0;j<=i;j++)
		printf("  ");
	for(k=0;k<row-i*2-2;k++)
		printf("%d ",k+1);
	printf("\n");


}
}
