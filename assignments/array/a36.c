/* WAP in C to print and count strong in array .
i/p: int a[7]={2,4,2,6,145,28,1};
o/p: 2 2 145 1 ,count= 4 */

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,sum,r,r1,c,temp;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

for(i=0,c=0;i<n;i++)
{
	for(sum=0,temp=a[i]; a[i];a[i]/=10)
	{
		r=a[i]%10;
		r1=1;
		while(r)
		{
			r1=r*r1;
			--r;
		}
		sum=sum+r1;
	}
	if(sum==temp)
	{
		c++;
		printf("%d\n",sum);
	}
}

printf("count=%d\n",c);
}
