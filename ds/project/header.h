#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include<time.h>

typedef struct st
{
char batch_id[10]; //ex:v23be11b7
char name[50]; //student full name
float avg_internal_marks; //percentage
char assesment_status[5]; //R NR
struct date
{
int day;
int month;
int year;
}dob,doj;
struct st *next;
}sll;

void add_begin(sll **);
void save_file(sll *ptr);
