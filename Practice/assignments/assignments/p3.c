/* 123456
   12345 
   1234
   123 
   12
   1   */

#include<stdio.h>
void main()
{
	int i,k,row;
	printf("enter no.of row to print\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		for(k=1;k<=row-i;k++)
			printf("%d",k);

		printf("\n");

	}



}
