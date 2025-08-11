/*      #
      A B
    # # #
  A B C D
# # # # #   */


#include<stdio.h>
void main()
{
int i,j,k,row;
char ch;
printf("enter no.of rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
	for(j=0;j<(row-1)-i;j++)
		printf("  ");

	for(k=0,ch='A';k<i+1;k++) {
		if(i%2==0)
			printf("# ");
		else
			printf("%c ",ch++); }
	printf("\n");
}


}
