/* 1
   1 3
   1 3 5
   1 3 5 7   */

#include<stdio.h>
void main()
{
	int i,k,row;
	printf("enter no.of row to print\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		for(k=0;k<=i;k++)
		{
		
				printf("%d ",2*k+1);


		}
		printf("\n");

	}
printf("\n\n");

/*for(i=1;i<=row;i++)
{
for(k=1;k<=i+2;k++)
printf("%d ",k++);

printf("\n");
}

*/

}
