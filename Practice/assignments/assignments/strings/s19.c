/*  WAP in C to insert ‘p’ at 0th pos in same string .
i/p: char s[10]=”123456”, ch=’p’;
o/p: p123456  */

#include<stdio.h>
#include<string.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);


int i,j,ind,len;
char ch;
printf("enter character to insert and index\n");
scanf(" %c",&ch);
scanf(" %d",&ind);

len=strlen(p);
i=0;
while(i<1)
{
		j=len+1;
		while(j>ind)
		{
			p[j]=p[j-1];
			j--;
		}
		p[j]=ch;

	++i;
}
printf("%s\n",p);

}



