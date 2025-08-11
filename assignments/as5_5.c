/* WAP to print the given series
  1 2 4 7 11 16 22
logic is:
        0+1=1
        1+1=2
        2+2=4
        3+4=7
        4+7=11      */

#include<stdio.h>
void main()
{
int n1,n2,n3,c=0;

printf("series of numbers are: \n");
for(n1=0,n2=1 ; c<=10 ; n1++)
{
n3=n1+n2;
printf("%d\n",n3);
n2=n3;
c++;
}


}

