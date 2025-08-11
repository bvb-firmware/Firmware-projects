#include"header.h"

void stud_save(sll *ptr)
{
	if(ptr==0)
	{
		printf("\033[31;1;5mNO records found\n\033[0m");
		return;
	}

	sll *new=ptr;
	char op,s[10]="v23be11";
	int i,j,l;
	FILE *fp;
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
								   fp=fopen(s,"a");
								   fprintf(fp,"%s %d %s %d/%d/%d %d/%d/%d %f\n",new->batch_id,new->rollno,new->name,new->dob.day,new->dob.month,new->dob.year,new->doj.day,new->doj.month,new->doj.year,new->percentage);
								   fclose(fp);
							   }
						   }
					   }
				   }
				new=new->next; 
			   } 
				printf("\033[32;1mRecords saved in file\n\033[0m");break;
		default: printf("\033[31;1;5mInvalid option to save\n\033[0m");
	}
}
