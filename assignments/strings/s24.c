/*  wAP in C to print first word from string using goto.
i/p: char s[20]=”vector india pvt”;
o/p: vector  */


#include<stdio.h>
#include<string.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

char *q;
q=strchr(p,' ');

int i,l1;
i=0;
l1:
printf("%c",p[i]);
i++;
if(i<(q-p))
goto l1;
printf("\n");

}



