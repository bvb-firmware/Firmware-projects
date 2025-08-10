#include<stdio.h>
void main()
{
//WAP for checking upper, lower, digit, and special case symbols using ifelse ladder

char ch;
printf("enter any character..\n");
scanf("%c",&ch);

if(ch>='a' && ch<='z')
	printf("lowercase char\n");
else if(ch>='A' && ch<='Z')
	printf("uppercase char\n");
else if(ch>='0' && ch<='9')
	printf("digitcase char\n");
else
	printf("special case\n");


}
