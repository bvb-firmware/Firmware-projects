/* .WAP in C to replace one word with another word
in string [word lenght -> same or diffrent]
i/p: char s[30]=”pf123 pf78 pf”,
s1[10]=”pf”,s2[10]=’printf’ ;
o/p: char s[20]=”printf123 printf78 printf”; */

#include<stdio.h>
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

	int i,j,k,len,len1,len2;
	for(len=0;s[len];len++);
	for(len1=0;s1[len1];len1++);
	for(len2=0;s2[len2];len2++); 
	printf("len=%d len1=%d len2=%d\n",len,len1,len2);

	for(i=0,j=0;s[i];i++)
	{
		
		if(s[i]==s1[j])
			j++;
		else if(s1[j]=='\0')
		{
			for(k=0;k<(len2-len1);k++)
			{
				for(j=len+1;j>i;j--)
					s[j]=s[j-1];
					len++;

			}
			for(j=(i-len1),k=0;k<len2;j++,k++)
				s[j]=s2[k];
			i=i+(len2-len1-1);
			j=0;
		}
	
	}

	if(s1[j]=='\0')
	{
		for(k=0;k<(len2-len1);k++)
		{
			for(j=len+1;j>i;j--)
				s[j]=s[j-1];
				len++;

		}
		for(j=(i-len1),k=0;k<len2;j++,k++)
			s[j]=s2[k];



	}

	printf("i=%d j=%d len=%d\n",i,j,len);
	printf("%s\n",s);

}
