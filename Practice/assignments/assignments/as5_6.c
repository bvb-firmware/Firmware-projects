/*  WAP to print given series -13 -8 -4 -1 1 2
logic is:
         -13-(-8)=-5
          -8-(-4)=-4
          -4-(-1)=-3
           -1-1=  -2
            1-2=  -1
            2-2  =0    */
#include<stdio.h>
void main()
{
int n1,n2,n3,c=0;
//printf("enter series starting number\n");
//scanf("%d",&n1);


printf("series of numbers are: \n");
for(n1=-19,n2=-6 ; c<=10 ; n2++)
{
n3=n1-n2;
printf("%d\n",n3);
n1=n3;
c++;
}


}
           
