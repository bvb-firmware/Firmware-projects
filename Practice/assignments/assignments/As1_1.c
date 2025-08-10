//WAP in c to print binary format of int number using goto and whileloop.

#include<stdio.h>
void main()
{
int num,r,pos;
scanf("%d%d",&num,&pos);

l1:


if(pos%8==0)
printf(" ");
printf("%d",num>>pos&1);
--pos;
if(pos>=0)
goto l1;

printf("\n");

}
