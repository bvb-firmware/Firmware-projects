//WAP too print given year is a leap year or not

#include<stdio.h>
void main()
{
int year;
printf("enter any year\n");
scanf("%d",&year);

if(year%4==0 && (year%400==0) || (year%100!=0))
printf("leap year\n");
else
printf("non leap yera\n");


}
