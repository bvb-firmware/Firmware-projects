#include<stdio.h>
void main()
{
//prgram to scan a charcter from user & disply that character and its ASCII value if it is a lowercase 

char ch;
printf("enter any character..\n");
scanf("%c",&ch);

if(ch&1<<5)
printf("ch=%c and its ASCII value is ch=%d\n",ch,ch);

if(ch&32)
printf("ch=%c and its ASCII value is ch=%d\n",ch,ch);

if(ch>=97 && ch<=122)
printf("ch=%c and its ASCII value is ch=%d\n",ch,ch);

if(ch>='a' && ch<='z')
printf("ch=%c and its ASCII value is ch=%d\n",ch,ch);

}

