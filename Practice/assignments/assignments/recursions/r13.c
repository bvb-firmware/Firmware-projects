/*  WAP in C using Recursive function to count
char in given any string .
i/p: char s[20]=”123 aacc tata ”; , ch= ‘a’
o/p: count = 4
int rec_fun_count_string( char *p, char ch )  */

#include<stdio.h>
int rec_fun_count_string(char *,char);
void main()
{
	char s[30],ch;
	printf("enter any string\n");
	scanf("%[^\n]",s);
	printf("%s\n",s);
	printf("enter the character to count\n");
	scanf(" %c",&ch);

	int c;
	c=rec_fun_count_string(s,ch);
	printf("count=%d\n",c);
	printf("%s\n",s);


}
int rec_fun_count_string(char *s,char ch)
{
	static int c=0;
	if(*s)
	{
		if(*s==ch)
			c++;
		s++;
		rec_fun_count_string(s,ch);
	}
	else
		return c;

}

