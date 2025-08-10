//WAP to set all bits 1st nibble clear all bits of 2nd nibble toggle all bits of 3rd nibble
#include<stdio.h>
void main()
{
int num,n1,n2,n3,n4,pos;
printf("enter any number\n");
scanf("%d",&num);

printf("before num=%d\n",num);
for(pos=31;pos>=0;pos--)
{
printf("%d",num>>pos&1);
if(pos%4==0)
printf(" ");
}
//////////////////////////////////////////////////////////////////////////

n1=num&0x0000000f;       //to set bits
n1=n1|0x0000000f;

n2=num&0x000000f0;       // to clear bits
n2=n2&0x00000000;

n3=num&0x0000f000;       // to toggle bits
n3=n3^0x0000f000;

n4=num&0xffff0f00;        // to store remaining bits

num=n1|n2|n3|n4;    

/////////////////////////////////////////////////////////////////////////


printf("\nafter num=%d\n",num);
for(pos=31;pos>=0;pos--)
{
printf("%d",num>>pos&1);
if(pos%4==0)
printf(" ");
}
printf("\n");
}
