/* 1
   2 4
   3 6 9
   4 8 12 16
   5 10 15 20 25 */

#include<stdio.h>
void main()
{
int i,j,k,row;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
	for(j=0,k=i;j<i+1;j++)
	{
		printf("%d ",k+=1);
		k=k+i;
	}
	printf("\n");
}

}

