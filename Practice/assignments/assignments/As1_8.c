//WAP to set all bits of 1st nibble, clear all bits of 2nd nibble,toggle all bits of 3rd nibble.

#include<stdio.h>
void main()
{
unsigned short int num=0xf5f0;
unsigned char n1=0,n2=0,n3=0,n4=0;
int i=0;
printf("enter any number\n");
scanf("%hx",&num);

printf("before num=%d\n",num);
for(i=15;i>=0;i--)
printf("%d",num>>i&1);

n1=num&0xf;
n1=n1|0xf;

/*n2=num>>4&0xf;
n2=n2|0x0000;*/
 
n3=num>>8&0xf;
n3=n3^0xf;

n4=num>>12&0xf;

num=n1|n2<<4|n3<<8|n4<<12;


printf("\nafter num=%d\n",num);
for(i=15;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");



}
