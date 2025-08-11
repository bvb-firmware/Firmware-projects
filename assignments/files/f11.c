/*  11. WAP in C to convert all word 1st and last char as a capital in file .
-----i/p file ------ ------ o/p file ------
123 abc coding 123 AbC CodinG
file ds 789 sirji FilE DS 789 SirjI  */

#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=2)
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
	char ch;
	ch=fgetc(fp);
	if(ch>='a' && ch<='z')
	{
		ch=ch-32;
		fseek(fp,-1,SEEK_CUR);
		fputc(ch,fp);
	}
	while((ch=fgetc(fp))!=-1)
	{
		if(ch==' ' || ch=='\n')
		{
			fseek(fp,-2,SEEK_CUR);
			ch=fgetc(fp);
			if(ch>='a' && ch<='z')
			{	
				fseek(fp,-1,SEEK_CUR);
				ch=ch^1<<5;

				fputc(ch,fp);

			}
			fseek(fp,+1,SEEK_CUR);
			ch=fgetc(fp);
			if(ch>='a' && ch<='z')
			{	
				fseek(fp,-1,SEEK_CUR);
				ch=ch^1<<5;

				fputc(ch,fp);
			}

		}

	}
}
