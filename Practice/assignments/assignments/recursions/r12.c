/*  WAP in C using Recursive fun to reverse string .
i/p: char s[20]=”123 abc 789”;
o/p: 987 cba 321
void rec_fun_rev_string( char *p, char *q );*/

#include<stdio.h>
void rec_fun_rev_string(char *,char *);
void main()
{
	char s[30];
	int l;
	printf("enter any string\n");
	scanf("%[^\n]",s);
	printf("%s\n",s);
	for(l=0;s[l];l++);


	rec_fun_rev_string(s,s+l-1);

	printf("%s\n",s);


}
void rec_fun_rev_string(char *s,char *p)
{

	char t;

	if(s<p)
	{
		t=*s;;
		*s=*p;
		*p=t;
		s++;
		--p;
		rec_fun_rev_string(s,p);

	}

}
