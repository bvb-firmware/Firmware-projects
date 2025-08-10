/*  WAP in C to find largest words in string.
i/p: char s[20]=”123 vector c ds”;
o/p: vector */


#include<stdio.h>
#include<string.h>
void main()
{
	char s[20];

	printf("enter string\n");
	scanf("%[^\n]",s);
	printf("%s\n",s);

	int len,len1,n,m;
	int i,j;
	for(i=0,len1=0;s[i];i++)
	{
		for(j=i,len=0;s[j];j++)
		{
			if(s[j]==' ')
				break;
			len++;
		}

		if(len>len1)
		{
			n=i;
			m=j;
			len1=len;
		}
			i=j;


	}
	printf("len1==%d n=%d m=%d\n",len1,n,m);

for(;n<m;n++)
printf("%c",s[n]);

}



