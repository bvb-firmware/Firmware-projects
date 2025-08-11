#include"header.h"

void stud_search(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}

	sll *p=ptr;
	int op,i,k=0,j,l;
	char s[50];
	float f;
	printf("\033[33;1mselect an option to search\n1)based on rollno 2)based on name 3)based on percentage 4)based on DOB 5)based on DOJ\n\033[0m"); 
	scanf(" %d",&op);
	switch(op)
	{
		case 1:
			printf("\033[33;1mEnter the rollno to search\n\033[0m");
			scanf(" %d",&i);
			while(p)
			{
				if(p->rollno==i)
				{
					printf("\033[36;1m %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n\033[0m",p->batch_id,p->rollno,p->name,p->dob.day,p->dob.month,p->dob.year,p->doj.day,p->doj.month,p->doj.year,p->percentage);
					k++;
				}
				p=p->next;
			}
			if(k==0)
				printf("\033[31;1;5mRollno not found\n\033[0m");
			break;

		case 2:
			printf("\033[33;1mEnter the full-name to search\n\033[0m");
			scanf(" %[^\n]",s);
			while(p)
			{
				if((strcmp(p->name,s))==0)
				{
					printf("\033[36;1m %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n\033[0m",p->batch_id,p->rollno,p->name,p->dob.day,p->dob.month,p->dob.year,p->doj.day,p->doj.month,p->doj.year,p->percentage);
					k++;
				}
				p=p->next;
			}
			if(k==0)
				printf("\033[31;1;5mName not found\n\033[0m");
			break;

		case 3:
			printf("\033[33;1mEnter the percentage to search\n\033[0m");
			scanf(" %f",&f);
			while(p)
			{
				if(f==p->percentage)
				{
					printf("\033[36;1m %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n\033[0m",p->batch_id,p->rollno,p->name,p->dob.day,p->dob.month,p->dob.year,p->doj.day,p->doj.month,p->doj.year,p->percentage);
					k++;
				}
				p=p->next;
			}
			if(k==0)
				printf("\033[31;1;5mPercentage not found\n\033[0m");
			break;

		case 4:
			printf("\033[33;1mEnter the DOB(dd/m/yyyy) to search\n\033[0m");
			scanf(" %d %d %d",&i,&j,&l);
			while(p)
			{
				if(i==p->dob.day)
				{
					if(j==p->dob.month)
					{
						if(l==p->dob.year)
						{
							printf("\033[36;1m %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n\033[0m",p->batch_id,p->rollno,p->name,p->dob.day,p->dob.month,p->dob.year,p->doj.day,p->doj.month,p->doj.year,p->percentage);
							k++;
						}
					}
				}
				p=p->next;
			}
			if(k==0)
				printf("\033[31;1;5mDOB not found\n\033[0m");
			break;

		case 5:
			printf("\033[33;1mEnter the DOJ(dd/m/yyyy) to search\n\033[0m");
			scanf(" %d %d %d",&i,&j,&l);
			while(p)
			{
				if(i==p->doj.day)
				{
					if(j==p->doj.month)
					{
						if(l==p->doj.year)
						{
							printf("\033[36;1m %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n\033[0m",p->batch_id,p->rollno,p->name,p->dob.day,p->dob.month,p->dob.year,p->doj.day,p->doj.month,p->doj.year,p->percentage);
							k++;
						}
					}
				}
				p=p->next;
			}
			if(k==0)
				printf("\033[31;1;5mDOJ not found\n\033[0m");
			break;

		default:printf("\033[31;1;5mInvalid search option\n\033[0m");
	}

}

