//WAP to find the compliment of a given numberand  print binary ,decimal, hexa,octal.

#include<stdio.h>
void main()
{
int num,pos;
printf("enter any number\n");
scanf("%d",&num);

printf("before complimenting num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");

num=~num;
printf("after complimenting num=%d %o %x\n",num,num,num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");



}
