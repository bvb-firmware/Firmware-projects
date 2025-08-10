/*.WAP in C to count duplicate char from string.
i/p: s[20]=”aaababcdeb”
o/p: a-->4 times b-->3 times  */

#include<stdio.h>
void main()
{
char s[20],*p=s;

printf("enter string\n");
scanf("%[^\n]",s);
printf("%s\n",s);

int i,j,c,k;
for(i=0;p[i];i++)
{
	for(j=i+1,c=0;p[j];j++)
	{
		if(p[i]==p[j])
		{
			c++;
			for(k=j;p[k];k++)
				p[k]=p[k+1];
				--j;
		


		}

	}
	if(c>0)
	printf("%c----> %d\n",p[i],c+1);

}








}



