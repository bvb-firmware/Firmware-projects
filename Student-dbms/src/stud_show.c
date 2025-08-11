#include"header.h"

void stud_show(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}
		printf("\033[31;1mROLLNO  NAME        PERCENTAGE\n\033[0m");
		printf("-----------------------------------------------------------------------------------------\n");
	while(ptr)
	{
		printf(" %d  %s  %f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
}
