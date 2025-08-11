#include"header.h"

void stud_count(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}
	sll *p=ptr;
	int op,c=0;
	char s[10];
	printf("\033[33;1mselect an option\n1)count records batchwise 2)count total records\n\033[0m");
	scanf(" %d",&op);

	switch(op)
	{
		case 1:printf("\033[33;mEnter Batch-ID to count\n\033[0m");
		       scanf(" %s",s);
		       while(p)
		       {
			       if((strcmp(s,p->batch_id))==0)
				       c++;
			       p=p->next;
		       }
		       printf("\033[32;1mcount=%d\n\033[0m",c);
		       break;
		case 2:while(p)
		       {
			       c++;
			       p=p->next;
		       }
		       printf("\033[32;1mcount=%d\n\033[0m",c);
		       break;
		default:printf("\033[31;1;5mInvalid option to count\n\033[0m");
	}
}


