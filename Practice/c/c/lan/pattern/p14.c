
#include<stdio.h>
void main()
{
int i,j,k,l,row;
char ch;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0,ch='A';j<row-i;j++)
printf("%c ",ch++);

for(k=0,ch='A',ch+=row-1;k<i;k++,ch--)
printf("    ");

for(j=0;j<row-i;j++)
{
printf(" %c",ch--);
}
printf("\n");


}


}
