/*  WAP in C to delete desired char only 2 times
from right side of given string using while loop.
i/p: char s[20]=”abcccababc” , ch= ‘c’
o/p: abccabab */

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

int i,len,j,c;

len=-1;
while(len++,p[len]);

printf("%d\n",len);

c=0;
i=len-1;
while(p[i])
{
	if(ch==p[i])
	{
		j=i;
		while(p[j])
		{
			p[j]=p[j+1];
			j++;
		


		}
		c++;
	//	len--;
	}
		--i;

		if(c==2)
		break;
 
}
printf("%s\n",p);

}

