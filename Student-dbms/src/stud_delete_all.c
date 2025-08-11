#include"header.h"
extern int r1;
void stud_delete_all(sll **ptr)
{
	if(*ptr==0)
	{
		printf("\033[31;1;5mNo records found\n\033[0m");
		return;
	}
	sll *del;
			del=*ptr;
			while(del)
			{
				*ptr=del->next;
				free(del);
				del=0;
				del=*ptr;
			}
			r1=0;
			printf("\033[32;1mAll records deleted\n\033[0m"); 
}
