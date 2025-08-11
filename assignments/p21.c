/*      Z
      Z Y
    Z Y X
  Z Y X W
Z Y X W V  */

#include<stdio.h>
void main()
{
int i,j,k,row;
char ch;
printf("enter the rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{

	for(j=0;j<i;j++)
		printf("  ");

	for(k=0,ch='P';k<(row*2-1)-(2*i);k++)
		printf("%c ",ch++);

	printf("\n");
}


}




















