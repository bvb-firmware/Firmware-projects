/* WAP in C to find smallest words in string.
i/p: char s[20]=”123 vector c ds”;
o/p: c  */


#include<stdio.h>
void main()
{
	char s[20];
	printf("enter the string\n");
	scanf("%[^\n]",s);
	printf("%s\n",s);

	int i,j,m,n,len1,len;

	for(i=0,len1=20;s[i];i++)
	{

		for(j=i,len=0;s[j];j++)
		{
			if(s[j]==' ')
				break;
			len++;

		}
		if(len<len1)
		{
			len1=len;
			m=i;
			n=j;
		}
		i=j;


	}
printf("len1=%d\n",len1);
	for(m;m<n;m++)
		printf("%c",s[m]);
	printf("\n");
}
