//WAP to print prime and count b/w 2 and 17
#include<stdio.h>
void main()
{
int n1,n2,i,c;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);

/*for(n1,c=0;n1<=n2;n1++)
{
	for(i=2;i<=n1;i++)
	{
		if(n1%i==0)
			break;
	}
	if(n1==i)
		c++;

}
printf("count=%d\n",c); */
c=0;
while(n1<=n2)
{
i=2;
while(i<=n1)
{
if(n1%i==0)
break;
i++;
}
if(n1==i)
c++;

n1++;
}

printf("count=%d\n",c);
}
