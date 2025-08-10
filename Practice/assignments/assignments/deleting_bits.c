
//WAP to delete no.of bits from given a particular position

#include<stdio.h>
void main()
{
unsigned int num,n1,n2;
int pos,bits,i;
printf("enter any number, position,bits\n");
scanf("%d%d%d",&num,&pos,&bits);

printf("before deleting num is:%d\n",num);
for(i=31;i>=0;i--)
{
printf("%d",num>>i&1);
if(i%8==0)
printf(" ");
}
//////////////////////////////////////////////////////////////////////////
n1=num>>pos+bits;
n1=n1<<pos;

n2=num<<31-pos;
n2=n2>>31-pos;

num=n1|n2;

//////////////////////////////////////////////////////////////////////////
printf("\nafter deleting num is:%d\n",num);
for(i=31;i>=0;i--)
{
printf("%d",num>>i&1);
if(i%8==0)
printf(" ");
}
printf("\n");

}
