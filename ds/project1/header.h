#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdarg.h>

typedef struct st
{
	int rollno;
	//char rollno[10];
	char name[50];
	char batch_id[10];
	float percentage;
	struct date
	{
		int day;
		int month;
		int year;
	}dob,doj;
	struct st *next;
}sll;

void stud_add(sll **);
void stud_show(sll *);
void stud_delete(sll **);
void stud_sort(sll *);
void stud_mod(sll **);
void stud_delete_all(sll **);
void stud_reverse(sll *);
void stud_save(sll *);
//void stud_batchwise(sll *);
void stud_search(sll *);
//void stud_batchwise_file(sll *);
void stud_count(sll *);


