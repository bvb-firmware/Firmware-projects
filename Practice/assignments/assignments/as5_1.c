//WAP to print even factors of 512 or given number

#include<stdio.h>
void main()
{
int num,temp,i=1;
printf("enter any number\n");
scanf("%d",&num);


printf("even factors of %d is: \n",num);
l1:
temp=num%i;
if(temp==0)
{
if(i%2==0)
printf("%d\n",i);
}
++i;
if(i<=num)
goto l1;



printf("even factors of %d is: \n",num);
// By using for loop
for(i=1;i<=num;i++)
{
temp=num%i;
if(temp==0)
{
if(i%2==0)
printf("%d\n",i);
}

}
















}

