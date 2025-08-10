#include<stdio.h>
#include<unistd.h>
void main()
{

int i=0;
printf("hai...\n");
L1:
sleep(2);
i++;
printf("hey..\n");
if(i<=10)
goto L1;
printf("Hello..\n");
}
