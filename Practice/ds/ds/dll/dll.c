#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct st
{
	struct st *prev;
	int rollno;
	char name[20];
	float marks;
	struct st *next;
}dll;
dll *head=0;

void add_begin(void);
void print_node(void);
int count_node(void);
void add_end(void);
void add_middle(void);
void save_file(void);
void read_file(void);
void reverse_print(void);
void print_rec(void);
void reverse_rec(void);
void delete_pos(void);

void main()
{
	int op,c;
	printf("MENU\n1)add_begin 2)add_middle 3)add_end 4)print_node 5)count_node 6)save_file 7)read_file 8)reverse_print 9)print_rec 10)reverse_rec 11)delete_node 12)delete_all 13)search_node 14)sort_data 15)prime_node_delete 16)palindrome_name_delete 17)exit\n");

	while(1)
	{
		printf("\033[33;1mEnter any option\n\033[0m");
		scanf("%d",&op);
		switch(op)
		{
			case 1: add_begin();   break;
			case 2: add_middle();  break;
			case 3: add_end();     break;
			case 4: print_node();  break;
			case 5: c=count_node();  
				printf("\033[32;1mn.of nodes=%d\n\033[0m",c);break;
			case 6: save_file();   break;
			case 7: read_file();   break;
			case 8: reverse_print(); break;
			case 9: print_rec();     break;
			case 10:reverse_rec();  break;
			case 11:delete_pos();  break;
			case 12:  break;
			case 13:  break;
			case 14:  break;
			case 15:  break;
			case 16:  break;
			case 17:exit(0);
			default :printf("\033[31;1;5m;invalid option\n\033[0m");
		}
	}
}

void add_begin(void)
{
	dll *new,*p;
	new=malloc(sizeof(dll));
	printf("enter rollno,name & marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	if(head==0)
		new->prev=head;
	else
		p=new;
	p=new->prev;
	new->next=head;
	head=new;
}

void print_node(void)
{
	dll *p=head;
	if(p==0)
	{
	
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	while(p)
	{
		printf("\033[36;1m%d %s %f\n\033[0m",p->rollno,p->name,p->marks);
		p=p->next;
	}
}

int count_node(void)
{
	dll *p=head;
	if(p==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return 0;
	}
	int c=0;
	while(p)
	{
		c++;
		p=p->next;
	}
	return c;
}

void add_end(void)
{
	dll *new,*p,*last;
	new=calloc(1,sizeof(dll));
	printf("enter rollno,name & marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	if(head==0)
	{
		head=new;
		p=new;
	}
	else
	{
		new->prev=p;
		p=new;
		new->next=0;
		last=head;
		while(last->next)
			last=last->next;
		last->next=new;
	}
}

void add_middle(void)
{
	dll *new;
	dll *p=head;
	if(p==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	new=calloc(1,sizeof(dll));
	printf("enter rollno,name & marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);

	int c=count_node(),i;
	for(i=0;i<c/2;i++)
		p=p->next;
	new->next=p->next;
	p->next=new;
	new->prev=p;
	p->next->prev=new;
}

void save_file(void)
{
	dll *p=head;
	if(p==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	FILE *fp;
	fp=fopen("data","w");
	while(p)
	{
		fprintf(fp,"%d %s %f\n",p->rollno,p->name,p->marks);
		p=p->next;
	}
	fclose(fp);
}

void read_file(void)
{

	FILE *fp;
	fp=fopen("data","r");
	int i=1;
	while(1)
	{
		dll *new,*p,*last;
		new=calloc(1,sizeof(dll));
		if((i=fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->marks))!=EOF);
		else
		break;
		if(head==0)
		{
			head=new;
			p=new;
		}
		else
		{
			new->prev=p;
			p=new;
			new->next=0;
			last=head;
			while(last->next)
				last=last->next;
			last->next=new;

		}
	}

}

void reverse_print(void)
{
	dll *p=head;
	if(p==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}

	while(p->next)
		p=p->next;

	while(p)
	{
		printf("\033[36;1m%d %s %f\n\033[0m",p->rollno,p->name,p->marks);
		p=p->prev;

	}

}

void print_rec(void)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	if(head)
	{
		printf("\033[36;1m%d %s %f\n\033[0m",head->rollno,head->name,head->marks);
		head=head->next;
		print_rec();
	}

}

void reverse_rec(void)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	if(head->next)
	{
		head=head->next;
		reverse_rec();
		printf("\033[36;1m%d %s %f\n\033[0m",head->rollno,head->name,head->marks);
	}

}

void delete_pos(void)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
int i=0,pos,c=count_node();
printf("\033[33;1mEnter position to delete\n\033[0m");
scanf("%d",&pos);
dll *del=head,*p;

if(pos==1)
{
del->next=head;
free(del);
head->prev=0;
}
else if(pos==c)
{
while(del->next)
del=del->next;
del=del->prev;
del->next==0;
del=del->next;
free(del);
}
else
{
while(i<pos)
{
p=del;
del=del->next;
i++;
}
p->next=del->next;
del=del->next;
del->prev=p;
del=p;
del=del->next;
free(del);

}

}
