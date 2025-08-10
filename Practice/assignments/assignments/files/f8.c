/* Q8. WAP in C to delete any line of given file .
--------$ ./a.out data line_no  */

#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=3)
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
	int l=0,l1=0,len=0,i;
	char ch;
	while((ch=fgetc(fp))!=-1)
	{ 
		l1++;
		if(ch=='\n')
		{
			l++;
			if(l1>len)
				len=l1;
			l1=0;

		}

	}
	rewind(fp);
	char s[l][len+1];
	for(i=0;i<l;i++)
		fgets(s[i],len+1,fp);
			//rewind(fp);
			fclose(fp);
			fp=fopen(argv[1],"w");
	for(i=0;i<l;i++)
	{
		if(i!=(argv[2][0]-48))
		{
		printf("%s",s[i]);
		fputs(s[i],fp);
		}
	}
}

