/*WAP to print the multiplication table of a given number.
         5*1=5
         5*2=10      */
#include<stdio.h>
void main()
{
int num,i=0,c=0;
printf("Enter any number\n");
scanf("%d",&num);
l1:
printf("%d * %d = %d\n",num,i,num*++i);
c++;
if(c<10)
goto l1;

/* other expression
printf("enter any number\n");
scanf("%d",&num);
l2:
printf("%d * %d = %d\n",num,i,num*i);
++i;
if(i<=20)
goto l2;      */

}
