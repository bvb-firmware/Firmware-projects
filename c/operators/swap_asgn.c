#include<stdio.h>
void main()
{
//swapping of two numbers using three/temporary varaibles in assignment operator

float num1,num2,temp;
printf("enter any two numbers...\n");
scanf("%f%f",&num1,&num2);

printf("before swapping the numbers are num1=%f num2=%f\n",num1,num2);
//expression for swapping using assignment operator '='

temp=num1;
num1=num2;
num2=temp;

printf("after swapping the numbers are num1=%f num2=%f\n",num1,num2);

}
