#include"header.h"

void stud_show(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}
		printf("\033[31;1mBATCHID  ROLLNO  NAME        DOB       DOJ     PERCENTAGE\n\033[0m");
		printf("-----------------------------------------------------------------------------------------\n");
	while(ptr)
	{
		printf(" %s  %d  %s   %d/%d/%d  %d/%d/%d  %f\n",ptr->batch_id,ptr->rollno,ptr->name,ptr->dob.day,ptr->dob.month,ptr->dob.year,ptr->doj.day,ptr->doj.month,ptr->doj.year,ptr->percentage);
		ptr=ptr->next;
	}
}
