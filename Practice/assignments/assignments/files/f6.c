// WAP in c to merge one by one word in from file1,file2,to file3 using fscanf function.


#include<stdio.h> 
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("usage:\n");
		return;
	}

	FILE *fp1,*fp2,*fp3;
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"r");
	fp3=fopen(argv[3],"w");

	if(fp1==0 && fp2==0)
	{
		printf("files are not present\n");
		return;
	}

	char s[25];
	int i,i1;
	for(; ; )
	{

		if((i=fscanf(fp1,"%s",s))!=EOF)
			fprintf(fp3,"%s ",s);
		if((i1=fscanf(fp2,"%s",s))!=EOF)
			fprintf(fp3,"%s ",s);

		if(i==-1  &&  i1==-1)
			break;
	}

}
