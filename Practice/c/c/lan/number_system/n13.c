//WAP to find out power of given number without using pow() function

#include<stdio.h>
void main()
{
int num,power,i,j;
printf("enter any number and its power\n");
scanf("%d%d",&num,&power);

for(i=0,j=1;i<power;i++)
j=j*num;

printf("%d\n",j);


}
