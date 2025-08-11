#include<stdio.h>
void main()
{
int i;
printf("enter any number\n");
scanf("%d",&i);


if(i<sizeof(int))
{
if(i==sizeof(int))
printf("one..\n");
else if(i>sizeof(int))
printf("two...\n");
else
printf("four..\n");
}
else
printf("Three..\n");



char ch;

if(-1>sizeof(ch))
printf("1..\n");
printf("2...\n");
printf("3..\n");
}
