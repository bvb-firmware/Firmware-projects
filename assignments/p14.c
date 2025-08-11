/*  1
    321
    54321
    7654321  */

#include<stdio.h>
void main()
{
int i,j,k,row;
printf("enter rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(k=0,j=i*2+1 ; k<i*2+1 ; k++,j--)
printf("%d",j);
printf("\n");
}

}
