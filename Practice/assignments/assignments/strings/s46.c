/*  WAP in C delete substring from main string .
i/p: char m[20]=”abc45 vector”,s[10]=”abc”;
o/p: char m[20]=”45 vector”; */

#include<stdio.h>
void main()
{
char m[30],s[30];
printf("enter main and sub strings\n");
scanf("%[^\n]",m);
scanf(" %[^\n]",s);
printf("%s\n",m);
printf("%s\n",s);


int i,j,k,l,c;																																												 
for(i=0,j=0;m[i];i++)
{
	if(m[i]==s[j])
		j++;
	else if(s[j]=='\0')
	{

		for(l=0;l<j;l++)
		{
			for(k=i-j;m[k];k++)
				m[k]=m[k+1];
				

		}
		i=i-j-1;
		j=0;

	}

}
//printf("i=%d j=%d\n",i,j);
//printf("%s\n",m);
if(s[j]=='\0')
{	
	i=i-j;
	for(l=0;l<j+1;l++)
	{
	for(i;m[i];i++)
	m[i]=m[i+1];
		--i;

	}
}
printf("%s\n",m);
}

