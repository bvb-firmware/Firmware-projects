
#include<stdio.h>
void main()
{
int row,i,j;
printf("enterfd rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0;j<i+1;j++)
{
if(j%2==0)
printf("1 ");
else
printf("0 ");
}
printf("\n");
}




}
