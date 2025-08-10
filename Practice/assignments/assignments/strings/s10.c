/*  .WAP in C to reverse string using while loop .
i/p: char s[10]=”gnidoc 321”;
o/p: 123 coding */

#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

int i,len,j;
char t;
for(len=0;p[len];len++);

for(i=0,j=len-1;i<j;i++,j--)
{
t=p[i];
p[i]=p[j];
p[j]=t;

}
printf("%s\n",p);

}

