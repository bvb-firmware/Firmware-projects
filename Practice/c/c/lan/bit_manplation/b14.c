//WAP to extract n-bits from p-positon of given numbr.

#include<stdio.h> 
void main()
{

int num,pos,n1,bits,p;
printf("enter any number and pos and bits\n");
scanf("%d%d%d",&num,&p,&bits);

printf("before num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);

n1=num>>p-1;
n1=n1<<31-bits;
n1=n1>>31-bits;



printf("\nafter extracting n1=%d\n",n1);
for(pos=31;pos>=0;pos--)
printf("%d",n1>>pos&1);
printf("\n");


}
