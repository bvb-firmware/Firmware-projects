/* WAP in C to count line , word and digit in file.
-----i/p file------
123 abc coding
file c ds 789 sirji
-------$ ./a.out data
o/p: no of line = 2 , word= 8 , digit= 6 */

#include<stdio.h>
void main(int argc,char **argv)
{

	FILE *fp;
	fp=fopen(argv[1],"r");
	int l=0,w=0,d=0;
	char ch;
	while((ch=fgetc(fp))!=-1)
	{
		if(ch>='0' && ch<='9')
			d++;
		if(ch==' ' || ch=='\n')
			w++;
		if(ch=='\n')
			l++;
	}
	rewind(fp);
	fclose(fp);

	printf("word count=%d digit count=%d line count=%d\n",w,d,l);

}
