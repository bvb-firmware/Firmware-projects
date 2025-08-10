/*int main(int argc , char **argv)
1.
WAP in C using CLA to write given function.
int my_atoi(const char *nptr);*/

#include<stdio.h>
#include"header.h"
//int my_atoi(const char *);
void main(int argc,char **argv)
{
	int i,num;
	for(i=1;i<argc;i++)
	{
		num=my_atoi(argv[i]);
		printf("%d ",num);

	}

}
int my_atoi(const char *p)
{
	int num=0,i;
	if(p[0]=='-'||p[0]=='+')
		i=1;
	else
		i=0;
	for( ;p[i];i++)
	{
		if(p[i]>='0'&&p[i]<='9')
			num=num*10+p[i]-48;
		else
		{
			if(p[0]=='-')
				num=-num;
			return num;}
	}

	if(p[0]=='-')
		num=-num;
	return num;
}
