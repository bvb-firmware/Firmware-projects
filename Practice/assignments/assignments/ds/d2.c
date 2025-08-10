//Write a program to merge two Singly linked list.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct st
{
int rollno;
char name[20];
struct st *next;
}sll;
void add_sll1(sll **);
void add_sll2(sll **);
void print_node(sll *);
void print_node1(sll *);
void merge_sll(sll **,sll **);
void reverse_links_rec(sll **);
int count(sll *);
void main()
{
sll *head=0;
sll *head1=0;
int op,c;
while(op)
{
printf("1)add for sll1 2)add for sll2 3)print data of sll1 4)print data of sll2 5)merge 6)reverse_links_recusion 7)count 8)exit\n");
printf("enter any option\n");
scanf("%d",&op);
switch(op)
{
case 1:add_sll1(&head); break;
case 2:add_sll2(&head1);break;
case 3:print_node(head);break;
case 4:print_node1(head1);break;
case 5:merge_sll(&head,&head1); break;
case 6:reverse_links_rec(&head);  break;
case 7:c=count(head);
printf("count=%d\n",c);
case 8:exit(0);
}
}
}

void add_sll1(sll **ptr)
{
sll *new;
new=malloc(sizeof(sll));
printf("enteer the rollno and name\n");
scanf("%d %s",&new->rollno,new->name);
new->next=*ptr;
*ptr=new;

}

void add_sll2(sll **ptr)
{
sll *new;
new=malloc(sizeof(sll));
printf("enteer the rollno and name\n");
scanf("%d %s",&new->rollno,new->name);
new->next=*ptr;
*ptr=new;
}

void print_node(sll *ptr)
{
while(ptr)
{
printf("\033[36;1m%d %s\n\033[0m",ptr->rollno,ptr->name);
ptr=ptr->next;
}
}

void print_node1(sll *ptr)
{
while(ptr)
{
printf("\033[36;1m%d %s\n\033[0m",ptr->rollno,ptr->name);
ptr=ptr->next;
}
}

void merge_sll(sll **ptr,sll **ptr1)
{
	sll *p,*p1,*del;
	del=*ptr;
	p=*ptr1;
	p1=del->next;

	while(p->next)
	{
		del->next=p;
		p=p->next;
		del=del->next;
		del->next=p1;
		del=del->next;
		p1=p1->next;
	}
	*ptr1=0;
}

void reverse_links_rec(sll **ptr)
{
	 sll *first,*last,*p,*p1,*l;
	first=*ptr;
	last=*ptr;
	int j,c=count(*ptr);
	static int i;
	if(i<c-1)
	{
		for(j=0;j<i;j++)
		{
		p1=first;
		first=first->next;
		}
		for(j=0;j<c-1-i;j++)
		{
			p=last;
			last=last->next;
		}
		if(i==0)
		*ptr=last;
		l=last->next;
		last->next=first->next;
		first->next=l;
		if(i!=0)
			p1->next=last;
		p->next=first;
		i++;
		reverse_links_rec(&*ptr);
	}
}

int count(sll *ptr)
{
int c=0;
while(ptr)
{
c++;
ptr=ptr->next;
}
return c;
}
