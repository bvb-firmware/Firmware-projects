/*WAP for converting little enidian data to big enidian data
                   (or)
WAP for swapping 1st byte and 4th byte & swapping 2nd and 3rd bytes */

#include<stdio.h>
void main()
{
//int num=0x11223344;
int num,n1,n2,n3,n4,i,n5;
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

n1=num&0x0000000f;
n1=n1<<16;

n2=num&0x000f0000;
n2=n2>>16;

n3=num&0x000000f0;
n3=n3<<8;

n4=num&0x0000f000;
n4=n4>>8;

n5=num&0xfff00f00;

num=n1|n2|n3|n4|n5;

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
