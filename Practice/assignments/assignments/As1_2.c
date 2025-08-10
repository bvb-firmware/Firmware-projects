//WAP swapping first and last nibble in given short integer

#include<stdio.h>
void main()
{
int num,n1,n2,n3,i;
printf("Enter any short int number\n");
scanf("%d",&num);

printf("before nibbleswapping num is:%d\n",num);
for(i=15;i>=0;i--)
{
printf("%d",num>>i&1);
if(i%4==0)
printf(" ");
}

n1=num&0x000f;
n1=n1<<12;

n2=num&0xf000;
n2=n2>>12;

n3=num&0x0ff0;

num=n1|n2|n3;

printf("\nAfter nibbles swapping num is :%d\n",num);
for(i=15;i>=0;i--)
{
printf("%d",num>>i&1);
if(i%4==0)
printf(" ");
}
printf("\n");


}
