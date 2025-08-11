//WAP to swap nibbles of given numbr.

#include<stdio.h> 
void main()
{

int num,pos,n1,n2,n3;
printf("enter any number\n");
scanf("%d",&num);

printf("before num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);

n1=num&0xff000000;
n1=n1>>28;

n2=num&0x000000ff;
n2=n2<<28;

n3=num&0x00ffff00;
num=n1|n2|n3;


printf("\nafter num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");


}
