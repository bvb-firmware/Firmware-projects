/*  .WAP in C to delete 0th index char from string.
i/p: char s[20]=”coding sirji”;
o/p: oding sirji */

#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

char ch;
printf("enter the index to delete\n");
scanf(" %d",&ch);

int i,len,j,c;

len=-1;
while(len++,p[len]);

printf("%d\n",len);

i=0;
while(p[i])
{
	if(ch==i)
	{
		j=i;
		while(p[j])
		{
			p[j]=p[j+1];
			j++;
		


		}
	//	len--;
	}
		++i;

 
}
printf("%s\n",p);

}

