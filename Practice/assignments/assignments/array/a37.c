/* WAP in C to print and count armstrong in array .
i/p: int a[7]={22,4,21,6,153,28,11};
o/p: 4 6 153 ,count= 3 */

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,sum,r,r1,c,temp,temp1,j,c1;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

for(i=0,c=0;i<n;i++)
{
	for(c1=0,temp1=a[i];temp1;c1++,temp1/=10);
	for(sum=0,temp=a[i]; a[i];a[i]/=10)
	{
		r=a[i]%10;
		r1=r;
		j=1;
		while(j<c1)
		{
			r1=r1*r;
			j++;
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
