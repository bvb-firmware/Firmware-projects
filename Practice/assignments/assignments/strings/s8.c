/*  WAP in C to check string lenght is prime or not.
i/p: char s[10]= ”pawan”;
o/p: yes 5 is prime number  */


#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

int i,len,pos,c;
for(len=0;p[len];len++);
/*{

	for(pos=7,c=0;pos>=0;pos--)
	{
		if(p[i]>>pos&1)
		c++;
	}
	printf("in %c set bits=%d\n",p[i],c);
}*/

for(i=2;i<=len;i++)
{
if(len%i==0)
break;
}
if(len==i)
printf("yes %d is prime\n",len);

}

