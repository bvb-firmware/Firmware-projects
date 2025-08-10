#include<stdio.h>
int sum_arr(int *,int);
void main()
{
	int n;
	printf("enter no.of array elements\n");
	scanf("%d",&n);
	int a[n],ele,*sum,i,n1;
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");
	n1=sum_arr(a,n);
	printf("sum=%d\n",n1);

}
int sum_arr(int *a,int n)
{
	static int i=0,r,temp,n1=0,c;

	if(i<n)
	{
		if(c==0)
			temp=a[i];
		if(temp)
		{
			r=temp%10;
			temp/=10;	
                        c++;
			sum_arr(a,n);
			
		}
		else
		{
			n1=n1+r;
			i++;
			c=0;
				sum_arr(a,n);
		}


	}
	else
		return n1;

}
