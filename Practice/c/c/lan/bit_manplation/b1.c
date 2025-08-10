//WAP to set a bit, clear a bit, toggle a bit

#include<stdio.h> 
void main()
{

int num,pos,bit;
printf(" enter any number and bit\n");
scanf("%d%d",&num,&bit);

printf("before num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);

num=num|1<<bit;

num=num&~(1<<bit);

num=num^1<<bit;

printf("\nafter num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");


}
