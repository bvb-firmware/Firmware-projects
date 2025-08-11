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
void sort_data(void);
void swap_data(void);
void delete_all(void);
void search_node(void);
void prime_node_delete(void);
void palindrome_name_delete(void);

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
			case 12:delete_all();  break;
			case 13:search_node();  break;
			case 14:sort_data();  break;
			case 15:prime_node_delete();  break;
			case 16:palindrome_name_delete();  break;
			case 17:exit(0);
			default :printf("\033[31;1;5m;invalid option\n\033[0m");
		}
	}
}

void add_begin(void)
{
	dll *new;
	new=malloc(sizeof(dll));
	printf("enter rollno,name & marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	if(head==0)
	head=new;
	else
	{
	new->next=head;
	head->prev=new;
	head=new;
	}
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
	dll *new,*p;
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
		p->next=new;
		new->prev=p;
		p=new;
		new->next=0;
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
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	dll *new;
	while(1)
	{
		new=malloc(sizeof(dll));
		if((fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->marks))!=-1)
		{
			if(head==0)
			{
				head=new;
				new->next=0;
				new->prev=0;
			}
			else
			{
				head->prev=new;
				new->next=head;
				new->prev=0;
				head=new;
			}
		}
		else
		{
			free(new); 
			return;
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

void sort_data(void)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	int op1,i;
	float f;
	char *s;
	dll *p,*head1;
	head1=head;
	printf("\033[34;1mselect sorting\n\033[0m 1)rollnowise 2)namewise 3)markswise\n");
	scanf(" %d",&op1);
	switch(op1)
	{
		case 1:
			while(head1)
			{
				p=head1->next;
				while(p)
				{
					if((p->rollno)<(head1->rollno))
					{
						i=p->rollno;
						p->rollno=head1->rollno;
						head1->rollno=i;

						strcpy(s,p->name);
						strcpy(p->name,head1->name);
						strcpy(head1->name,s);

						f=p->marks;
						p->marks=head1->marks;
						head1->marks=f;

					}
					p=p->next;
				}
				head1=head1->next;
			}
			break;
		case 2:
			while(head1)
			{
				p=head1->next;
				while(p)
				{
					if((strcmp(p->name,head1->name))<0)
					{
						i=p->rollno;
						p->rollno=head1->rollno;
						head1->rollno=i;

						strcpy(s,p->name);
						strcpy(p->name,head1->name);
						strcpy(head1->name,s);

						f=p->marks;
						p->marks=head1->marks;
						head1->marks=f;

					}
					p=p->next;
				}
				head1=head1->next;
			} 
			break;
		case 3:
			while(head1)
			{
				p=head1->next;
				while(p)
				{
					if((p->marks)<(head1->marks))
					{
						i=p->rollno;
						p->rollno=head1->rollno;
						head1->rollno=i;

						strcpy(s,p->name);
						strcpy(p->name,head1->name);
						strcpy(head1->name,s);

						f=p->marks;
						p->marks=head1->marks;
						head1->marks=f;

					}
					p=p->next;
				}
				head1=head1->next;
			}
			break;
		default :printf("\033[31;1;5minvalid option\n\033[0m");
	}
}

void delete_all(void)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	dll *del;
	while(head)
	{
		del=head->next;
		free(head);
		head=del;
	}
}

void search_node(void)
{

	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	dll *p=head;
	int i;
	printf("enter rollno to search\n");
	scanf("%d",&i);
	while(p)
	{
		if(p->rollno==i)
			printf("\033[36;1m%d %s %f\n",p->rollno,p->name,p->marks);
		p=p->next;
	}
}

void prime_node_delete(void)
{

	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}

	dll *del,*p;
	del=head;
	int i,j;
	while(del)
	{
		j=del->rollno;
		for(i=2;i<=j;i++)
		{
			if(j%i==0)
				break;
		}
		if(j==i)
		{
			if(del==head)
			{
				head=del->next;
				p=del->next;
				free(del);
				del=p;
			}
			else
			{
				p->next=del->next;
				free(del);
				del=p->next;
			}
		}
		else
		{
			p=del;
			del=del->next;
		}
	}

}

void palindrome_name_delete(void)
{

	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	int i,j=0;
	char s[20];
	dll *del=head,*p;
	while(del)
	{
		strcpy(s,del->name);
		j=strlen(s);
		for(i=0,j-=1;i<j;i++,j--)
		{
			if(s[i]!=s[j])
				break;
		}
		if(i>=j)
		{
			if(del==head)
			{
				head=del->next;
				p=del->next;
				free(del);
				del=p;
			}
			else
			{
				p->next=del->next;
				free(del);
				del=p->next;
			}
		}
		else
		{
			p=del;
			del=del->next;
		}
	}
}

