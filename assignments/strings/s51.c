

#include<stdio.h>
void main()
{
char s[30];
printf("enter any string\n");
scanf("%[^\n]",s);
printf("%s\n",s);

int i,j,k,len,len1,m,n;
for(i=0,len1=0;s[i];i++)
{
	for(j=i,len=0;s[j];j++)
	{
		if(s[j]==' ')
			break;
		len++;
	}
	if(len>len1)
	{
		len1=len;
		m=i;
		k=i;
		n=j;
	}
	i=j;
}
printf("len1=%d m=%d n=%d\n",len1,m,n);

for(i=m;i<=n;i++)
{
	for(m=k;s[m];m++)
		s[m]=s[m+1];

}


printf("%s\n",s);
}
