/* WAP in C using CLA to reverse string .
i/p : ./a.out “123 789 CBA”
o/p: ABC 987 321 */

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	int i,j,k;
	char t;
	for(i=1;i<argc;i++)
	{
		for(k=0;argv[i][k];k++);
		for(j=0,k-=1;j<k;j++,k--)
		{
			t=argv[i][j];
			argv[i][j]=argv[i][k];
			argv[i][k]=t;

		}

	}

	for(i=argc-1;i>0;i--)
		printf("%s ",argv[i]);
	printf("\n");
}
