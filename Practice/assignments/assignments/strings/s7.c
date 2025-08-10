/*  .WAP in C to count set bit all char in string.
i/p: char s[10]=”bcd”;
o/p: 3 4 3  */

#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

int i,pos,c;
for(i=0;p[i];i++)
{

	for(pos=7,c=0;pos>=0;pos--)
	{
		if(p[i]>>pos&1)
		c++;
	}
	printf("in %c set bits=%d\n",p[i],c);
}

}

