/* WAP to print given sequence 2 9 28 65 126 217
  logic is: 
              1cube+1=2
              2cube+1=9
              3cube+1=28 ...*/
#include<stdio.h>
void main()
{
int n1,n2,n3,c=0;



printf("the series is: \n");
for(n1=1,n2=1 ; c<=10 ; n1++)
{
n3=n1*n1*n1+n2;
printf("%d\n",n3);
c++;
}

}
