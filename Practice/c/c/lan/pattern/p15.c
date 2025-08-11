#include<stdio.h>
void main()
{
int row,i,j,k,coef;
printf("enter no.of rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0;j<row-1-i;j++)
{
printf(" ");
}
coef=1;
for(k=0;k<i+1;k++)
{
printf("%4d",coef);
coef=coef*(i-j)/(1+j);

}
printf("\n");
}

}
