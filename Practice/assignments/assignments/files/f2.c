/* WAP in C to convet small to capital later , using fseek function .
--------$ ./a.out data */

#include<stdio.h>
void main(int argc,char **argv)
{
	if( argc!=2)
	{
		printf("usage:a.out filename\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	char ch;
	while((ch=fgetc(fp))!=-1)
	{
		if(ch>='a' && ch<='z')
		{
			fseek(fp,-1,SEEK_CUR);
				ch=ch^1<<5;
			fputc(ch,fp);
		}

	}
}
