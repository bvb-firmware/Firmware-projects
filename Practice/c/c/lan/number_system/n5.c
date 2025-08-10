//WAP to print multiplication tables from 10 to 20

#include<stdio.h>
void main()
{
int n1,n2,i;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);

for(n1;n1<=n2;n1++)
{
for(i=1;i<=10;i++)
printf("%d * %d = %d\n",n1,i,n1*i);
printf("---------------------\n");
}



}
