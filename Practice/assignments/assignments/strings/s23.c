/* WAP in C to print all word lenght in string .
i/p: char s[20]= ”vector india pvt ”
o/p: 6 5 3   */


#include<stdio.h>
#include<string.h>
void main()
{
char s[20];
printf("enter any string\n");
scanf("%[^\n]",s);
printf("%s\n",s);


int i,c,k,j,c1;

/*for(i=0,k=0,c1=0;i<=c1;i++)
{
	for(j=k,c=0;s[j]!=' ';j++)
	{

		if(s[j]=='\0')
		break;
			c++;
	}
	c1++;
	printf("%d\n",c);
	k=j+1;
	if(s[j]=='\0')	
	break;


}*/

char *p,*q;

p=s;

while(q=strchr(p,' '))
{
printf("%ld\n",q-p);
p=q+1;

}

printf("%ld\n",strlen(p));


}



