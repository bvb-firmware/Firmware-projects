/* WAP in C to reverse all words in string.
i/p: char s[20]=“coding sirji vector”
o/p:char s[20]= “gnidoc ijris rotcev” */



#include<stdio.h>
#include<string.h>
void main()
{
char s[20],*p=s,t;

printf("enter string\n");
scanf("%[^\n]",s);
printf("%s\n",s);

char *q,*temp;

while(q=strchr(p,' '))
{
	temp=q-1;
	while(p<temp)
	{
		t=*p;
		*p=*temp;
		*temp=t;
		p++;
		temp--;
	}
	p=q+1;
}

//printf("%s\n",s);

q=strchr(p,'\0');
q-=1;
while(p<q)
{
	t=*p;
	*p=*q;
	*q=t;
	p++;
	q--;

}


printf("%s\n",s);
}



