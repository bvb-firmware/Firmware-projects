//wap to reverse the array elements using cla i/p: ./a.out 11 22 33 44 55 66

#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	int i,j,len,temp,k;
	for(len=0;len<argc;len++);
	printf("%d\n",len);
	for(i=1,len-=1;i<len;i++,len--)
	{
		j=atoi(argv[i]);
		k=atoi(argv[len]);
		temp=j;
		j=k;
		k=temp;
	}
	for(i=1;i<argc;i++)
		printf("%d ",atoi(argv[i]));
	printf("\n");


/*int temp1[argc];
i=argc-1;
for(i,j=0;i>0;i--,j++)
{
temp1[j]=atoi(argv[i]);

}
for(i=0;i<argc-1;i++)
printf("%d ",temp1[i]);
printf("\n");*/
}
