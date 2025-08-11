//WAp to store each digit of a given number
#include<stdio.h>
void main()
{
int num,temp;
printf("enter any number\n");
scanf("%d",&num);
//for( ; num<0(or)num<=1 ; )
for(;num; )
{
temp=num%10;
num=num/10;
printf("temp=%d\n",temp);
}


//other expression
for( ; num; num=num/10)
//for( ; num ; num/=10)
{
temp=num%10;
printf("temp=%d\n",temp);
}

}
