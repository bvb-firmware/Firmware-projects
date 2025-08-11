#include"header.h"
extern int r[100][12];
extern int m,n,o;
int flag1;
int flag2;
void stud_add(sll **ptr)
{
	int i,j,k,l,x=1;
	char s[12]="v23be11";
	sll *new,*last;
	new=malloc(sizeof(sll));
	printf("enter student full-name,percentage,dob(DD/MM/YYYY),doj(DD/MM/YYYY)\n");
	scanf(" %[^\n] %f %d%d%d %d%d%d",new->name,&new->percentage,&new->dob.day,&new->dob.month,&new->dob.year,&new->doj.day,&new->doj.month,&new->doj.year);

	for(i=2000,l=0;i<=2099;i++,l++)
	{
		if(new->doj.year==i)
		{
			s[1]=(l/10)+48;
			s[2]=(l%10)+48;
			for(j=0;j<=12;j++)
			{
				if(new->doj.month==j)
				{
					s[5]=(j/10)+48;
					s[6]=(j%10)+48;
					strcpy(new->batch_id,s);
					if(m==0)
					{
						r[l][j]++;
						new->rollno=r[l][j];
					}
					else
					{
						//if(new->doj.month==n && new->doj.year==o)
						new->rollno=m;
						//m=0;
					}
				}
			}
		}
	}
	if(flag1==1)
	{
		new->next=*ptr;
		*ptr=new;
	flag1=0;
	}
	else if(flag2==1)
	{
		if(m==1)
		{
			new->next=*ptr;
			*ptr=new;
		}
		else
		{
			last=*ptr;
			while(x<(m-1))
			{
				x++;
				last=last->next;
			}
			new->next=last->next;
			last->next=new;
			m=0;
			flag2=0;
		}
	}
	else
	{
		if(*ptr==0)
		{
			new->next=0;
			*ptr=new;
		}
		else
		{
			last=*ptr;
			while(last->next)
				last=last->next;
			last->next=new;
			new->next=0;
		}
	}
}
