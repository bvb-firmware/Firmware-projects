//design user defined atof function

#include<stdio.h>
#include<stdlib.h>
double my_atof(const char *);
void main(int argc,char **argv)
{
	int i;
	double num;
	for(i=1;i<argc;i++)
	{
		num=my_atof(argv[i]);
		printf("%f ",num);

	}

}
double my_atof(const char *p)
{
	int i,c,j;
	double num1=0,num=0;
	if(p[0]=='-'||p[0]=='+')
		i=1;
	else
		i=0;
	num=atoi(p);
	for(;p[i];i++)
	{
		if(p[i]=='.')
		{
			for(j=i+1,c=1,num1=0;p[j];j++)
			{
				if(p[j]>='0'&& p[j]<='9')
				{
					num1=num1*10+p[j]-48;
					c*=10;
				}
				else
				{
					if(p[0]=='-')
					num1=-num1;
					num1=num+(num1/c);
					return num1;
				}
			}
		}
	}
	if(p[0]=='-')
		num1=-num1;
	num1=(num1/c)+num;
	return num1;
}
