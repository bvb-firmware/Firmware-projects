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
}cdll;

void add_begin(cdll **);
void add_middle(cdll **);
void add_end(cdll **);
void print_node(cdll *);
int count_node(cdll *);
void save_file(cdll *);
void read_file(cdll **);
void delete_pos(cdll **);
void delete_all(cdll **);
void reverse_print(cdll *);
void print_rec(cdll *);
void reverse_rec(cdll *);
void search_node(cdll *);
void reverse_links(cdll **);
void sort_data(cdll *);
int strong_rec(int num);
void delete_perfect(cdll **);

void main()
{
	cdll *head=0;
	int c,op,n,n1;
	printf("1)add_begin 2)add_middle 3)add_end 4)print_node 5)count_node 6)save_file 7)read_file 8)delete_pos 9)delete_all 10)reverse_print 11)print_rec 12)reverse_rec 13)search_node 14)sort_data 15)strong_rec 16)delete_perfect 17)reverse_links18)exit\n");
	while(1)
	{
		printf("\033[34;1menter the option\n\033[0m");
		scanf("%d",&op);
		switch(op)
		{
			case 1: add_begin(&head); break;
			case 2: add_middle(&head); break;
			case 3: add_end(&head); break;
			case 4: print_node(head); break;
			case 5: c= count_node(head);  
				printf("count=%d\n",c);break;
			case 6: save_file(head); break;
			case 7: read_file(&head); break;
			case 8: delete_pos(&head); break;
			case 9: delete_all(&head); break;
			case 10:reverse_print(head); break;
			case 11:print_rec(head); break;
			case 12:reverse_rec(head); break;
			case 13:search_node(head); break;
			case 14:sort_data(head); break;
			case 15:printf("enter any number\n");
				scanf(" %d",&n);
				n1=strong_rec(n);
				if(n1==n)
				printf("strong number\n");
				else
				 printf("not strong number\n");break;
			case 16:delete_perfect(&head); break;
			case 17:reverse_links(&head);  break;
			case 18:exit(100);  break;
			default: printf("\033[31;1;5minvalid option\n\033[0m");
		}
	}
}

void add_begin(cdll **head)
{
	cdll *new,*p,*p1;
	new=malloc(sizeof(cdll));
	printf("\033[34;1menter rollno,name & marks\n\033[0m");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	if(*head==0)
	{
		p1=new;
		*head=new;
		new->next=new;
		new->prev=new;
		p=new;
	}
	else
	{
		new->next=*head;
		new->prev=p1;
		p->prev=new;
		*head=new;
		p=new;
		p1->next=*head;
	}
}

void print_node(cdll *head)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	cdll *p=head;
	while(1)
	{
		printf("\033[36;1m%d %s %f\n\033[0m",p->rollno,p->name,p->marks);
		p=p->next;
		if(p==head)
			break;
	}

}

void add_end(cdll **head)
{
	cdll *new,*last,*p;
	new=malloc(sizeof(cdll));
	printf("\033[34;1menter rollno,name & marks\n\033[0m");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	if(*head==0)
	{
		new->prev=new;
		new->next=new;
		*head=new;
		p=new;
		last=new;
	}
	else
	{
		last->next=new;
		p->prev=new;
		new->prev=last;
		new->next=p;
		last=new;
	}
}

int count_node(cdll *head)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return 0;
	}
	cdll *p=head;
	int c=0;
	while(1)
	{
		c++;
		p=p->next;
		if(p==head)
			break;
	}
	return c;
}

void add_middle(cdll **head)
{
	if(*head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	cdll *new,*p=*head,*p1;
	new=malloc(sizeof(cdll));
	printf("\033[34;1menter rollno,name & marks\n\033[0m");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	int c,i=0;
	c=count_node(*head);
	while(i<(c/2))
	{
		p1=p;
		p=p->next;
		i++;
	}
	p1->next=new;
	new->prev=p1;
	new->next=p;
	p->prev=new;
}

void save_file(cdll *head)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	FILE *fp;
	fp=fopen("data1","a");
	cdll *p=head;
	while(1)
	{
		fprintf(fp,"%d %s %f\n",p->rollno,p->name,p->marks);
		p=p->next;
		if(p==head)
			break;
	}
	fclose(fp);
}


void read_file(cdll **head)
{
	FILE *fp;
	fp=fopen("data1","r");
	if(fp==0)
	{
		printf("\033[31;1;5m no records found in file\n\033[0m");
		return;
	}
	int i;
	while(1)
	{
		cdll *new,*p,*last;
		new=malloc(sizeof(cdll));
		i=fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->marks);
		if(i==-1)
			return;
		if(*head==0)
		{
			new->prev=new;
			new->next=new;
			*head=new;
			p=new;
			last=new;
		}
		else
		{
			p->next=new;
			last->prev=new;
			new->next=last;
			new->prev=p;
			*head=new;
			last=new;
		}
	}
}

void delete_pos(cdll **head)
{
	if(*head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	int pos,c,i;
	c=count_node(*head);
	printf("\033[35;1menter position to delete\n\033[0m");
	scanf("%d",&pos);
	cdll *del=*head,*p,*last=*head;

	if(pos==1)
	{
		*head=del->next;
		p=del->next;
		i=1;
		while(i<c)
		{
			last=last->next;
			i++;
		}
		p->prev=last;
		last->next=*head;
		free(del);
	}
	else if(pos==c)
	{
		last=*head;
		while(1)
		{
			p=del;
			del=del->next;
			if(*head==(del->next))
				break;
		}
		last->prev=p;
		p->next=last;
		free(del);
	}
	else if(pos>c && pos<c)
	{
		i=1;
		while(i<pos)
		{
			p=del;
			del=del->next;
			i++;
		}
		p->next=del->next;
		del->next->prev=p;
	}
	else
		printf("\033[33;1minvalid position to delete\n\033[0m"); 
}

void delete_all(cdll **head)
{
	if(*head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	cdll *del=*head;
	while(del->next!=*head)
		del=del->next;
	del->next=0;
	del=*head;

	while(del)
	{
		*head=del->next;
		free(del);
		del=*head;
	}
}

void reverse_print(cdll *head)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	cdll *p=head->prev;
	while(1)
	{
		printf("\033[36;1m%d %s %f\n\033[0m",p->rollno,p->name,p->marks);
		if(p==head)
			break;
		p=p->prev;
	}
}

void print_rec(cdll *head)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	static int i=0;
	if(i==0)
		head->prev->next=0;
	i=1;
	if(head)
	{
		printf("\033[36;1m%d %s %f\n\033[0m",head->rollno,head->name,head->marks);
		print_rec(head->next);
	}
}

void reverse_rec(cdll *head)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	static int i=0;
	if(i==0)
		head->prev->next=0;
	i=1;
	if(head)
	{
		reverse_rec(head->next);
		printf("\033[36;1m%d %s %f\n\033[0m",head->rollno,head->name,head->marks);
	}
}

void search_node(cdll *head)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	char s[20];
	printf("\033[33;1menter name to search\n\033[0m");
	scanf("%s",s);
	cdll *p=head;
	while(1)
	{
		if((strcmp(s,p->name))==0)
		{
			printf("\033[36;1m%d %s %f\n\033[0m",p->rollno,p->name,p->marks);
			return;
		}
		p=p->next;
		if(p==head)
		{
			printf("\033[31;1;5mno name matched\n\033[0m");
			return;
		}
	}
}

void sort_data(cdll *head)
{
	if(head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	cdll *p=head,*l=head;
	int i,op1;
	float f;
	char *s;
	printf("\033[33;1mselect sorting tpye\n1)rollno wise 2)name wise 3)marks\n\033[0m");
	scanf(" %d",&op1);
	switch(op1)
	{
		case 1:while(1)
		       {
			       l=p->next;
			       while(l!=head)
			       {
				       if((l->rollno)>(p->rollno))
				       {
					       i=p->rollno;
					       p->rollno=l->rollno;
					       l->rollno=i;

					       strcpy(s,p->name);
					       strcpy(p->name,l->name);
					       strcpy(l->name,s);

					       f=p->marks;
					       p->marks=l->marks;
					       l->marks=f;
				       }
				       l=l->next;
			       }
			       p=p->next;
			       if(p==head)
				       break;
		       } break;

		case 2:while(1)
		       {
			       l=p->next;
			       while(l!=head)
			       {
				       if((strcmp(l->name,p->name))<0)
				       {
					       i=p->rollno;
					       p->rollno=l->rollno;
					       l->rollno=i;

					       strcpy(s,p->name);
					       strcpy(p->name,l->name);
					       strcpy(l->name,s);

					       f=p->marks;
					       p->marks=l->marks;
					       l->marks=f;
				       }
				       l=l->next;
			       }
			       p=p->next;
			       if(p==head)
				       break;
		       } break;


		case 3:while(1)
		       {
			       l=p->next;
			       while(l!=head)
			       {
				       if((l->marks)>(p->marks))
				       {
					       i=p->rollno;
					       p->rollno=l->rollno;
					       l->rollno=i;

					       strcpy(s,p->name);
					       strcpy(p->name,l->name);
					       strcpy(l->name,s);

					       f=p->marks;
					       p->marks=l->marks;
					       l->marks=f;
				       }
				       l=l->next;
			       }
			       p=p->next;
			       if(p==head)
				       break;
		       } break;

		default:printf("\033[31;1;5minvalid option\n\033[0m");
	}
}

void reverse_links(cdll **head)
{
	if(*head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	cdll *p=*head,*p1;
	int c,i=0;
	c=count_node(*head);
	while(i<c)
	{
		p1=p->next;
		p->next=p->prev;
		p->prev=p1;
		p=p->prev;
		i++;
	}
	*head=p->next;
}


void delete_perfect(cdll **head)
{
	if(*head==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	cdll *del=*head,*p,*last;
	int i=1,sum,j;
	j=count_node(*head);
	while(j--)
	{
		last=del->next;
		while(last!=*head)
			last=last->next;
		for(i=1,sum=0;i<(del->rollno);i++)
		{
			if((del->rollno)%i==0)
				sum=sum+i;
		}
		if(sum==(del->rollno))
		{
			if(del==*head)
			{
				del->next->prev=last;
				last->next=del->next;
				*head=del->next;
				p=del->next;
				free(del);
				del=0;
				del=p;
			}
			else if(del==last)
			{
				del->prev->next=*head;
				del->next->prev=del->prev;
				p=del->next;
				free(del);
				del=p;
			}
			else
			{
				del->prev->next=del->next;
				del->next->prev=del->prev;
				p=del->next;
				free(del);
				del=p;
			}
		}
		else
		{
			p=del;
			del=del->next;
		}
	}
}

int strong_rec(int n)
{
	static int i=1,r,r1=1,sum=0;
	int num;
	if(n)
	{
		r=n%10;
		if(i<=r)
		{
			r1=r1*i;
			i++;
			strong_rec(n);
		}
		sum=sum+r1;
		i=1;
		r1=1;
		strong_rec(n/10);
	}
	else
	{
		num=sum;
		sum=0;
		return num;
	}
}
