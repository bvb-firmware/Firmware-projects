/* WAP in C using CLA to insert one char in
string at given postion .
i/p : ./a.out ABCDEF 2 P
o/p : ABPCDEF */

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
int i,j,k;
i=atoi(argv[2]);
for(j=0;argv[1][j];j++);
for(j;j>i;j--)
argv[1][j]=argv[1][j-1];

argv[1][i]=argv[3][0];
printf("%s\n",argv[1]);

}
