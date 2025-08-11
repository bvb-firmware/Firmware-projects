//WAP to delete bits from a particular position.

#include<stdio.h> 
void main()
{
int num,pos,n1,n2,bits,p;
printf(" enter any number\n");
scanf("%d%d%d",&num,&bits,&p);

printf("before num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);

n1=num>>p+bits;
n1=n1<<p;

n2=num<<31-p;
n2=n2>>31-p;

num=n1|n2;

printf("\nafter num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");


}
