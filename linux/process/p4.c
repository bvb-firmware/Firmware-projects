#include"header.h"
void main()
{
int c1=320;
printf("c1=%d\n",c1);
c1=system("ps");
perror("system");
printf("c1=%d\n",c1);
}
