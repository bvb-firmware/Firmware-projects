/* WAP in C to count vowels in string using do-while .
i/p: s[20]=”abc pqr aeio”
o/p: vowels count= 5   */


#include<stdio.h>
#include<string.h>
void main()
{
char s[20],*p=s,v[20];
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);
printf("enter vowels\n");
scanf("%s",v);

int i,c,j;
i=0,c=0;
do
{
	j=0;
	while(v[j])
	{
		if(p[i]==v[j])
			c++;
		j++;
	}
i++;
}while(p[i]);


printf("vowels count=%d\n",c);


}



