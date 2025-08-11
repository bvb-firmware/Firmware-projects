/*    WAP in C to reverse first 3 letter from string .
i/p: char s[10]=”gnidoc coding ”;
o/p: ingdoc coding  */

#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

int i,len,j;
char t;

for(i=0,len=2,j=len;i<j;i++,j--)
{
t=p[i];
p[i]=p[j];
p[j]=t;

}
printf("%s\n",p);

}

