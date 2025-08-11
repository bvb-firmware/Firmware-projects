/* WAP in C to count each char in string .
i/p: char s[20]=”1213ac1c”;
o/p: 1 --> 3 , 2--> 1,3-->1 ,a-->1 ,c-->2 */


#include<stdio.h>
void main()
{
char s[20];
printf("enter string\n");
scanf("%[^\n]",s);
printf("%s\n",s);

int i,c,j,k;
for(i=0;s[i];i++)
{
	for(j=i+1,c=1;s[j];j++)
	{
		if(s[i]==s[j])
		{
			c++;
			for(k=j;s[k];k++)
				s[k]=s[k+1];
		}
	}
printf("%c---> %d\n",s[i],c);
}


}

