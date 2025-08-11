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

for(i=0,ch='A';i<row;i++,ch++)
{

	for(j=0;j<row-i-1;j++)
		printf("   ");

	for(k=0;k<i+1;k++)
		printf("%c  ",ch);

	printf("\n");
}


}




















