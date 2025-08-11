//single linked list

#include"header.h"
void main()
{
	int op,c=0;
	sll *headptr=0;
	printf("MENU\n1)add_begin  2)add_middle 3)add_end 4)print_node 5)count_node 6)save_file 7)read_file 8)reverse_print 9)print_rec 10)reverse_rec 11)delete_all 12)delete_node 13)search_node 14)sort_data 15)reverse_links 16)reversing_content 17)delete_node_prime 18)strong_delet 19)perfect_delete 20)palindrome_name_delete 21)exit \n");
	while(1)
	{
		printf("My dear! Enter your beautiful chioce\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: add_begin(&headptr);        break;
			case 2: add_middle(&headptr);       break;
			case 3: add_end(&headptr);     break;
			case 4: print_node(headptr);       break;
			case 5: c=count_node(headptr); 
				printf("\033[36;1mno.of nodes=%d\n\033[0m",c);      break;
			case 6: save_file(&headptr);       break;
			case 7: read_file(&headptr);        break;
			case 8: reverse_print(headptr);       break;
			case 9: print_rec(headptr);       break;
			case 10:reverse_rec(headptr);       break;
			case 11:delete_all(&headptr);        break;
			case 12:delete_node(&headptr);       break;
			case 13:search_node(headptr);       break;
			case 14:sort_data(headptr);       break;
			case 15:reverse_linkss(&headptr);        break;
			case 16:reversing_content(headptr); break;
			case 17:delet_node_prime(&headptr); break;
			case 18:sstrong_delet(&headptr);  break;
			case 19:perfect_delet(&headptr); break;
			case 20:palindrome_name_delete(&headptr); break;
			case 21:   exit(0); 

			default : printf("\033[31;1;5m My Dear! invalid option\n\033[0m");
		}
	}
}
void add_begin(sll **ptr)
{
	sll *new;
	new=malloc(sizeof(sll));
	printf("enter rollno,name,and marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	new->next=*ptr;
	*ptr=new;
}

void print_node(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	else
	{
		while(ptr)
		{
			printf("\033[36;1m%d %s %f\n\033[0m",ptr->rollno,ptr->name,ptr->marks);
			ptr=ptr->next;
		}
	}
}

int count_node(sll *ptr)
{
	int c=0;
	if(ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return 0;
	}
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}

void add_end(sll **ptr)
{
	sll *new,*last;
	new=malloc(sizeof(sll));
	printf("enter rollno,name,and marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	new->next=0;
	if(*ptr==0)
		*ptr=new;
	else
	{
	last=*ptr;
	while(last->next)
		last=last->next;
	last->next=new;
	}
}

void read_file(sll **ptr)
{
	/*static FILE *fp;
	  if(*ptr==0)
	  fp=fopen("data","r");
	  if(fp==0)
	  {
	  printf("\033[31;1;5mfile is not present\n\033[0m");
	  return;
	  }
	  sll *new;
	  new=malloc(sizeof(sll));
	  fscanf(fp,"%d ",&new->rollno);
	  fscanf(fp,"%s ",new->name);
	  fscanf(fp,"%f ",&new->marks);

	  new->next=*ptr;
	 *ptr=new; */

	FILE *fp;
	fp=fopen("data","r");
	  if(fp==0)
	  {
	  printf("\033[31;1;5mfile is not present\n\033[0m");
	  return;
	  }
	int i;
	while(1)
	{
		sll *new;
		new=malloc(sizeof(sll));
		fscanf(fp,"%d ",&new->rollno);
		fscanf(fp,"%s ",new->name);
		i=fscanf(fp,"%f ",&new->marks);
		if(i==-1)
			break;
		new->next=*ptr;
		*ptr=new;
	}
}

void save_file(sll **ptr)
{
	static FILE *fp;
	if(*ptr==0)
		fp=fopen("data","w");
	if(fp==0)
	{
		printf("\033[31;1;5mfile is not present\n\033[0m");
		return;
	}
	sll *new,*last;
	new=malloc(sizeof(sll));
	printf("enter rollno,name,and marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);

	new->next=0;
	if(*ptr==0)
		*ptr=new;
	else
	{
		last=*ptr;
		while(last->next)
			last=last->next;
		last->next=new;
	}

	fprintf(fp,"%d ",new->rollno);
	fprintf(fp,"%s ",new->name);
	fprintf(fp,"%f\n",new->marks);

}

void print_rec(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	else
	{
		printf("\033[36;1m%d %s %f\n\033[0m",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
		print_rec(ptr);
	}
}

void reversing_content(sll *ptr)
{
	sll *temp,*p;
	if(ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
int i,c=count_node(ptr),j,k;
float f;
char s[100];
p=ptr;
for(j=0;j<c/2;j++)
{
temp=ptr;
for(k=0;k<c-1-j;k++)
temp=temp->next;

i=p->rollno;
p->rollno=temp->rollno;
temp->rollno=i;

strcpy(s,p->name);
strcpy(p->name,temp->name);
strcpy(temp->name,s);

f=p->marks;
p->marks=temp->marks;
temp->marks=f;

p=p->next;
}
}

void reverse_print(sll *ptr)
{
	sll *temp;
	temp=ptr;
	int i,j,c;
	c=count_node(ptr);
	for(i=0;i<c;i++)
	{
		temp=ptr;
		j=0;
		while(j<c-1-i)
		{
			temp=temp->next;
			j++;
		}
		printf("\033[36;1m%d %s %f\n\033[0m",temp->rollno,temp->name,temp->marks);
	}
}

void reverse_rec(sll *ptr)
{
	if(ptr)
	{	
		//ptr=ptr->next;
		reverse_rec(ptr->next);
		printf("\033[36;1m%d %s %f\n\033[0m",ptr->rollno,ptr->name,ptr->marks);
	}

}

void add_middle(sll **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	sll *new,*temp;
	temp=*ptr;
	new=malloc(sizeof(sll));
	printf("enter roll no name and marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);
	int i,c=count_node(*ptr);
	for(i=0;i<c/2 ;i++)
		temp=temp->next;
	new->next=temp->next;
	temp->next=new;

}

void delete_node(sll **ptr)
{
	sll *temp,*prev;
	if(*ptr==0)
	{
		printf("\033[31;1;5mrecords not found\n\033[0m");
		return;
	}
	temp=*ptr;
	while(temp->next)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=0;
	free(temp);

}

void delete_all(sll **ptr)
{
	sll *temp,*prev;
	if(*ptr==0)
	{
		printf("\033[31;1;5mrecords not found\n\033[0m");
		return;
	}
	int i=0,c=count_node(*ptr);

	while(i<c)
	{
		temp=*ptr;
		while(temp->next)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=0;
		free(temp);
		i++;

	}

}

void search_node(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	int n;
	printf("enter rollno to search\n");
	scanf("%d",&n);
	while(ptr)
	{
		if((ptr->rollno)==n)
			printf("\033[36;1m%d %s %f\n\033[0m",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	} 


}

void sort_data(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	int op1;

	
	sll *temp,*last;
	int i;
	char *s;
	float f;
	last=ptr;
	printf("select an option\n 1)roll wise sorting\n 2)name wise sorting 3)marks wise sorting\n");
	scanf("%d",&op1);
	switch(op1)
	{
		case 1:while(ptr)
		       {
			       temp=ptr->next;
			       while(temp)
			       {
				       if((temp->rollno)>(ptr->rollno))
				       {
					i=temp->rollno;
					temp->rollno=ptr->rollno;
					ptr->rollno=i;

					f=temp->marks;
					temp->marks=ptr->marks;
					ptr->marks=f;

					strcpy(s,temp->name);
					strcpy(temp->name,ptr->name);
					strcpy(ptr->name,s);
				       }
				       temp=temp->next;
			       }
			       ptr=ptr->next;
		       } break;
		case 2:while(ptr)
		       {
			       temp=ptr->next;
			       while(temp)
			       {
				       if((strcmp(temp->name,ptr->name))>0)
				       {
					i=temp->rollno;
					temp->rollno=ptr->rollno;
					ptr->rollno=i;

					f=temp->marks;
					temp->marks=ptr->marks;
					ptr->marks=f;

					strcpy(s,temp->name);
					strcpy(temp->name,ptr->name);
					strcpy(ptr->name,s);


				       }
				       temp=temp->next;
			       }
			       ptr=ptr->next;
		       } break;
		case 3:while(ptr)
		       {
			       temp=ptr->next;
			       while(temp)
			       {
				       if((temp->marks)>(ptr->marks))
				       {
					i=temp->rollno;
					temp->rollno=ptr->rollno;
					ptr->rollno=i;

					f=temp->marks;
					temp->marks=ptr->marks;
					ptr->marks=f;

					strcpy(s,temp->name);
					strcpy(temp->name,ptr->name);
					strcpy(ptr->name,s);



				       }
				       temp=temp->next;
			       }
			       ptr=ptr->next;
		       } break;
		defalut:printf("\033[31;1;5minvalid option\n\033[0m");
	}
	print_node(last);

}

void reverse_linkss(sll **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	sll *temp,*p,*p1;
	temp=*ptr;
	p1=*ptr;
	int i,j,k,c=count_node(*ptr);
	while(p1->next)
		p1=p1->next;
			p=p1;
	for(i=0;i<c-1;i++)
	{
		temp=*ptr;
		for(j=0;j<c-2-i;j++)
			temp=temp->next;
		p->next=temp;
		p=temp;

	}
	temp->next=0;
	*ptr=p1;

}

void delet_node_prime(sll **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	sll *p,*prev=*ptr;
	p=*ptr;
	int i;
	while(p)
	{
		int num=p->rollno;
		for(i=2;i<=num;i++)
		{
			if(num%i==0)
				break;
		}
		if(num==i)
		{
			if((*ptr)==p)
			{
			*ptr=p->next;
			//p->next=0;
			free(p);
			p=*ptr;
			}
			else
			{
			prev->next=p->next;
			//prev=p->next;
			//p->next=0;
			free(p);
			p=prev->next;
			}
		}
		else
		{
		prev=p;	
		p=p->next;
		}
	}


}

void sstrong_delet(sll **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	sll *del,*prev;
	int num,r,r1,sum,temp,c;
	del=*ptr;
	while(del)
	{
		num=del->rollno;
		for(temp=num,sum=0;temp;temp/=10)
		{
			r=temp%10;
			for(r1=1;r;r--)
				r1=r*r1;
			sum=sum+r1;
		}
		if(sum==num)
		{
			if(*ptr==del)
			{
			*ptr=del->next;
			del->next=0;
			del=*ptr;
			}
			else
			{
			prev->next=del->next;
			del->next=0;
			free(del);
			del=prev->next;
			}
			
		}
		else
		{
		prev=del;
		del=del->next;
		}
	}

}

void perfect_delet(sll **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}

	sll *del,*prev;
	del=*ptr;
	int i,j,sum,num;
	while(del)
	{
		num=del->rollno;
		for(i=1,sum=0;i<num;i++)
		{
			if(num%i==0)
				sum=sum+i;
		}
		if(sum==num)
		{	
			if(*ptr==del)
			{
			*ptr=del->next;
			del->next=0;
			free(del);
			del=*ptr;
			}
			else
			{
			prev->next=del->next;
			del->next=0;
			free(del);
			del=prev->next;
			}
		}
		else
		{
		prev=del;
		del=del->next;
		}
	}
}

void palindrome_name_delete(sll **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}

	sll *del,*prev;
	int i,j,k;
	del=*ptr;
	while(del)
	{
		char s[100];
		strcpy(s,del->name);
		k=strlen(s);
		for(i=0,k-=1;i<k;i++,k--)
		{
			if(s[i]!=s[k])
				break;
		}
		if(i>=k)
		{	
			if(del==*ptr)
			{
			*ptr=del->next;
			//del->next=0;
			free(del);
			del=*ptr;
			}
			else
			{
			prev->next=del->next;
			//del->next=0;
			free(del);
			del=prev;
			}
		}
		else
		{
		prev=del;
		del=del->next;
		}
	}
}
