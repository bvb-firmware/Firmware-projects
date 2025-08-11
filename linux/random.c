#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
int a[5],i;
//srand(getpid());
printf("%d\n",getpid());
for(i=0;i<10;i++ )
{
a[i]=rand()%10-10;
}

for(i=0;i<10;i++)
printf("%d\n",a[i]);
}


