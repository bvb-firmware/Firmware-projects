/*  WAP in C to count substring in main string .
i/p: char m[20]=”abcd cd 12cd”, s[5]=”cd”
o/p: count = 3 times  */

#include<stdio.h>
void main()
{
char m[30],s[30];
printf("enter main and substings\n");
scanf("%[^\n]",m);
scanf(" %[^\n]",s);
printf("%s\n",m);
printf("%s\n",s);


int i,j,c;

for(i=0,j=0,c=0;m[i];i++)
{

	if(m[i]==s[j])
		j++;
	else if(s[j]=='\0')
	{
		c++;
		j=0;
		i--;


	}

}

printf("i=%d j=%d\n",i,j);

/*for(i-=1,j-=1;j>=0;i--,j--)
{
if(s[j]!=m[i])
break;
}
if(j==-1)
c++;*/
if(s[j]=='\0')
c++;

printf("no.of times substring present=%d\n",c);


}


