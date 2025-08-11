/*    WAP in C to count words in given string using goto.
i/p:char s[20]=”hi 5 #$2 cs”;
o/p: word count= 4 */

#include<stdio.h>
#include<string.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);


int i,c;
i=0;
c=0;
while(p[i])
{
if(p[i]>='A' && p[i]<='Z')
c++;
else if(p[i]>='a' && p[i]<='z')
c++;
i++;

}



printf("%d\n",c);

}



