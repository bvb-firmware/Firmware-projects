//WAP to find num is divisible by 8 or not using terenery+bitwise operator

#include<stdio.h>
void main()
{
int num;
printf("enter num\n");
scanf("%d",&num); 

num&7 ? printf("no\n") : printf("yes\n");


}
