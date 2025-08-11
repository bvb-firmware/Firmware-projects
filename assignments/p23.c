/*      Z
      Z Y
    Z Y X
  Z Y X W
Z Y X W V  */

#include<stdio.h>
void main()
{
int i,j,k,row,l;
char ch;
printf("enter the rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{

	for(j=0,l=row;j<i;j++,l--)
		printf("  ");

	for(k=0,ch='A';k<row-i;k++)
	{
	 if(i%2==0)
	 	printf("%d ",l--);
	else
		printf("%c ",ch++);
	}

	printf("\n");
}


}




















