/*   WAP in C to delete duplicate char from string.
i/p: s[20]=”abc abc ppp 122”
o/p : abc p12  */


#include<stdio.h>
void main()
{
char s[20],*p=s;

printf("enter string\n");
scanf("%[^\n]",s);
printf("%s\n",s);

int i,j,k;
for(i=0;p[i];i++)
{
	for(j=i+1;p[j];j++)
	{
		if(p[i]==p[j])
		{
			for(k=j;s[k];k++)
				p[k]=p[k+1];
			--i;


		}

	}

}






printf("%s\n",p);


}



