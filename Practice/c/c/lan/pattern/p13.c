
#include<stdio.h>
void main()
{
int i,j,k,l,row;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0;j<i+1;j++)
printf("%d",j+1);

for(k=0,l=row;k<row-i-1;k++,l--)
printf("  ");

for(j=0;j<i+1;j++)
printf("%d",l--);

printf("\n");


}


}
