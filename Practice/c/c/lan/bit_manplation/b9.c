//WAP to convert uppercase into lowercase & viceversa.

#include<stdio.h>
void main()
{
char ch;
printf("enter any character\n");
scanf("%c",&ch);

if(ch>='A' && ch<='Z')
printf("upper case\n ch=%c\n",ch^1<<5);
else if(ch>='a' && ch<='z')
printf("lower case\nch=%c\n",ch^1<<5);



}
