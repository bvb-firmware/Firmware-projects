#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdarg.h>
typedef struct st
{
	int rollno;
	char name[20];
	float marks;
	struct st *next;
}csll;
csll *headptr=0;
void add_begin(void);
void print_node(void);
int count_node(void);
void add_middle(void);
void add_last(void);
void save_file(void);
void read_file(void);
void print_rec(void);
void print_reverse(void);
void reverse_rec(void);
void delete_node(void);
void delete_all(void);
void search_node(void);
void sort_data(void);
void reversing_content(void);
void links_reverse(void);
void armstrong_delete_node(void);
void palindrome_name_delete(void);
void main()
{
	int op;
	printf("MENU:CSLL\n1)add_begin 2)add_middle 3)add_end 4)print_node 5)count_node 6)save_file 7)read_file 8)print_rec 9)print_reverse 10)reverse_rec 11)delete_node 12)delete_all 13)search_node 14)sort_data 15)reversing_content 16)armstrong_delete_node 17)palindrome_name_delete 18)links_reverse 19)exit\n");
	while(1)
	{
		int c;
		printf("\033[33;1mEnter your choice\n\033[0m");
		scanf("%d",&op);
		switch(op)
		{
			case 1: add_begin();  break;
			case 2: add_middle(); break;
			case 3: add_last();   break;
			case 4: print_node(); break;
			case 5: c=count_node(); 
				printf("\033[32;1mno.of nodes=%d\n\033[0m",c);break;
			case 6: save_file(); break;
			case 7: read_file(); break;
			case 8: print_rec(); break;
			case 9: print_reverse();  break;
			case 10:reverse_rec();  break;
			case 11:delete_node();  break;
			case 12:delete_all();  break;
			case 13:search_node();  break;
			case 14:sort_data();  break;
			case 15:reversing_content();  break;
			case 16:armstrong_delete_node();  break;
			case 17:palindrome_name_delete();  break;
			case 18:links_reverse();  break;
			case 19:  exit(0);
			default:printf("\033[31;1;5minvalid choice\n\033[0m");
		}

	}
}
void add_begin(void)
{
	csll *new,*p;
	new=malloc(sizeof(csll));
	printf("enter rollno,name,marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	if(headptr==0)
		p=new;
	new->next=headptr;
	headptr=new;
	p->next=new;
}

void print_node(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	csll *p=headptr;
	int flag=0;
	while(flag!=1)
	{
		printf("\033[36;1m%d %s %f\n",headptr->rollno,headptr->name,headptr->marks);
		headptr=headptr->next;
		if(headptr==p)
		break;
	}
}

int count_node(void)
{
	int c=0;
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return c;
	}
	csll *p=headptr;
	while(headptr)
	{
		c++;
		headptr=headptr->next;
		if(headptr==p)
			break;
	}
	return c;

}

void add_middle(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	csll *new,*p;
	new=malloc(sizeof(csll));
	printf("enter rollno,name,marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	int c=count_node(),i;
	p=headptr;
	for(i=0;i<(c/2)-1;i++)
		p=p->next;

	new->next=p->next;
	p->next=new;

}

void add_last(void)
{
	csll *new,*last;
	new=malloc(sizeof(csll));
	printf("enter rollno,name,marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	if(headptr==0)
	{
		headptr=new;
		new->next=headptr;
	}
	else{
		new->next=headptr;
		last=headptr;
		while((last->next)!=headptr)
			last=last->next;
		last->next=new;

	}

}

void save_file(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
FILE *fp;
fp=fopen("data","w");
csll *p=headptr;
while(headptr)
{
fprintf(fp,"%d %s %f\n",headptr->rollno,headptr->name,headptr->marks);
headptr=headptr->next;
if(p==headptr)
break;
}
printf("\033[33;1mdata is saved in the file\n\033[0m");
fclose(fp);
}

void read_file(void)
{
	FILE *fp;
	fp=fopen("data","r");
	char ch;
	int i=1;
	if((ch=fgetc(fp))==EOF)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	fseek(fp,-1,SEEK_CUR);
	while(1)
	{
		csll *new,*last;
		new=malloc(sizeof(csll));
		if(i=fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->marks)!=EOF);
		else
			break;
			if(headptr==0)
			{
				headptr=new;
				new->next=headptr;
			}
			else
			{
				last=headptr;
				new->next=headptr;
				while((last->next)!=headptr)
					last=last->next;
				last->next=new;
			}
	}
//	free(new);
}

void print_rec(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	int c=count_node();
	static int i;
	if(i<c)
	{
		printf("\033[36;1m%d %s %f\n\033[0m",headptr->rollno,headptr->name,headptr->marks);
		headptr=headptr->next;
		i++;
		print_rec();
	}
}

void print_reverse()
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	csll *p;
	int c=count_node(),i,j;
	for(i=0;i<c;i++)
	{
		p=headptr;
		j=0;
		while(j<c-1-i)
		{
			j++;
			p=p->next;
		}
		printf("\033[36;1m%d %s %f\n\033[0m",p->rollno,p->name,p->marks);
	}
}

void reverse_rec(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}

	int c=count_node();
	static int i;
	if(i<c-1)
	{
		i++;
		headptr=headptr->next;
		reverse_rec();
		printf("\033[36;1m%d %s %f\n\033[0m",headptr->rollno,headptr->name,headptr->marks);
	}
}

void delete_node(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}

	csll *del,*last,*prev;
	del=headptr;
	last=headptr;
	while((last->next)!=headptr)
		last=last->next;
	int pos,i,c=count_node();
	printf("\033[33;1menter postion to delete the node\n\033[0m");
	scanf("%d",&pos);
	if(pos==1)
	{
		headptr=del->next;
		free(del);
		last->next=headptr;
	}
	else if(pos==c)
	{
		prev=last;
		free(last);
		last=headptr;
		while((last->next)!=prev)
			last=last->next;
		last->next=headptr;
	}
	else if(pos>c && pos<c)
	{
		for(i=0;i<pos;i++)
		{
			prev=del;
			del=del->next;
		}
		prev->next=del->next;
		free(del);
		del=prev->next;
	}
	else
	printf("\033[31;1;5minvalid position to delete\n\033[0m");
}

void delete_all(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	csll *del,*last,*p;
	del=headptr;
	last=headptr;
	p=headptr;
	int c=0;
	while((last->next)!=headptr)
		last=last->next;
	while((del->next)!=p)
	{
		c++;
		headptr=del->next;
		free(del);
		del=headptr;
		last->next=headptr;
		if(c==3)
			break;
	}
}

void search_node(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	char s[20];
	int f=0;
	csll *p=headptr;
	printf("\033[33;1menter name tosearch in the records\n\033[0m");
	scanf("%s",s);
	while((headptr->next)!=p)
	{
		if(strcmp(s,(headptr->name))==0)
		{
			f=1;
			printf("\033[36;1m%d %s %f\n\033[0m",headptr->rollno,headptr->name,headptr->marks);
		}
		headptr=headptr->next;
	}
	if(f==0)
		printf("\033[31;1;5mno name matched\n\033[0m");

}

void sort_data(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}

	csll *p,*p1;
	p=headptr;
	char s[20];
	int i,op1;
	float f;
	printf("\033[34;1mselect an option\n  1)rollno wise sorting\n  2)name wise sorting\n  3)marks wise sorting\n\033[0m");
	scanf("%d",&op1);
	switch(op1)
	{
		case 1:while((p->next)!=headptr)
		       {
			       for(p1=p->next;(p1->next)!=headptr;p1=p1->next)
			       {
				       if(p1->rollno<p->rollno)
				       {
					       i=p->rollno;
					       p->rollno=p1->rollno;
					       p1->rollno=i;

					       strcpy(s,p->name);
					       strcpy(p->name,p1->name);
					       strcpy(p1->name,s);

					       f=p->marks;
					       p->marks=p1->marks;
					       p1->marks=f;
				       }
			       }
			       p=p->next;
		       } break;

		case 2:while((p->next)!=headptr)
		       {
			       for(p1=p->next;(p1->next)!=headptr;p1=p1->next)
			       {
				       if((strcmp(p1->name,p->name))<0)
				       {
					       i=p->rollno;
					       p->rollno=p1->rollno;
					       p1->rollno=i;

					       strcpy(s,p->name);
					       strcpy(p->name,p1->name);
					       strcpy(p1->name,s);

					       f=p->marks;
					       p->marks=p1->marks;
					       p1->marks=f;
				       }
			       }
			       p=p->next;
		       } break;

		case 3:while((p->next)!=headptr)
		       {
			       for(p1=p->next;(p1->next)!=headptr;p1=p1->next)
			       {
				       if(p1->marks<p->marks)
				       {
					       i=p->rollno;
					       p->rollno=p1->rollno;
					       p1->rollno=i;

					       strcpy(s,p->name);
					       strcpy(p->name,p1->name);
					       strcpy(p1->name,s);

					       f=p->marks;
					       p->marks=p1->marks;
					       p1->marks=f;
				       }
			       }
			       p=p->next;
		       } break;

		default : printf("\033[31;1;5minvalid selection\n\033[0m");
	}
}

void reversing_content(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	int i,j,k,c=count_node();
	char s[20];
	float f;
	csll *p,*p1;
	p=headptr;

	for(k=0;k<c/2;k++)
	{
		p1=headptr;
		for(j=0;j<c-1-k;j++)
			p1=p1->next;
		i=p->rollno;
		p->rollno=p1->rollno;
		p1->rollno=i;

		strcpy(s,p->name);
		strcpy(p->name,p1->name);
		strcpy(p1->name,s);

		f=p->marks;
		p->marks=p1->marks;
		p1->marks=f;

		p=p->next;
	}
}

void links_reverse(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	csll *p,*last,*prev;
	p=headptr;
	last=headptr;
	prev=headptr;
	int i,j,c=count_node();
	while((last->next)!=headptr)
		last=last->next;
	headptr=last;
	for(i=0;i<c;i++)
	{
		last=p;
		for(j=0;j<c-i-1;j++)
		{
			prev=last;
			last=last->next;
		}
		last->next=prev;

	}
	//headptr->next=;
	p->next=headptr;
}


void armstrong_delete_node(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	int num,i,r,r1,sum,c,temp;
	int c1=count_node(),j=0;
	csll *p=headptr,*prev=headptr,*l=headptr;
	while((l->next)!=headptr)
	l=l->next;
	while(j<c1)
	{
		num=p->rollno;
		for(temp=num,c=0;temp;temp/=10,c++);
		for(temp=num,sum=0;temp;temp/=10)
		{
			r=temp%10;
			for(r1=r,i=0;i<c-1;i++)
				r1=r1*r;
			sum=sum+r1;
		}
			if(sum==num)
			{
				if(p==headptr)
				{
					if(j==(c1-1))
					headptr=0;
					else
					headptr=p->next;
					p->next=0;
					free(p);
					p=headptr;
					prev=headptr;
				}
				else if((p->next)==headptr) 
				{
					prev->next=p->next;
					free(p);
					p=prev->next;
					//headptr=prev;
				}
				else
				{
					prev->next=p->next;
					free(p);
					p=prev->next;

				}
			}
			else
			{
				prev=p;
				p=p->next;
			}
		
	j++;
	}
l->next=headptr;
}

void palindrome_name_delete(void)
{
	if(headptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	char s[20];
	csll *del,*prev,*last=headptr;
	del=headptr;
	prev=headptr;
	while((last->next)!=headptr)
	last=last->next;
	int i,j,l,k=0,c=count_node();
	while(k<c)
	{
		strcpy(s,del->name);
			l=strlen(s);
		for(i=0,l-=1;i<l;i++,l--)
		{
			if(s[i]!=s[l])
				break;
		}
		if(i>=l)
		{
			if(del==headptr)
			{
				if(k==(c-1))
					headptr=0;
				else
					headptr=del->next;
				free(del);
				del=headptr;
				prev=del;
			}
			else if((del->next)==headptr)
			{
				prev->next=del->next;
				free(del);
			}
			else
			{
				prev->next=del->next;
				free(del);
				del=prev->next;
				prev=del;
			}
		}
		else
		{
			prev=del;
			del=del->next;
		}
		k++;
	}
last->next=headptr;

}
