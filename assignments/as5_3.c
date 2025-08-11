// WAP to print even numbers b/w (299 to 275) using bitwise operator

#include<stdio.h>
void main()
{
int n1,n2,temp,c=0;
printf("enter the range of numbers\n");
scanf("%d%d",&n1,&n2);



printf("even numbers between %d and %d is: \n",n1,n2);
for( n1; n1>=n2 ; n1--)
{
temp=n1&1;   // to check given num is even or odd using bitwise operator
if(temp==0)
{
printf("%d\n",n1);
c++;
}
}
printf("the count of even numbers is: %d\n",c);

}
