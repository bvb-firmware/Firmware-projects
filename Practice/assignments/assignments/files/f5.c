/* Q5. WAP in C merge char by char in 3rd file , using fgetc() fun.
----- data1--- .....data2....... -----data3-----
abcd pqr 123 789 a1b2c3d p7q8r9
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
	fp3=fopen(argv[3],"w");
	if(fp1==0 && fp2==0)
	{
		printf("files are not present\n");
		return;
	}
	char ch,ch1;
	for(; ; )
	{
		if((ch=fgetc(fp1))!=-1)
			fputc(ch,fp3);
		if((ch1=fgetc(fp2))!=-1)
			fputc(ch1,fp3);

		if(ch==-1 && ch1==-1)
			break;
	}

}
