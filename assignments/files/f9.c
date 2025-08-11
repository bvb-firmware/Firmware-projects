/*  WAP in C to delete line 1st and last line only in given any file using CLA.
--------$ ./a.out data  */

#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usage:\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	int len=0,l=0,l1=0,i;
	char ch;
	while((ch=fgetc(fp))!=-1)
	{
		len++;
		if(ch=='\n')
		{
			l++;
			if(len>l1)
				l1=len;
			len=0;
		}
	}
	rewind(fp);
	char s[l][l1+1];
	for(i=0;i<l;i++)
		fgets(s[i],l1+1,fp);


	fclose(fp);
	fp=fopen(argv[1],"w");

	for(i=0;i<l;i++)
	{
		if(i!=0 && i!=(l-1))
			fputs(s[i],fp);

	}
}
