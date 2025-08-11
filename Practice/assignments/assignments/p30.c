/*            A
             A B
            A B C
           A B C D
          A B C D E
           A B C D
            A B C
             A B
              A    */

#include<stdio.h>
void main()
{
int i,j,k,row;
char ch;

printf("enter rows");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=0;j<row-i;j++)
printf(" ");

for(k=0,ch='A';k<i+1;k++)
printf("%c ",ch++);

printf("\n");
}


for(i=0;i<=row;i++)
{
for(j=0;j<i;j++)
printf(" ");

for(k=0,ch='A';k<=row-i;k++)
printf("%c ",ch++);

printf("\n");
}
























}



