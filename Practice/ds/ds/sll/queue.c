

#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char name[20];
	struct st *next;
};
struct st *head=0;
void enqueue(void);
void dequeue(void);
void display(void);
void main()
{
	int op;
	while(100)
	{
		printf("select an option\n1)enqueue 2)dequeue 3)display\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:enqueue(); break;
			case 2:dequeue(); break;
			case 3:display(); break;
			case 4:exit(100);
			default: printf("\033[31;1;5minvalid option\n\033[0m");

		}
	}
}

void enqueue(void)
{
	struct st *new,*last;
	new=calloc(1,sizeof(struct st));
	printf("enter rollno & name\n");
	scanf("%d %s",&new->rollno,new->name);
	if(head==0)
		head=new;
	else
	{
		last=head;
		while(last->next)
			last=last->next;

		last->next=new;
	}
}

void dequeue(void)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	struct st *del=head;
	head=del->next;
	free(del);
}

void display(void)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	struct st *p=head;
	while(p)
	{
		printf("\033[36;1m%d %s\n\033[0m",p->rollno,p->name);
		p=p->next;
	}
}

