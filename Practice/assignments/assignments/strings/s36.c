/*  WAP in C to merge 2 string to another string.
i/p: s1[10]=”1234” s2[10]=”ABCD”
o/p : s3[20]=”1A2B3C4D”  */


#include<stdio.h>
#include<string.h>
void main()
{
char s[20],s1[20],s3[20];

printf("enter s string and s2 string\n");
scanf("%[^\n]",s);
scanf(" %[^\n]",s1);
printf("%s\n",s);
printf("%s\n",s1);

int i,k;
for(i=0,k=0;s[i]!='\0' && s1[i]!='\0' ;i++)
{
	s3[k++]=s[i];
	s3[k++]=s1[i];
}

while(s[i]!='\0')
{
	s3[k++]=s[i];
	i++;

}

while(s1[i]!='\0')
{
	s3[k++]=s1[i];
	i++;

}



s3[k++]='\0';
printf("%s\n",s3);
}



