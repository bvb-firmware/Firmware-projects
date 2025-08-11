/* WAP in C to reverse word having digit in string.
i/p: char s[20]=“coding 123abc vector ptr1”;
o/p: char s[20 =”coding cba321 vector 1rtp”  */


#include<stdio.h>
void main()
{
char s[30],t;
printf("enter any string\n");
scanf("%[^\n]",s);
printf("%s\n",s);

int i,j,k;
for(i=0;s[i];i++)
{
	if(s[i]>='0' && s[i]<='9')
	{
		for(j=i;s[j]!=' ' && s[j]!=*(s-1) ; j--)
			j;
		for(k=i;s[k]!=' ' && s[k]!='\0';k++)
			k;
		i=k;
		k-=1;
		j+=1;
		for( ;j<k ;j++,k-- )
		{
			t=s[j];
			s[j]=s[k];
			s[k]=t;

		}



	}


}

printf("%s\n",s);
}
