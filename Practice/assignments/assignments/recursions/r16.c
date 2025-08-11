/*  compare two strings
int my_strncmp( char *p, char *q, int n ); */

#include<stdio.h>
int my_strncmp( char *,char *,int);
void main()
{
	char s[40],s1[40];
	printf("enter any two strings\n");
	scanf("%[^\n]",s);
	scanf(" %[^\n]",s1);
	printf("s=%s\n",s);
	printf("s1=%s\n",s1);

	int n,l;
	printf("enter no.of characters to compare\n");
	scanf(" %d",&l);
	n=my_strncmp(s,s1,l);
	if(n==0)
		printf("both strings are equal=%d\n",n);
	else
		printf("both strings are not equal=%d\n",n);

}

int my_strncmp(char *s,char *s1,int l)
{
	static int c=0,w;
	if(c<l)
	{	
		c++;

			w=*s-*s1;
		if(w!=0)
			return w;
		s++;
		s1++;
		my_strncmp(s,s1,l);
	}
	else
		return w;



}

