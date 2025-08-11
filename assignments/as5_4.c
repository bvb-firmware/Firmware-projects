// WAP to print alternate odd number number between 21 to 39

#include<stdio.h>
void main()
{
int n1,n2;
printf("enter the range to print b/w\n");
scanf("%d%d",&n1,&n2);


printf("alternate odd numbers b/w %d and %d is: \n",n1,n2);
for(n1; n1<=n2 ; n1++)
{
if(n1%2==1)
{
printf("%d\n",n1);
n1+=2;
}
}



}
