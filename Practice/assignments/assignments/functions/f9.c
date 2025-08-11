/* WAP in C using function to delete the
duplicate char from given string .
i/p: char s[20]=”abcaaabbccaa”;
o/p: abc
void del_fun(char * s );*/

#include<stdio.h>
void del_fun(char *);
void main()
{
	char s[40];
	printf("enter any string\n");
	scanf("%s",s);
	printf("%s\n",s);

	del_fun(s);

	printf("%s\n",s);

}
void del_fun(char *s)
{
	int i,j,k;
	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				for(k=j;s[k];k++)
					s[k]=s[k+1];
				--j;

			}

		}


	}


}
