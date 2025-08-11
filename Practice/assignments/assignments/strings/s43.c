/* WAP in C to reverse word lenght > 4 in string.
i/p: char s[20]=“ias abcde mkdir ”;
o/p:char s[20= “ias edcba irdkm ”; */


#include<stdio.h>
void main()
{
char s[30],t;
printf("enter any string\n");
scanf("%[^\n]",s);
printf("%s\n",s);

int i,j,len,k;
for(i=0;s[i];i++)
{
	for(j=i,len=0;s[j]!=' ' && s[j]!='\0'; j++)
		len++;
	k=i;
	i=j;
	j-=1;
	if(len>4)
	{
		for( ;k<j;k++,j--)
		{
			t=s[k];
			s[k]=s[j];
			s[j]=t;

		}

	}

}

printf("%s\n",s);
}

