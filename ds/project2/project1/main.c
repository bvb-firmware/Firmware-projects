#include"header.h"
//int r[100][12];
char ch;
void main()
{
	sll *head=0;
	int c;
	while(1)
	{
	printf("\n\n         \033[36;1m *****STUDENT RECORD MENU*********\n\033[0m");
	printf("\033[33;1m            a/A)add new record\n            d/D)delete a record\n            s/S)show the list\n            m/M)modify a record\n            v/V)save\n            e/E)exit\n            t/T)sort the list\n            l/L)delete all records\n            r/R)reverse the list\n\033[0m");
	printf("         \033[36;1m **********************************\n\033[0m");
		printf("enter your choice\n");
		scanf(" %c",&ch);
		if(ch>='a'&&ch<='z')
			ch=ch-32;
		switch(ch)
		{
			case 'A': stud_add(&head);       break;
			case 'D': stud_delete(&head);    break;
			case 'S': stud_show(head);       break;
			case 'M': stud_mod(&head);       break;
			case 'V': stud_save(head);    	 break;
			case 'E': exit(1);    		 break;
			case 'T': stud_sort(head);       break;
			case 'L': stud_delete_all(&head);    break;
			case 'R': stud_reverse(head);    break;
			default:printf("\033[31;1;5mInvalid option\n\033[0m");
		}
	}
}
