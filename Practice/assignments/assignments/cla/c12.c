/* WAP in C using CLA to count digit in string.
i/p: ./a.out gd53g */

#include<stdio.h>
void main(int argc,char **argv)
{
int i,c;
for(i=0,c=0;argv[1][i];i++)
{
if(argv[1][i]>='0'&&argv[1][i]<='9')
c++;
}
printf("count=%d\n",c);
}
