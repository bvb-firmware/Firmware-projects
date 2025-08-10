/*   wAP in C to print last word from string using goto.
i/p: char s[20]=”vector india coding ”;
o/p: coding */


#include<stdio.h>
#include<string.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

char *q;
q=strrchr(p,' ');

int i,l1;
i=(q-p)+1;
l1:
printf("%c",p[i]);
i++;
if(p[i]!='\0')
goto l1;
printf("\n");

}



