#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st
{
int id;
char name[20];
struct st *next;
}sll;

void add_begin(sll **);
void print_node(sll *);
int count_node(sll *);
void del_node(sll **);
int perfect_rec(int);

void main()
{
sll *head=0;
int c,op,sum=0,n;
printf("MENU\n 1)add_begin 2)print_node 3)count_node 4)del_node 5)perfect_rec\n");
while(1)
{
printf("select an option\n");
scanf("%d",&op);
switch(op)
{
	case 1: add_begin(&head);  break;
	case 2: print_node(head); break;
	case 3: c=count_node(head); 
		printf("count=%d\n",c);break;
	case 4: del_node(&head); break;
	case 5: printf("enter number\n");
		scanf("%d",&n);
		sum=perfect_rec(n);
		if(sum==n)
			printf("perfect\n");
		else
			printf("not perfect\n"); break;
	case 6: exit(10); break;
	default :printf("invalid option\n");
}
}
}

void add_begin(sll **ptr)
{
sll *new;
new=malloc(sizeof(sll));
printf("enter rollno,name\n");
scanf("%d %s",&new->id,new->name);
new->next=*ptr;
*ptr=new;
}

void print_node(sll *ptr)
{
if(ptr==0)
{
printf("no records found\n");
return;
}
l1:
printf("%d %s\n",ptr->id,ptr->name);
ptr=ptr->next;
if(ptr)
goto l1;

}

int count_node(sll *ptr)
{
if(ptr==0)
{
printf("no records found\n");
return 0;
}
int sum=0,c=0;
while(ptr)
{
sum=perfect_rec(ptr->id);
if(sum==(ptr->id))
c++;
ptr=ptr->next;
}
return c;
}

void del_node(sll **ptr)
{
sll *del,*prev;
del=*ptr;
int pos;
printf("enter position to delete\n");
scanf("%d",&pos);
if(pos==1)
{
*ptr=del->next;
prev=del->next;
free(del);
del=*ptr;
}
else
{
while(pos--)
{
prev=del;
del=del->next;
}
prev->next=del->next;
prev=del->next;
free(del);
del=prev;
}
}

int perfect_rec(int n)
{
static int i=1,sum=0;
int num;
if(i<n)
{
if(n%i==0)
sum=sum+i;
i++;
perfect_rec(n);
}
else
{
i=1;
num=sum;
sum=0;
return num;
}
}

