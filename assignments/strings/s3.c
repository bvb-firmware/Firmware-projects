/* .WAP in C to count digits in string using pointer .
i/p: char s[20]=”p6c3s1 123 ok7”;
o/p: count = 7*/

#include<stdio.h>
void main()
{
char s[20];
printf("enter any string\n");
scanf("%[^\n]",s);
printf("%s\n",s);

int i,c;
for(i=0,c=0;s[i];i++)
{
if(s[i]>='0' && s[i]<='9')
c++;

}
printf("count=%d\n",c);

}

