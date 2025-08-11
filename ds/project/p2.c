#include"header.h"

void save_file(sll *ptr)
{
if(ptr==0)
{
printf("\033[31;1;5mno records found\n\033[0m");
return;
}
int i;
FILE *fp;
char s[10];
while(ptr)
{
for(i=1;i<=10;i++)
{
if(ptr->batch_id[7]==i)
{
fp=fopen(ptr->batch_id,"a");
fprintf(fp,"%s %d/%d/%d %d/%d/%d\n",ptr->name,ptr->dob.day,ptr->dob.month,ptr->dob.year,ptr->doj.day,ptr->doj.month,ptr->doj.year);
}
fclose(fp);
}
}

}
