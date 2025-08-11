/*  WAP in C to reverse 1st word in string using pointer.
i/p: char s[20]=”vector india pvt”;
o/p: rotcev india pvt */


#include<stdio.h>
#include<string.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

char *q,t;

q=strchr(p,' ');
q=q-1;
for(p,q;p<q;p++,q--)
{
t=*p;
*p=*q;
*q=t;

}
printf("%s\n",s);

}



