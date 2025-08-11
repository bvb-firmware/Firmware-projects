#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdarg.h>

typedef struct st
{
	int rollno;
	char name[50];
	float percentage;
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


