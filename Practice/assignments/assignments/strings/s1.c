/*  WAP in C to find lenght of string using pointer.
i/p: basic_program , char s[20],*p;
o/p: lenght= 13  */

#include<stdio.h>
void main()
{
char s[20],*p;

printf("enter string\n");
scanf("%[^\n]",s);
printf("%s\n",s);

*p=0;
for(*p=0;s[*p];++(*p));
printf("%d\n",*p);









}



