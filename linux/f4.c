

#include<stdio.h>
#include<stdlib.h>
void main()
{

	int (*p)(const char *,...);
	p=printf;
	int j;
	j=(*p)("fwsjbs\n");
	printf("j=%d\n",j);

	p=scanf;
	int m;
	j=(*p)("%d",&m);
	printf("j=%d\n",j);

	void *ptr;
	void *(*q)(size_t,int);
	q=malloc;
	ptr=(*q)(4);
	printf("%ld",sizeof(*ptr));

}


