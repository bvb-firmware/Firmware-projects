#include"header.h"

void stud_save(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNO records found\n\033[0m");
		return;
	}

	sll *new=ptr;
	FILE *fp;
	char op;
	printf("\033[33;1ms/S)save and exit e/E)exit without saving\n\033[0m");
	scanf(" %c",&op);
	op=op-32;

	switch(op)
	{
		case 'E' :printf("\033[32;1mRecords not saved in file and exited\n\033[0m");
			  return;

		case 'S' :
			  while(new)
			  {
				  fp=fopen("data","a");
				  fprintf(fp,"%d %s %f\n",new->rollno,new->name,new->percentage);
				  fclose(fp);
				  new=new->next; 
			  } 
			  printf("\033[32;1mRecords saved in file\n\033[0m");break;
		default: printf("\033[31;1;5mInvalid option to save\n\033[0m");
	}
}
