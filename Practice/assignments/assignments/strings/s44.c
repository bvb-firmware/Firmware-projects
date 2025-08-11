/* .WAP in C to check substring is present in a
main string or not using nested while loop.
i/p: char m[20]=”123 abc”, s[10]=”abc”;
o/p: yes   */

#include<stdio.h>
#include<string.h>
void main()
{
char m[20],s[20];
printf("enter main and sub strings\n");
scanf("%[^\n]",m);
scanf(" %[^\n]",s);
printf("%s\n",m);
printf("%s\n",s);

//char *p;
//if(p=strstr(m,s))

int i,j;
for(i=0;m[i];i++)
{
	for(j=0;s[j];j++)
	{
		if(s[j]==m[i])
			i++;
		else 
			break;
	}
	if(s[j]=='\0')
		break;



}

if(s[j]=='\0')
printf("yes substring is present in mainstring\n");


}
