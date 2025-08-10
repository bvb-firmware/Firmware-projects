//sll

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdarg.h>
#include<unistd.h>

typedef struct st
{
int rollno;
char name[20];
float marks;
struct st *next;
}sll;

void add_begin(sll **);
void print_node(sll *);
int count_node(sll *);
void add_end(sll **);
void read_file(sll **);
void save_file(sll **);
void print_rec(sll *);
void reversing_content(sll *);
void reverse_print(sll *);
void reverse_rec(sll *);
void add_middle(sll **);
void delete_node(sll **);
void delete_all(sll **);
void search_node(sll *);
void sort_data(sll *);
void reverse_linkss(sll **);
void delet_node_prime(sll **);
void sstrong_delet(sll **);
void perfect_delet(sll **);
void palindrome_name_delete(sll **); 
