#include<stdio.h>
char * my_strchr(char *,const char);
int  my_strlen(const char *);
int  my_strcmp(const char *,const char *);
void my_strcpy(char *,const char *);
char * my_strstr(char *,char *);

void main()
{
	char s[40],s1[40],s2[20],c,*l;
	printf("enter any string and substring and char to search\n");
	scanf("%s%s",s,s2);
	scanf(" %c",&c);
	printf("s=%s  s2=%s\n",s,s2);

	char *(*p)(char *,const char);
	p=my_strchr;
	l=(*p)(s,c);
	printf("strchr=%s\n",l);

	int (*w)(const char *);
	w=my_strlen;
	int q=(*w)(s);
	printf("len=%d\n",q);

	int (*e)(const char *,const char *);
	e=my_strcmp;
	q=(*e)(s,s2);
	if(q==0)
	printf("strings are equal\n");
	else
	printf("strings are not equal\n");

	void (*r)(char *,const char *);
	r=my_strcpy;
	(*r)(s1,s);
	printf("s1=%s\n",s1);

	char *l1;	
char *(*t)(char *,char *);
	t=my_strstr;
	l1=(*t)(s,s2);
	printf("l1=%s\n",l1); 
}

char *my_strchr(char *p,const char f)
{
	for(;*p;*p++)
	{
		if(*p==f)
			return p; 
	}
}

int my_strlen(const char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}

int my_strcmp(const char *p,const char *q)
{
int j;
for(int i=0;p[i];i++)
{
j=p[i]-q[i];
if(j!=0)
break;
}
return j;
}

void my_strcpy(char *p,const char *q)
{
for(int i=0;q[i];i++)
p[i]=q[i];
}

char * my_strstr(char *p,char *q)
{
char *f;
int i=0;
f=q;
for(;*p;p++)
{
if(*p==*q)
{
q++;
i++;
if(*q=='\0')
{
for(i-=1;i;--i)
--p;
return p; 
}
}
else
{
q=f;
i=0;
}
}
return 0;
}

