/* 5
   * *
   5 4 3
   * * * *
   5 4 3 2 1 */

#include<stdio.h>
void main()
{
int i,j,row;
printf("enter no.of rows\n");
scanf("%d",&row);

for(i=0;i<row;i++)
{
for(j=row;j>=row-i;j--)
{
if(i%2==0)
printf("%d ",j);
else
printf("* ");
}
printf("\n");

}


}



