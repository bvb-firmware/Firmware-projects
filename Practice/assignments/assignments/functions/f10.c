/*  WAP in C using function to delete all digits in
strings and count deleted digits .
i/p: char s[20]=”a1b2c3d4123”;
o/p: abcd , digit count = 7
int del_count_fun(char * s );  */

#include<stdio.h>
int del_count_fun(char *);
void main()
{
	char s[30];
	printf("enter any string\n");
	scanf("%s",s);
	printf("%s\n",s);
	int c;
	c=del_count_fun(s);
	printf("count=%d\n",c);
	printf("%s\n",s);
}
int del_count_fun(char *s)
{
	int i,j,k,c;
	for(i=0,c=0;s[i];i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			c++;
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			--i;


		}

	}
	return c;
}

