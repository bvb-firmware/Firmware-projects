/*  WAP in C to insert ‘p’ at 0th index , ‘q’ at 1st
index in same string using goto .
i/p: char s[10]=”123456”
o/p: pq123456  */


#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],*p=s;
	printf("enter any string\n");
	scanf("%[^\n]",p);
	printf("%s\n",p);


	int i,j,ind,len,l1,ind1;
	char ch,ch1;
	printf("enter characters to insert and indexes\n");
	scanf(" %c",&ch);
	scanf(" %c",&ch1);
	scanf("%d%d",&ind,&ind1);


	i=0;
l1:
	len=strlen(p);
	j=len+1;
l2:
	p[j]=p[j-1];
	j--;
	if(j>ind)
		goto l2;
	p[j]=ch;
	ind=ind1;
	ch=ch1;
	i++;
	if(i<2)
		goto l1;
	printf("%s\n",p);

}



