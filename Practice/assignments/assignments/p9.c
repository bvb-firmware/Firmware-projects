/*         E
	 1 2
       C D E
     1 2 3 4
   A B C D E   */


#include<stdio.h> 
void main()
{
	int i,j,k,row;
	char ch;
	printf("enter no.of rows\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		for(j=0,ch='A';j<(row-1)-i;j++,ch++)
			printf("  ");

		for(k=0;k<1+i;k++,ch++)
		{
			if(i%2==0)
				printf("%c ",ch);
			else
				printf("%d ",k+1);
		}

		printf("\n");
	}

}
