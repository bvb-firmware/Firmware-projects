/* WAP in C to replace one word with another word in file .
-------$ ./a.out data hello coding */

#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("usage:\n");
		return;
	}

	FILE *fp;
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}

	char s[20];
	int l=strlen(argv[2]),l1;
	l1=strlen(argv[3]);
	while((fscanf(fp,"%s",s))!=-1)
	{

		if((strcmp(s,argv[2]))==0)
		{
			fseek(fp,-l,SEEK_CUR);
				fputs(argv[3],fp);
		}
	}




}
