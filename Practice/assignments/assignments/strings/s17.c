/* WAP in C to delete prime digit from string.
i/p: char s[20]=”abc3456 567abc”;
o/p: abc46 6abc  */

#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);


int i,j,k;



i=0;
while(p[i])
{
	if(p[i]>='0' && p[i]<='9')
	{
		j=2;
		while(j<=p[i]-48)
		{
			if((p[i]-48)%j==0)
				break;

			j++;
		}
		if(p[i]-48==j)
		{
			k=i;
			while(p[k])
			{
				p[k]=p[k+1];
				k++;
			}

			--i;

		}
	}
	++i;
}
printf("%s\n",p);

}



