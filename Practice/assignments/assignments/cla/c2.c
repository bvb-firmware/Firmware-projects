/* WAP in C using CLA to print 1st digit of num.
i/p: ./a.out 1234
o/p : */

#include<stdio.h>
//#include"header.h"
void main(int argc,char **argv)
{
	int num;


	//if(argv[1][0]>='0' && argv[1][0]<='9')
	//printf("%d\n",argv[1][0]-48);
	if(argv[1][0]=='-'&&argv[1][1]>='0'&&argv[1][1]<='9')
		printf("%c%d\n",argv[1][0],argv[1][1]-48);
	else if(argv[1][0]=='+' && argv[1][1]>='0'&&argv[1][1]<='9')
		printf("%d\n",argv[1][1]-48);
	else if(argv[1][0]>='0' && argv[1][0]<='9')
		printf("%d\n",argv[1][0]-48);

}

