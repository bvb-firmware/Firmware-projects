#include<stdio.h>
void main()
{
int i=10,j=20;
printf("i=%d j=%d\n",i,j);

// if condition
if(i>j)
printf("j is greater\n");
printf("i is greater\n");

if(i<j)
printf("j is greater\n");
printf("i is greater\n");

if(i==1005)
printf("Hi...  i=%d\n",i);
printf("Bye...  j=%d\n\n",j);

//dummy if condition
if(i>j);
printf("j is greater\n");
printf("i is greater\n");

if(i<j);
printf("j is greater\n");
printf("i is greater\n");

if(i==1005);
printf("Hi...  i=%d\n",i);
printf("Bye...  j=%d\n",j);

}
