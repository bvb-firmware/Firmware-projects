/* WAP in C to print all word length .
--- i/p file----
123 abc coding
file sirji FILE*/

#include<stdio.h>
void main(int c,char **s)
{
	FILE *fp;
	fp=fopen(s[1],"r");
	int l;
	char ch;
	for(l=0 ; (ch=fgetc(fp))!=-1 ; )
	{
		if(ch!=' '&& ch!='\n')
			l++;
		else
		{
			printf("word length=%d\n",l);
			l=0;
		}
	}
}
