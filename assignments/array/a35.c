/* WAP in C to print and count perfect in array .
i/p: int a[7]={3,4,5,6,7,28,9};
o/p: 6 28 , count= 2*/

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,sum,mul,c;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

for(i=0,c=0;i<n;i++)
{
	sum=0;
	mul=1;
	while(mul<*(a+i))
	{
		if(*(a+i)%mul==0)
		sum=sum+mul;
		mul++;

	}
	if(sum==*(a+i))
	{
		c++;
		printf("%d\n",sum);
	}
}

printf("count=%d\n",c);
}
