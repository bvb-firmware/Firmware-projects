/* .WAP in C to replace one word with another word
in string [word lenght -> same or diffrent]
i/p: char s[30]=”pf123 pf78 pf”,
s1[10]=”pf”,s2[10]=’printf’ ;
o/p: char s[20]=”printf123 printf78 printf”; */

#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],s1[20],s2[10];
	printf("enter mainstring and substring and replacing string\n");
	scanf("%[^\n]",s);
	scanf(" %[^\n]",s1);
	scanf(" %[^\n]",s2);

	printf("%s\n",s);
	printf("%s\n",s1);
	printf("%s\n",s2);

	char *p,*q,*t,*f;
	while(q=strsr(s,s1))
	{
	p=strchr(q,' ');
	t=strcpy(t,p);
	f=strcpy(q,s2);
	s=strcat(f,t);

	s=s+q;



	} 
printf("%s\n",s);

}
