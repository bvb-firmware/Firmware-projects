#include"header.h"
//extern int r[100][12];
extern int m,n,o;
int flag1,r1;
int flag2;
void stud_add(sll **ptr)
{
	int i,j,k,l,x=1;
	sll *new,*last;
	new=malloc(sizeof(sll));
	printf("enter student full-name and percentage\n");
	scanf(" %[^\n] %f",new->name,&new->percentage);

	if(m==0)
	{
		r1++;
		new->rollno=r1;
	}
	else
	{
		//if(new->doj.month==n && new->doj.year==o)
		new->rollno=m;
		//m=0;
	}
	if(flag1)
	{
		if(flag1%2)
		{
		new->next=*ptr;
		*ptr=new;
		}
		else
		{
			last=*ptr;
			while(last->next)
				last=last->next;
			last->next=new;
			new->next=0;

		}
	}
	else if(flag2==1)
	{
		if(m==1)
		{
			new->next=*ptr;
			*ptr=new;
		}
		else
		{
			last=*ptr;
			while(x<(m-1))
			{
				x++;
				last=last->next;
			}
			new->next=last->next;
			last->next=new;
			m=0;
			flag2=0;
		}
	}
	else
	{
		if(*ptr==0)
		{
			new->next=0;
			*ptr=new;
		}
		else
		{
			last=*ptr;
			while(last->next)
				last=last->next;
			last->next=new;
			new->next=0;
		}
	}
}
