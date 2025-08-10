#include<stdio.h>
void prime_del(int *,int);
void main()
{
int a[5]={12,13,124,227,346};
int i,ele;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
prime_del(a,ele);

for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
void prime_del(int *a,int ele)
{
	int i,j,r;
	for(i=0;i<ele;i++)
	{
		r=a[i]%10;
		for(j=2;j<=r;j++)
		{
			if(r%j==0)
				break;
		}
		if(r==j)
		{

			a[i]/=10;
		}
	}

}
