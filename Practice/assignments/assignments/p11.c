/* 
1 2 3 4 *
1 2 3 * 5
1 2 * 4 5 
1 * 3 4 5
* 2 3 4 5   */

#include<stdio.h>
void main()
{
int i,j,row,c;
printf("enter no.of rows\n");
scanf("%d",&row);

for(i=0,c=row;i<row;i++)
{
	for(j=1;j<=row;j++)
	{  
		if(c==j)
		{
			printf("* ");
		         c--;
		}
		else
			printf("%d ",j);
		
	}
	printf("\n");

}


}
