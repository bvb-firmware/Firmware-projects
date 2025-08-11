/* 2
   2 4
   2 4 6
   2 4 6 8   */

#include<stdio.h>
void main()
{
int i,k,row;
printf("enter no.of row to print\n");
scanf("%d",&row);

for(i=1;i<row;i++)
{
for(k=1;k<1+i;k++)
{
printf("%d ",2*k);


}
printf("\n");

}



}
