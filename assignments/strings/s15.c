/*  WAP in C to delete first 3 char from string.
i/p: char s[10]=”armstrong num”
o/p: strong num  */

#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);


int i,j,ind,n;
printf("enter starting index and no.of characters to delete\n");
scanf(" %d%d",&ind,&n);



i=0;
while(i<n)
{
		j=ind;
		while(p[j])
		{
			p[j]=p[j+1];
			j++;
		


		}
	//	len--;
		++i;

 
}
printf("%s\n",p);

}

