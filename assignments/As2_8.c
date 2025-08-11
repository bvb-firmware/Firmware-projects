//WAP to check given num is perfect or not using while loop

#include<stdio.h>
void main()
{
int num,i,sum;
printf("enter any number\n");
scanf("%d",&num);

i=1;
sum=0;
while(i<num)
{
if(num%i==0)
sum=sum+i;
i++;
}
if(sum==num)
printf("perfect number\n");
else
printf("not perfect number\n");


}
