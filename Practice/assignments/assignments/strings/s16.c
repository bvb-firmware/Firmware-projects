/*  WAP in c to delete digits from string .
i/p: char s[20]=”covid19 a12b”;
o/p: covid ab */

#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);


int i,j;



i=0;
while(p[i])
{
	if(p[i]>='0' && p[i]<='9')
	{
		j=i;
		while(p[j])
		{
			p[j]=p[j+1];
			j++;



		}
		//	len--;
		--i;
	}
		++i;
}
printf("%s\n",p);

}



