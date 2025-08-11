/* WAP in C to delete palindrome word from string.
i/p: char s[20]=”laxmi madam vector ”
o/p: char s[20]=”laxmi vector ” */

#include<stdio.h>
void main()
{
	char s[30];
	printf("enter any string\n");
	scanf("%[^\n]",s);
	printf("%s\n",s);

	int i,j,k,t;
	for(i=0;s[i];i++)
	{
		k=i;
		for(j=i;s[j]!=' ' && s[j];j++);
		t=j;
		for(i,j-=1;i<j;i++,j--)
		{
			if(s[i]!=s[j])
				break;
		}
		if(i>=j)
		{
			for(i=k;i<=t;i++)
			{
				for(j=k;s[j];j++)
					s[j]=s[j+1];


			}


               	i=k;
		}
		else
		i=t;

	}

printf("%s\n",s);


}
