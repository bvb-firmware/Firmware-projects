 /*  WAP in C to print binary of all char in string .
i/p: char s[20]=”12 ab AB”;
o/p  */

#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

int i,pos;
for(i=0;p[i];i++)
{
printf("%c = ",p[i]);
for(pos=7;pos>=0;pos--)
printf("%d",p[i]>>pos&1);
printf("\n");
}

}

