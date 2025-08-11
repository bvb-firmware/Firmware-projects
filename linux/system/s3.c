
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
void main(int argc,char **argv)
{

if(argc!=2)
{
printf("usage\n");
return;
}

int i,c=0,j,k;
for(i=0;argv[1][i];i++)
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

for(i=0;i<c+1;i++)
{
if(fork()==0)
{
system(s[i]);
}
else
;
}

}







