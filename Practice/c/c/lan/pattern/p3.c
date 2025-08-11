/*      *
       * *
      * * *
     * * * *
    * * * * * 
     * * * *
      * * *
       * *
        *       */


#include<stdio.h>
void main()
{
int i,j,k,row;
printf("enter no.of rows\n");
scanf("%d",&row);

for(i=0;i<=(row/2);i++)
{
	for(j=0;j<i;j++)
		printf(" ");
	for(k=0;k<=(row/2)-i;k++)
		printf("* ");
		printf("\n");
		

}

for(i=0;i<(row/2);i++)
{
	for(j=0;j<(row/2)-1-i;j++)
		printf(" ");
	for(k=0;k<=i+1;k++)
		printf("* ");
	printf("\n");
}

}




