/* 13579
    3579
     579
      79
       9   */

#include<stdio.h>
void main()
{
int i,j,k,row;
printf("enter no.of to print\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0;j<i;j++)
printf(" ");


for(k=0;k<row-i;k++)
printf("%d",2*k+1);

printf("\n");
}


}
