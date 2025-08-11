/* WAP in C using function to revesre all word in
string ,count no of word having digits .
i/p: char s[20]=”coding sirji vec123 A123 ”;
o/p: gnidoc ijris 321cev 321A
word count = 2
void rev_word_fun(char * s );
int count_word_fun(char * s ) */


#include<stdio.h>
void rev_word_fun(char * s);
int count_word_fun(char *s);
void main()
{
	char s[40];
	printf("enter any string\n");
	scanf("%[^\n]",s);
	printf("%s\n",s);

	int c;
	rev_word_fun(s);
	c=count_word_fun(s);
	printf("count=%d\n",c);
	printf("%s\n",s);

}

void rev_word_fun(char *s)
{
	int i,j,k;
	char t;

	for(i=0;s[i];i++)
	{
		for(j=i,k=i;s[j]!=' ' && s[j]!='\0';j++);
			i=j;                                                                                                                                                                                 .
		for(j-=1,k;k<j;k++,j--)
		{
			t=s[k];
			s[k]=s[j];
			s[j]=t;
		}

	}

}

int count_word_fun(char *s)
{
	int i,c;
	for(i=0,c=0;s[i];i++)
	{
		if(s[i]==' ')
			c++;

	}
	if(s[i]=='\0')
		c++;
	return c;
}



