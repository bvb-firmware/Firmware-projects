/* Q7. WAP in C to merge line by line in 3rd file , using fgets() fun.
---------$ ./a.out data1 data2 data3 */

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
	fp3=fopen(argv[3],"r+");
	if(fp1==0 && fp2==0)
	{
		printf("files are not present\n");
		return;
	}
	int l=0,l1=0,l2=0;
	char ch;
	while((ch=fgetc(fp1))!=-1)
	{
		l++;
		if(ch=='\n')
		{
			if(l>l1)
				l1=l;
			l=0;
		}
	}
	while((ch=fgetc(fp2))!=-1)
	{
		l++;
		if(ch=='\n')
		{
			if(l>l2)
				l2=l;
			l=0;
		}
	}
	rewind(fp1);
	rewind(fp2);
	char s1[l1+1],s2[l2+1];
	char *s3,*s4;

	for(; ;)
	{
		if((s3=fgets(s1,l1+1,fp1))!=0)
			fputs(s1,fp3);
		if((s4=fgets(s2,l2+1,fp2))!=0)
			fputs(s2,fp3);

		if(s3==0 && s4==0)
			break;
	}



}

