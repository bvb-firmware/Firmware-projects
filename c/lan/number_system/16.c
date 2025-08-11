//WAP to print fibanocci series b/w 1 to 50

#include<stdio.h>
void main()
{
int a,b,c,n1,n2;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);

printf("%d ",n1);
for(a=n1,b=n1+1; ; )
{
c=a+b;
if(c>=n2)
break;
printf("%d ",c);
b=a;
a=c;

}
printf("\n");

}
