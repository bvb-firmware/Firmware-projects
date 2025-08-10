
                   
//WAP for swapping 1st byte and 2nd byte & swapping 3rd and 4th bytes 

#include<stdio.h>
void main()
{
//int num=0x11223344;
int num,n1,n2,n3,n4,i;
printf("enter any number\n");
scanf("%x",&num);

printf("before converting num is:%x=%d\n",num,num);
for(i=31;i>=0;i--)
{
printf("%d",num>>i&1);
if(i%8==0)
printf(" ");
}

////////////////////////////////////////////////////////////////////////////////

n1=num&0x000000ff;
n1=n1<<8;

n2=num&0x0000ff00;
n2=n2>>8;

n3=num&0x00ff0000;
n3=n3<<8;

n4=num&0xff000000;
n4=n4>>8;

num=n1|n2|n3|n4;

////////////////////////////////////////////////////////////////////////////////

printf("\nafter converting num is:%x=%d\n",num,num);
for(i=31;i>=0;i--)
{
printf("%d",num>>i&1);
if(i%8==0)
printf(" ");
}
printf("\n");
}
