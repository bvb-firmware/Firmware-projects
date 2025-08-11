#include<stdio.h>
#include<stdarg.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<stdlib.h>

void *isr(char *b,char c)
{
	FILE *fp;
	fp=fopen(b,"r");
	printf("%s\n",b);
	if(fp==0)
	{
		printf("no such file\n");
		return 0;
	}
	int l=0;
	int *n=0;
	char ch;
	while((ch=fgetc(fp))!=EOF)
	{
		if(c==ch)
			l++;
	}
	n=&l;

	printf("count=%d\n",l);
	return (void *)n;
	//pthread_exit(n);
}

void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("USAGE:a.out filename char\n");
		return;
	}
	char s[100],c;
	strcpy(s,argv[1]);
	printf("%s\n",s);
	c=argv[2][0];
	pthread_t t;
	pthread_create(&t,0,isr(s,c),0);
	perror("pthread");
	void *m;
	int *k;
	pthread_join(t,&m);
	k=(int *)m;
	printf("counbtf=%d\n",*k);
}
