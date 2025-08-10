/*  WAP in C to sort the string in ascending order
using while loop only .
i/p: char s[10]= ”Aa1Bb2Cc3”;
o/p: 123ABCabc */

#include<stdio.h>
#include<string.h>
void main()
{
char s[20],*p=s,t;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

int i,j,k;
for(i=0;p[i];i++)
{
	for(j=i+1;p[j];j++)
	{
	//	k=strcmp(p+j,p+i);
	//	if(k<0)
		if(p[j]<p[i])
		{
			t=p[i];
			p[i]=p[j];
			p[j]=t;
		}

	}
}
printf("%s\n",p);




}



