//WAP to print fibonacii series b/w 0 and 31

#include<stdio.h>
void main()
{
int i,j,c,k,column,n1,n2;
/*
printf("enter no.of columns to print\n");
scanf("%d",&column);

for(i=0,j=0; j<column ;j++)
{
i=i+j;
printf("%d ",i);


}
printf("\n");
*/

printf("enter the range\n");
scanf("%d%d",&n1,&n2);

printf("%d ",n1);
for(i=n1,j=1,k=0 ; ; )
{
k=i+j;
if(k>31)
break;
printf("%d ",k);
j=i;
i=k;


}
printf("\n");
}
