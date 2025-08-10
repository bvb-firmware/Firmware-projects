/*  copy a string
void my_strncpy( char *p, char *q, int n );*/

#include<stdio.h>
void my_strncpy(char *,char *,int);
void main()
{
	char s[40],d[40];
	printf("enter any string\n");
	scanf("%[^\n]",s);
	printf("s=%s\n",s);

	int l;
	printf("enter no.of characters to copy\n");
	scanf(" %d",&l);

	printf("before d=%s\n",d);

	my_strncpy(s,d,l);

	printf("after d=%s\n",d);


}
void my_strncpy(char *s,char *d,int l)
{
	static int c=0;

	if(c<l)
	{
		c++;
		*d=*s;
		s++;
		d++;
		my_strncpy(s,d,l);
	}
	else
	*d='\0';
}

