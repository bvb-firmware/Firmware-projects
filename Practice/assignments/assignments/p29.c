/*      *
       ***
      *****
     *******   */

#include<stdio.h>
void main()
{
int i,j,row,k;
printf("enter number of rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(k=0;k<row-1-i;k++)
{
printf(" ");
}
for(j=0;j<i+1;j++)
{
if(i%2==0)
printf("*");
}
printf("\n");
}

}


