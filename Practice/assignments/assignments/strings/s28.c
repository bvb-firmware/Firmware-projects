/*  WAP in C to reverse last word in string .
i/p: char s[30]=”vector india coding 123”;
o/p: vecor india coding 321  */



#include<stdio.h>
#include<string.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

char *q,t;

q=strchr(s,'\0');
//printf("%u\n",q);
q=q-1;

p=strrchr(p,' ');
p=p+1;
for(p,q;p<q;p++,q--)
{
t=*p;
*p=*q;
*q=t;

}
printf("%s\n",s);

}



