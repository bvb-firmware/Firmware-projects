//WAP to print binary   all array elements

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],i,c,c1,c2,c3;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0,c=0,c1=0,c2=0,c3=0;i<n;i++)
	{
		printf("%d ",*(a+i));
			if(*(a+i)>0)
			{
			c++;
			if(*(a+i)%2)
			c3++;
			else
			c2++;
			}
			else
			c1++;
	
	}
	printf("\n");
	printf("+ve=%d  -ve=%d  even=%d  odd=%d\n",c,c1,c2,c3);
}
