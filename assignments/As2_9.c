//WAP to chek given num is palindrome or not using do while loop

#include<stdio.h>
void main()
{
int num,temp,rev,r;
printf("enter any number\n");
scanf("%d",&num);

rev=0;
temp=num;
do
{
r=num%10;
rev=rev*10+r;
num=num/10;
}while(num);

if(temp==rev)
printf("palindrome\n");
else
printf("not palindrome\n");

}
