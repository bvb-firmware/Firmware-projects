/* WAP in C using CLA to implement Calculator
ex1 ./a.out 44 + 200
o/p : 244
ex2 ./a.out 44 / 0
o/p : FPE */


#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
switch(argv[2][0])
{
case '+':printf("%d\n",atoi(argv[1])+atoi(argv[3])); break;
case '-':printf("%d\n",atoi(argv[1])-atoi(argv[3])); break;
case '*':printf("%d\n",atoi(argv[1])*atoi(argv[3])); break;
case '/':if(atoi(argv[3])==0)
	printf("FPE\n");
	else
	printf("%d\n",atoi(argv[1])/atoi(argv[3])); break;
case '%':printf("%d\n",atoi(argv[1])%atoi(argv[3])); break;

}

}
