#include"header.h"

void add_begin(sll **ptr)
{
struct st *new;
new=malloc(sizeof(sll));
printf("\033[33;1menter student's name,dob(date of birth),doj(date of joining)\n\033[0m");
scanf(" %[^\n] %d%d%d %d%d%d",new->name,&new->dob.day,&new->dob.month,&new->dob.year,&new->doj.day,&new->doj.month,&new->doj.year);
int i;
for(i=1;i<=10;i++)
{
if(new->doj.month==i)
{
new->batch_id="v23bie1";
new->batch_id[5]=i;

}
}
new->next=*ptr;
*ptr=new;
}
