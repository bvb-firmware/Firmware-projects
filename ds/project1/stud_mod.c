#include"header.h"

void stud_mod(sll **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}
	char op,s[50];
	sll *new=*ptr;
	int i,j=0;
	float f;
	printf("\033[33;1mn/N)based on name r/R)rollno p/P)based on percentage\nenter an option\n\033[0m");
	scanf(" %c",&op);
	if(op>='a'&&op<='z')
		op=op-32;
	switch(op)
	{
		case 'N': 
			printf("\033[33;1mEnter name of student to modify\n\033[0m");
			scanf(" %[^\n]",s);
			while(new)
			{
				if((strcmp(s,new->name))==0)
				{
					j++;
					printf(" %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n",new->batch_id,new->rollno,new->name,new->dob.day,new->dob.month,new->dob.year,new->doj.day,new->doj.month,new->doj.year,new->percentage);
				}
				new=new->next;
			}
			new=*ptr;
			if(j==1)
			{
				while(new)
				{
					if((strcmp(s,new->name))==0)
					{

						printf("enter replacing student full-name,percentage,dob(DD/MM/YYYY),doj(DD/MM/YYYY)\n");
						scanf(" %[^\n] %f %d%d%d %d%d%d",new->name,&new->percentage,&new->dob.day,&new->dob.month,&new->dob.year,&new->doj.day,&new->doj.month,&new->doj.year);
						return;
					}
					new=new->next;
				}
			}

			else if(j==0)
			{
				printf("\033[31;1;5mNmame not matched\n\033[0m");
				return;
			}
			else if(j>1)
				new=*ptr;
		case 'R':  
			printf("\033[33;1mEnter rollno of student to modify\n\033[0m");
			scanf(" %d",&i);
			while(new)
			{
				if(i==new->rollno)
				{
					printf(" %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n",new->batch_id,new->rollno,new->name,new->dob.day,new->dob.month,new->dob.year,new->doj.day,new->doj.month,new->doj.year,new->percentage);
					printf("enter replacing student full-name,percentage,dob(DD/MM/YYYY),doj(DD/MM/YYYY)\n");
					scanf(" %[^\n] %f %d%d%d %d%d%d",new->name,&new->percentage,&new->dob.day,&new->dob.month,&new->dob.year,&new->doj.day,&new->doj.month,&new->doj.year);
				}
				new=new->next;
			}
			break;
		case 'P': 
			printf("\033[33;1mEnter percentage of student to modify\n\033[0m");
			scanf(" %f",&f);
			while(new)
			{
				if(f==new->percentage)
				{
					j++;
					printf(" %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n",new->batch_id,new->rollno,new->name,new->dob.day,new->dob.month,new->dob.year,new->doj.day,new->doj.month,new->doj.year,new->percentage);
				}
				new=new->next;
			}
			new=*ptr;
			if(j==1)
			{
				while(new)
				{
					if(f==new->percentage)
					{

						printf("enter replacing student full-name,percentage,dob(DD/MM/YYYY),doj(DD/MM/YYYY)\n");
						scanf(" %[^\n] %f %d%d%d %d%d%d",new->name,&new->percentage,&new->dob.day,&new->dob.month,&new->dob.year,&new->doj.day,&new->doj.month,&new->doj.year);
					}
					new=new->next;
				}
			}
			else if(j==0)
			{
				printf("\033[31;1;5mpercentage not matched\n\033[0m");
				return;
			}
			else if(j>1)
			{
				printf("\033[33;1mEnter rollno of student to modify\n\033[0m");
				scanf(" %d",&i);
				while(new)
				{
					if(i==new->rollno)
					{
						printf(" %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n",new->batch_id,new->rollno,new->name,new->dob.day,new->dob.month,new->dob.year,new->doj.day,new->doj.month,new->doj.year,new->percentage);
						printf("enter replacing student full-name,percentage,dob(DD/MM/YYYY),doj(DD/MM/YYYY)\n");
						scanf(" %[^\n] %f %d%d%d %d%d%d",new->name,&new->percentage,&new->dob.day,&new->dob.month,&new->dob.year,&new->doj.day,&new->doj.month,&new->doj.year);
					}
					new=new->next;
				}
			} break;
		default:printf("\033[31;1;5mInvalid option to modify\n\033[0m");
	}
}
