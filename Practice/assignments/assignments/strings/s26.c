/*  WAP in C to print word ending with letter ‘g’.
i/p: char s[20]=”c ds coding doing”;
o/p: coding doing   */

#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],*p=s;
	printf("enter any string\n");
	scanf("%[^\n]",p);
	printf("%s\n",p);

	char ch;
	printf("enter character to search\n");
	scanf(" %c",&ch);

	char *q,*j;
	int i;

	/*for( ; q=strchr(p,' '); )
	{
		if(*(q-1)==ch)
		{
			for(j=p;j<=(q-1);j++)
				printf("%c",*p++);
			printf("\n");

		}
				
		p=q+1;

	}*/

	while(q=strchr(p,' '))
	{
		if(*(q-1)==ch)
		{
			j=p;
			while(j<=(q-1))
			{
				printf("%c",*p++);
				j++;
			}
			printf("\n");

		}
				
		p=q+1;
	}

q=strchr(p,ch);
if(*(q+1)=='\0')
printf("%s\n",p);
}



