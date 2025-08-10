//WAP to swap bytes of given hexadecimal numbr.

#include<stdio.h> 
void main()
{

short int num,pos,n1,n2;
printf(" enter any number\n");
scanf("%hx",&num);

printf("before num=%hx\n",num);
for(pos=15;pos>=0;pos--)
printf("%d",num>>pos&1);

n1=num&0xff00;
n1=n1>>8;

n2=num&0x00ff;
n2=n2<<8;


num=n1|n2;


printf("\nafter num=%hx\n",num);
for(pos=15;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");


}
