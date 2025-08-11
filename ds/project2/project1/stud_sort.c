#include"header.h"

void stud_sort(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}
	sll *p=ptr,*q;
	char op;
	float f;
	int i;
	char s[50];
	printf("\033[33;1mr/R)sort based on rollno n/N)sort based on name p/P)sort based on percentage\nenter an option to sort\n\033[0m");
	scanf(" %c",&op);
	if(op>='a'&&op<='z')
		op=op-32;
	switch(op)
	{
		case 'N' : 
			while(p)
			{
				q=p->next;
				while(q)
				{
					if((strcmp(q->name,p->name))<0)
					{
						f=p->percentage;
						p->percentage=q->percentage;
						q->percentage=f;

						strcpy(s,p->name);
						strcpy(p->name,q->name);
						strcpy(q->name,s);

						i=p->rollno;
						p->rollno=q->rollno;
						q->rollno=i;

					}
					q=q->next;
				}
				p=p->next;
			}  break;


		case 'P' : 
			while(p)
			{
				q=p->next;
				while(q)
				{
					if((q->percentage)<(p->percentage))
					{
						f=p->percentage;
						p->percentage=q->percentage;
						q->percentage=f;

						strcpy(s,p->name);
						strcpy(p->name,q->name);
						strcpy(q->name,s);

						i=p->rollno;
						p->rollno=q->rollno;
						q->rollno=i;

					}
					q=q->next;
				}
				p=p->next;
			}  break;

		case 'R' : 
			while(p)
			{
				q=p->next;
				while(q)
				{
					if((q->rollno)<(p->rollno))
					{
						f=p->percentage;
						p->percentage=q->percentage;
						q->percentage=f;

						strcpy(s,p->name);
						strcpy(p->name,q->name);
						strcpy(q->name,s);

						i=p->rollno;
						p->rollno=q->rollno;
						q->rollno=i;

					}
					q=q->next;
				}
				p=p->next;
			}  break;
		default:printf("\033[31;1;5mInvalid option to sort\n\033[0m");
	}
printf("\033[32;1mSorted the list\n\033[0m");
}
