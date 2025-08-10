/*  1
    1 2
    1 2 4
    1 2 4 7
    1 2 4 7 11  */


#include<stdio.h>
void main()
{
int i,j,k,row;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=1,k=0;k<i+1;k++)
{
printf("%d  ",j);
j=j+k+1;
}
printf("\n");
}

}
