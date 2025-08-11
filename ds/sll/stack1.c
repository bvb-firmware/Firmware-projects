
#include<stdio.h>
#include<stdlib.h>
int top=-1;
struct st
{
int rollno;
char name[20];
struct st *next;
};
struct st *head=0;
void push(void);
void pop(void);
void display(void);
#define size 5
void main()
{
	int op;
	while(1)
	{
		printf("select any choice\n1)push 2)pop 3)display 4)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:push(); break;
			case 2:pop(); break;
			case 3:display(); break;
			case 4:exit(1);
			default:printf("\033[31;1;5minvalid choice\n\033[0m");
		}
	}
}

void push(void)
{
	if(top>=size-1)
	{
		printf("\033[31;1;5mstack overflow\n\033[0m");
		return;
	}
	struct st *new;
	new=calloc(1,sizeof(struct st));
	printf("enter the data\n");
	scanf("%d %s",&new->rollno,new->name);
	new->next=head;
	head=new;
	top++;
}

void pop(void)
{
	if(top<=-1)
	{
		printf("\033[31;1;5mstack underflow\n\033[0m");
		return;
	}
	struct st *del=head;
	head=del->next;
	free(del);
	top--;
}

void display(void)
{
	if(head==0)
	{
		printf("\033[31;1;5mstack empty\n\033[0m");
		return;
	}
	struct st *p=head;
	while(p)
	{
		printf("\033[36;1m%d %s\n\033[0m",p->rollno,p->name);
		p=p->next;
	}
}
