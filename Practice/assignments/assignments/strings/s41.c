/* WAP in C to check 2 strings are anagram or not.
i/p: char s1[10]=”2h#p”, s2[10]=”&p2h”;
o/p: Yes both string Anagram  */

#include<stdio.h>
void main()
{
	char s[100],s1[100];
	printf("enter any two strings\n");
	scanf("%[^\n]",s);
	scanf(" %[^\n]",s1);
	printf("%s\n",s);
	printf("%s\n",s1);

	int i,j,k,m,n,len,len1;
	for(len=0;s[len];len++);
	for(len1=0;s[len1];len1++);
        
        printf("len=%d len1=%d\n",len,len1);
	if(len==len1)
	{
		for(i=0;s[i];i++)
		{
			if(s[i]>='a' && s[i]<='z')
				s[i]=s[i]-32;

			if(s1[i]>='a' && s1[i]<='z')
				s1[i]=s1[i]-32;

		}
		printf("s=%s\n",s);
		printf("s1=%s\n",s1);
		for(i=0;s[i];i++)
		{

			if(s[i]<='A' || s[i]>='Z')
			{
				for(j=i;s[j];j++)
					s[j]=s[j+1];
			}
			if(s1[i]<='A' || s1[i]>='Z')
			{
				for(j=i;s1[j];j++)
					s1[j]=s1[j+1];
			}


		}
		printf("s=%s\n",s);
		printf("s1=%s\n",s1);

		for(i=0;s[i];i++)
		{
			if(s[i]!=s1[i])
				break;
		}
		if(s[i]=='\0')
			printf("both string are anagrams\n");
		else
			printf("not anagram\n");

	}


	else
		printf("not anagram\n");

}

