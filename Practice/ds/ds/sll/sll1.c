#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct be11
{
	int rn;
	char name[20];
	float marks;
	struct be11 *next;
};
void add_beg(struct be11 **);
void print(struct be11 *);
int count_palindrome_name(struct be11 **);
void string_rev(char *);
void add_end(struct be11 **);
int count_strong_rn(struct be11 **);
int armstrong_num(int);

void main()
{
	struct be11 *head=0;
	printf("1)add_beg 2)print 3)add_end 4)count_palindrome_name 5)string_rev 6)count_strong_rn 7)armstrong_nu8m 8)exit\n");
	while(1)
	{
	int op,c;
	int n,n1;
	char t[20];
		printf("enter an option\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: add_beg(&head);   break;
			case 2: print(head);   break;
			case 3: add_end(&head);   break;
			case 4: c=count_palindrome_name(&head);   
				printf("count=%d\n",c);	break;
			case 5:	printf("enter any string\n");
				scanf("%s",t);
				string_rev(t);
				printf("after:%s\n",t);   break;
			case 6: c=count_strong_rn(&head);
				printf("count=%d\n",c);   break;
			case 7:printf("enter any number\n");
			       scanf("%d",&n);
			       n1=armstrong_num(n);
			       if(n1==n) 
				       printf("armstrong\n");
			       else
				       printf("not armstrong\n");  break;
			case 8:  exit(1);  break;
			default :printf("invalid option\n");
		}

	}
}

void add_beg(struct be11 **ptr)
{
	struct be11 *new;
	new=malloc(sizeof(struct be11));
	printf("enter rollno,name and marks\n");
	scanf("%d %s %f",&new->rn,new->name,&new->marks);
	new->next=*ptr;
	*ptr=new;
}

void print(struct be11 *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return;
	}
	while(ptr)
	{
		printf("\033[36;1m%d %s %f\n\033[0m",ptr->rn,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}

void add_end(struct be11 **ptr)
{
	struct be11 *new,*last;
	new=malloc(sizeof(struct be11));
	printf("enter rollno,name and marks\n");
	scanf("%d %s %f",&new->rn,new->name,&new->marks);
	if(*ptr==0)
		*ptr=new;
	else
	{
		new->next=0;
		last=*ptr;
		while(last->next)
			last=last->next;
		last->next=new;
	}
}

int count_palindrome_name(struct be11 **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return 0;
	}
	int k=0,l=0,i;
	struct be11 *del,*prev;
	del=*ptr;
	char s[20];
	while(del)
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
			k++;
			if(del==*ptr)
			{
				*ptr=del->next;
				prev=del->next;
				free(del);
				del=0;
				del=*ptr;
			}
			else
			{
				prev->next=del->next;
				free(del);
				del=0;
				del=prev->next;
			}
		}
		else
		{
			prev=del;
			del=del->next;
		}
	}
return k;
}

int count_strong_rn(struct be11 **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mno records found\n\033[0m");
		return 0;
	}
	struct be11 *del,*prev;
	int num,i=0,temp,r,r1,sum;
	del=*ptr;
	while(del)
	{
		num=del->rn;
		for(temp=num,sum=0;temp;temp/=10)
		{
			r=temp%10;
			for(r1=1;r;r--)
				r1=r1*r;
			sum=sum+r1;
		}
		if(sum==num)
		{
			i++;
			if(del==*ptr)
			{
				*ptr=del->next;
				prev=del->next;
				free(del);
				del=0;
				del=*ptr;
			}
			else
			{
				prev->next=del->next;
				free(del);
				del=0;
				del=prev->next;
			}
		}
		else
		{
			prev=del;
			del=del->next;
		}
	}
	return i;
}

void string_rev(char *s)
{
int i,l;
char t;
l=strlen(s);
for(i=0,l-=1;i<l;i++,l--)
{
t=s[i];
s[i]=s[l];
s[l]=t;
}
}

int armstrong_num(int num)
{
int i,r,r1,sum,temp,c;
for(temp=num,c=0;temp;temp/=10,c++);
for(temp=num,sum=0;temp;temp/=10)
{
r=temp%10;
for(r1=r,i=1;i<c;i++)
r1=r1*r;
sum=sum+r1;
}
return sum;
}
