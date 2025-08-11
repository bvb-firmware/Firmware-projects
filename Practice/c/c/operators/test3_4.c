#include<stdio.h>
void main()
{
// WAP to delete 0th bit using bitwise operators
int num,num1,num2,num3,pos,r;
printf("Enter any number\n");
scanf("%d",&num);
printf("Enter the bit positions to delete\n");
scanf("%d",&pos);

num1=num>>(31-pos);
num1=num1<<(31-pos);
num2=num>>(pos+bit);
num2=num2<<pos;
r=num1|num2;

printf("After deleting the bits o/p=%d\n",r);

//other expression but not accurate.
r=num>>pos;
printf("After deleting the bits o/p=%d\n",r);
}
