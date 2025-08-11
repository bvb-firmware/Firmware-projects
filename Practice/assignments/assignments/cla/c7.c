/*WAP in C using CLA to print average and sum
  of 3 float number .
  i/p: ./a.out 12.56 45.7 345.23
  o/p : sum= 403.49 avg=134.496  */

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	double sum,j;
	int i;
	for(i=1,sum=0;i<argc;i++)
	{
		j=atof(argv[i]);
		if(j>=0 || j<=0)
			sum=sum+j;

	}
	printf("sum=%f avg=%f\n",sum,sum/(argc-1));
}
