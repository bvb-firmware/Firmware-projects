#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usage\n");
		return;
	}

	int i,c,j,k;

	for(i=0,c=0;argv[1][i];i++)
	{
		if(argv[1][i]==',')
			c++;
	}

	char s[c+1][i];
	for(i=0,j=0,k=0;argv[1][i];i++,k++)
	{
		if(argv[1][i]==',')
		{
			s[j][k]='\0';
			j++;
			k=-1;
		}
		else
			s[j][k]=argv[1][i];
	}



	for(j=0;j<c+1;j++)
	{
		printf("%s\n",s[j]);
		system(s[j]);
		//sleep(5);
	}
}


