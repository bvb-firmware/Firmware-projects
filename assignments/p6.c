/* * * * * * *
   1 3 5 7 9
   * * * *
   1 3 5
   * *
   1       */



#include<stdio.h>
void main()
{
int i,j,row;
printf("enter no.of rows to print\n");
scanf("%d",&row);


for(i=0;i<row;i++)
{
for(j=0;j<(row)-i;j++)
{
if(i%2==0)
printf("* ");
else
printf("%d ",2*j+1);

}
printf("\n");
}
}
