#include"header.h"
extern int flag1;
void stud_reverse(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}
	flag1++;

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

		q=q->next;
		k++;
	}
printf("\033[32;1mReversed the list\n\033[0m");

}
