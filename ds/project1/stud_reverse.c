#include"header.h"
extern int flag1;
void stud_reverse(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}
	flag1=1;

	sll *p=ptr,*q=ptr;
	int i=0,j=0,k=0,l=0;
	float f;
	char s[50];
	while(p)
	{
		l++;
		p=p->next;
	}
	while(k<(l/2))
	{
		p=ptr;
		j=0;
		while(j<(l-k-1))
		{
			j++;
			p=p->next;
		}

		f=p->percentage;
		p->percentage=q->percentage;
		q->percentage=f;

		strcpy(s,p->name);
		strcpy(p->name,q->name);
		strcpy(q->name,s);

		i=p->rollno;
		p->rollno=q->rollno;
		q->rollno=i;

		i=p->dob.day;
		p->dob.day=q->dob.day;
		q->dob.day=i;

		i=p->dob.month;
		p->dob.month=q->dob.month;
		q->dob.month=i;

		i=p->dob.year;
		p->dob.year=q->dob.year;
		q->dob.year=i;

		i=p->doj.day;
		p->doj.day=q->doj.day;
		q->doj.day=i;

		i=p->doj.month;
		p->doj.month=q->doj.month;
		q->doj.month=i;

		i=p->doj.year;
		p->doj.year=q->doj.year;
		q->doj.year=i;

		strcpy(s,p->batch_id);
		strcpy(p->batch_id,q->batch_id);
		strcpy(q->batch_id,s);
		
		q=q->next;
		k++;
	}
printf("\033[32;1mReversed the list\n\033[0m");

}
