/*  WAP in C to remove conjucutive spaces in string.
i/p: s[20]=”abc coding sirji”
o/p: abc coding sirji */


#include<stdio.h>
#include<string.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

int i,j;
for(i=0;s[i];i++)
{
	if(p[i]==' ')
	{
		for(j=i;p[j];j++)
			p[j]=p[j+1];
		i++;
	}
}
printf("%s\n",p);




}



