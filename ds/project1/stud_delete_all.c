#include"header.h"

void stud_delete_all(sll **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}
	sll *del,*prev;
	char s[10];
	int op,flag=0; 
	printf("\033[33;1menter an option to delete\n1)delete batch-wise 2)delete allrecords\n\033[0m");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			del=*ptr;
			flag=0;
printf("\033[33;1menter batch-id to delete\n\033[0m");
		       scanf("%s",s);
		       while(del)
		       {
			       if((strcmp(s,del->batch_id))==0)
			       {
				       if(del==*ptr)
				       {
						flag=1;
					       *ptr=del->next;
					       prev=del->next;
					       free(del);
						del=0;
					       del=prev;

				       }
				       else if(del->next==0)
				       {
						flag=1;
					       prev->next=0;
					       free(del);
						del=0;
						

				       }
				       else
				       {
						flag=1;
					       prev->next=del->next;
					       free(del);
						del=0;
					       del=prev->next;
				       }
			       }
			       else
			       {
				       prev=del;
				       del=del->next;
			       }
		       }
		       if(flag==0)
			       printf("\033[31;1;5mBatch_id not found\n\033[0m");
		       else
			       printf("\033[32;1mrecords deleted\n\033[0m");
		       break;

		case 2:	del=*ptr;
			flag=0;
			while(del)
			{
				*ptr=del->next;
				free(del);
				del=0;
				del=*ptr;
			}
			printf("\033[32;1mAll records deleted\n\033[0m"); break;
		default:printf("\033[31;1;5minvalid oprion to delete\n\033[0m");
	}
}
