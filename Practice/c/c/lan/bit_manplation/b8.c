//WAP to rotate the bits.input of rotations rotations at runtime.

#include<stdio.h>
void main()

{
unsigned int num;
int r,bits,pos;
printf("enter no.of bits and number\n");
scanf("%d%d",&num,&bits);

for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");

r=num<<31-bits;
num=num>>bits;

num=num|r;
/*
for(pos=0;pos<=bits;pos++)
{
r=num&1;
num=num>>1;
if(r)
num=num|1<<31;
}*/
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");
}
