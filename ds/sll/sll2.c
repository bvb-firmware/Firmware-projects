
#include<stdio.h>
#include<stdlib.h>
typedef struct st{
int rollno;
char name[20];
float marks;
struct st *next;
}sll;
void add_beg(sll **);
void print(sll *);

void main()
{
sll *head=0;
printf("1)addb 2)print 3)adde 4)addm\nselect an option\n");
int op;
while(1)
{
scanf("%d",&op);

switch(op)
{
case 1:add_beg(&head);break;
case 2:print(head);break;
}
}
}

void add_beg(sll **ptr)
{
sll *new;
new=malloc(sizeof(sll));
printf("enter roolno,name & marks\n");
scanf("%d %s %f",&new->rollno,new->name,&new->marks);
*ptr=new;
new->next=0;
}

void print(sll *ptr)
{
if(ptr==0)
{
printf("no records found\n");
return;
}

printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
}
