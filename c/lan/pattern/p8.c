/* 1
   2 6
   3 7 10
   4 8 11 13
   5 9 12 14 15 */

#include<stdio.h>
void main()
{
int i,j,k,row;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
	for(j=0,k=i;j<1+i;j++)
	{
		printf("%d ",k+=1);
		k=k+(row-2)-j;
		
	}
	printf("\n");
}


}
