//WAP to delete no.of bits from particular position in given number 995

#include<stdio.h>
void main()
{
unsigned int num,n1,n2;
int pos,bits;
printf("enter any number\n");
scanf("%d",&num);

printf("before bits deleting num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
//////////////////////////////////////////////////////////////////////////////////////////////////////
pos=2;
bits=4;
n1=num>>pos+bits;
n1=n1<<pos;

n2=num<<31-pos;
n2=n2>>31-pos;

num=n1|n2;
/////////////////////////////////////////////////////////////////////////////////////////////////////

printf("\nafter bits deleting num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);

printf("\n");
}
