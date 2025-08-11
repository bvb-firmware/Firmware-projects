#include"header.h"
void main(int argc,char **argv)
{
printf("%d %d\n",getpid(),getppid());
system(argv[1]);
printf("hi\n");
while(1);
}
