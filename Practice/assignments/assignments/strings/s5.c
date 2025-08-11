/*  WAP in C to add digits in string using char pointer.
i/p: char s[20]= “123 hello by6” , *cp;
o/p: sum= 12 */

#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

int i,sum;
for(i=0,sum=0;p[i];i++)
{
if(p[i]>='0' && p[i]<='9')
sum=sum+p[i]-48;

}
printf("sum=%d\n",sum);

}

