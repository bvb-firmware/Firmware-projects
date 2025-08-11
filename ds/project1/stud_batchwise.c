#include"header.h"

void stud_batchwise_file(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}

	char s[10],ch,*q;
	int l,l1=0;
	FILE *fp;
	printf("\033[33;1mEnter batch_ID to show\n\033[0m");
	scanf("%s",s);
	fp=fopen(s,"r");
	if(fp==0)
		printf("\033[31;1;5mBatch_ID not found\n\033[0m");
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			l1++;
			if(ch=='\n')
			{
				l=l1;
				l1=0;
			}
		}
		rewind(fp);
		char s1[l+2];

		printf("\033[31;1mBATCHID  ROLLNO  NAME        DOB       DOJ     PERCENTAGE\n\033[0m");
		printf("-----------------------------------------------------------------------------------------\n");
		while(1)
		{			
			q=fgets(s1,(l+2),fp);
			printf("%s\n",s1);
			if(q==0)
				return;
		}
	}
}
