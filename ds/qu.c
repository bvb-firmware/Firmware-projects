
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
int rollno;
char name[20];
struct st *next;
}sll;
void enq(sll **);
void deq(sll **);
void display(sll *);
void main()
{
sll *head=0;
printf("1)enqueue data 2)dequeue data 3)display data\n");
int op;
while(1)
{
printf("select anoption\n");
scanf("%d",&op);
switch(op)
{
case 1:enq(&head);break;
case 2:deq(&head);break;
case 3:display(head);break;
}
}
}


void enq(sll **ptr)
{
sll *new,*p;
new=malloc(sizeof(sll));
printf("enter\n");
scanf("%d %s",&new->rollno,new->name);
if(*ptr==0)
{
p=new->next;
new->next=*ptr;
*ptr=new;
}
else
{
p=new;
new->next=0;
p=new->next;
}
}

void deq(sll **ptr)
{
if(*ptr==0)
{
printf("no\n");
return;
}
sll *del;
del=*ptr;
*ptr=del->next;
free(del);
del=0;
}

void display(sll *ptr)
{
if(ptr==0)
{
printf("no\n");
return;
}
while(ptr)
{
printf("%d %s\n",ptr->rollno,ptr->name);
ptr=ptr->next;
}
}
