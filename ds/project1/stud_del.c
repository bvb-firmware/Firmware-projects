
#include"header.h"
int m,n,o;
extern int flag2;
void stud_delete(sll **ptr)
{

	if(*ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}
	sll *del=*ptr,*prev,*del1=*ptr;

	int i,flag=0;
	char op;
	char s[50],s1[10];
	printf("\033[33;1menter batch id to delete\n\033[0m");
	scanf("%s",s1);
	while(del1)
	{
		if((strcmp(s1,del1->batch_id))==0)
		{
			printf("\033[33;1mr/R)delete based on rollno n/N)delete based on name\nenter option to delete\n\033[0m");	
			scanf(" %c",&op);
			if(op>='a'&&op<='z')
				op=op-32;
			switch(op)
			{
				case 'R':printf("enter roll no to delete\n");
					 scanf(" %d",&i);
					 while(del)
					 {
						 if(i==del->rollno)
						 {
							 m=del->rollno;
							 n=del->doj.month;
							 o=del->doj.year;
							 flag=1;
							 flag2=1;
							 printf("\033[32;1mRecord deleted\n\033[0m");
							 if(del==*ptr)
							 {
								 *ptr=del->next;
								 prev=del->next;
								 free(del);
								 del=prev;
								 return;

							 }
							 else if(del->next==0)
							 {
								 prev->next=0;
								 free(del);
								 return;
							 }
							 else
							 {
								 prev->next=del->next;
								 free(del);
								 del=prev->next;
								 return;
							 }
						 }
						 else
						 {
							 prev=del;
							 del=del->next;
						 }
					 }
					 if(flag==0)
						 printf("\033[31;1;5mrollno not found\n\033[0m");
					 break;
				case 'N':printf("enter name to delete\n");
					 scanf(" %[^\n]",s);
					 while(del)
					 {
						 if((strcmp(s,del->name))==0)
						 {
							 m=del->rollno;
							 flag=1;
							 flag2=1;
							 printf("\033[32;1mRecord deleted\n\033[0m");
							 if(del==*ptr)
							 {
								 *ptr=del->next;
								 prev=del->next;
								 free(del);
								 del=prev;
								 return;
							 }
							 else if(del->next==0)
							 {
								 prev->next=0;
								 free(del);
								 return;
							 }
							 else
							 {
								 prev->next=del->next;
								 free(del);
								 del=prev->next;
								 return;
							 }
						 }
						 else
						 {
							 prev=del;
							 del=del->next;
						 }

					 } 
					 if(flag==0)
						 printf("\033[31;1;5mName not found\n\033[0m"); break;
				default:printf("\033[31;1;5mInvalid delete option\n\033[0m");
			}
		}
		else
			del1=del1->next;
	}
	if(flag==0)
		printf("\033[31;1;5mBatch_id not found\n\033[0m"); 
}
