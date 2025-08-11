/*  WAP in C to delete desired char from string.
i/p:char s[20]=”acbcccab” , ch = ‘c’
o/p: abab */

#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

char ch;
printf("enter the character to delete\n");
scanf(" %c",&ch);

int i,len,j;
for(len=0;p[len];len++);

for(i=0;i<len;i++)
{
	if(ch==p[i])
	{
		for(j=i;j<len;j++)
			p[j]=p[j+1];
		--len;
		--i;
	}

}
printf("%s\n",p);

}

