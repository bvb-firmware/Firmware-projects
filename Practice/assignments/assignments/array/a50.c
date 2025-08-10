/*    50. WAP in C to delete all strong num from array .
i/p: int a[6]={2,145,2,14,3,2};
o/p: int a[6]={14,3} */

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,sum,r,r1,c,temp,j;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

for(i=0,c=0;i<n;i++)
{
	for(sum=0,temp=a[i]; temp;temp/=10)
	{
		r=temp%10;
		r1=1;
		while(r)
		{
			r1=r*r1;
			--r;
		}
		sum=sum+r1;
	}
	if(sum==a[i])
	{
	for(j=i;j<n;j++)
	a[j]=a[j+1];
	--n;
	--i;

	}
}
printf("after\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");

}
