/*WAP in C using CLA to write given function.
i/p: ./a.out coding c_ds
o/p : len1= 6 , len2= 4
both string not equal 
int my_strlen(char *);
int my_strcmp(char *, char*); */

#include<stdio.h>
int my_strlen(char *);
int my_strcmp(char *,char *);
void main(int argc,char **argv)
{
	int len1,len2,l;
	/*for(len1=0;argv[1][len1];len1++);
	  for(len2=0;argv[2][len2];len2++);
	  if(len1==len2)
	  printf("both are equal len1=%d len2=%d\n",len1,len2);
	  else
	  printf("both are not equal len1=%d len2=%d\n",len1,len2); */

	len1=my_strlen(argv[1]);
	len2=my_strlen(argv[2]);
	l=my_strcmp(argv[1],argv[2]);
	if(l==0)
		printf("both aree equal len1=%d len2=%d\n",len1,len2);
	else
		printf("both are not equal len1=%d len2=%d\n",len1,len2);
}
int my_strlen(char *p)
{
	int len;
	for(len=0;p[len];len++);

	return len;
}
int my_strcmp(char *p,char *q)
{

	int l,i;
	for(i=0;p[i];i++)
	{
		l=p[i]-q[i];
		if(l!=0)
			return l;
	}
	return l;
}
