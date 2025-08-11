//WAP to print all odd factors of 900/ given number

#include<stdio.h>
void main()
{
int num,temp,i=1;
printf("Enter any number\n");
scanf("%d",&num);


printf("odd factors of %d is: \n",num);
l:
temp=num%i;
if(temp==0)
{
if(i%2)
printf("%d\n",i);
}
++i;
if(i<=num)
goto l;

}
