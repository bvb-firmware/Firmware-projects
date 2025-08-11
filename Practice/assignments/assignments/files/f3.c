/* WAP in C to count total number of line in file using fgets() fun.
-----i/p file------
123 abc coding
pawan sirji
99 vector
o/p: no. of line = 3 */

#include<stdio.h>
void main(int c,char **s)
{
	if(c!=2)
	{
		printf("usage\n");
		return;
	}
	FILE *fp;
	fp=fopen(s[1],"r");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	char *p,ch;
	int l=0,len=0,len1=0;
	while((ch=fgetc(fp))!=-1)
	{
		len++;
		if(ch=='\n')
		{
			if(len>len1)
				len1=len;
			len=0;
		}	

	}
	rewind(fp);

	while((p=fgets(p,len1+1,fp))!=0)
		l++;
	printf("no.of lines=%d\n",l);
}
