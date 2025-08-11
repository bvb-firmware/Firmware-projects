#include"header.h"
void main()
{
int c,op;
sll *head=0;
while(1)
{
printf("\033[31;1mMENU\n\033[0m");
printf("\033[39;1m1)add student details\n2)save student details in file\n3)search student details by doj\n4)search student details by dob\n5)search student details by name\n6)search student details by batchid\n7)edit student information\n8)search student details by marks range\n9)search student details by assesment status\n10)display all the records\n11)display particular batch students records\n12)exit\n\033[0m");

printf("\033[32;1menter any option\n\033[0m");
scanf("%d",&op);
switch(op)
{
case 1:add_begin(&head); break;
case 2: break;
case 3: break;
case 4: break;
case 5: break;
case 6: break;
case 7: break;
case 8: break;
case 9: break;
case 10: break;
case 11: break;
case 12: exit(1);
default: printf("\033[31;1;5mInvalid option\n\033[0m");
}
}
}
