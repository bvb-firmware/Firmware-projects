#include"header.h"

void stud_batchwise(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}

	sll *p=ptr;
	int i=0;
	char s[10];

	printf("\033[33;1mEnter batch_ID to show\n\033[0m");
	scanf("%s",s);

	while(p)
	{			
		if((strcmp(s,p->batch_id))==0)
		{
			if(i==0)
			{
				printf("\033[31;1mBATCHID  ROLLNO  NAME        DOB       DOJ     PERCENTAGE\n\033[0m");
				printf("-----------------------------------------------------------------------------------------\n");
				i=1;
			}
			printf(" %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n",p->batch_id,p->rollno,p->name,p->dob.day,p->dob.month,p->dob.year,p->doj.day,p->doj.month,p->doj.year,p->percentage);
		}
		p=p->next;
	}

	if(i==0)
		printf("033[31;1;5mBatch_ID not found\n\033[0m");
}
