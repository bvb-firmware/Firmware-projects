//WAP to print the binary value of a given integer/decimal number

#include<stdio.h>
void main()
{
int num,pos=31,r;
printf("Enter any number\n");
scanf("%d",&num);
printf("Binary value of given number is:\n");
l1:
r=num>>pos&1;
printf("%d",r);
if(pos%8==0)
printf(" ");
pos--;
if(pos>=0)
goto l1;
printf("\n");
}
