
#include<stdio.h>
#include<stdlib.h>
void push(void);
void pop(void);
void display(void);
#define size 5
int a[size];
int top=-1;
void main()
{
	int op;
	while(1)
	{
		printf("select any choice\n1)push 2)pop 3)display 4)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:push(); break;
			case 2:pop(); break;
			case 3:display(); break;
			case 4:exit(1);
			default:printf("\033[31;1;5minvalid choice\n\033[0m");
		}
	}
}

void push(void)
{
	if(top>=size-1)
	{
		printf("\033[31;1;5mstack overflow\n\033[0m");
		return;
	}
	top++;
	printf("enter the data\n");
	scanf("%d",&a[top]);
}

void pop(void)
{
	if(top<=-1)
	{
		printf("\033[31;1;5mstack underflow\n\033[0m");
		return;
	}
	top--;
	//printf("enter the data\n");
	//scanf("%d",&a[top]);
}

void display(void)
{
	if(top==-1)
	{
		printf("\033[31;1;5mstack empty\n\033[0m");
		return;
	}
	int i=0;
	for(i;i<=top;i++)
		printf("\033[36;1m%d \033[0m",a[i]);
	printf("\n");
}
