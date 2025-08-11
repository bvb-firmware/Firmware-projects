//WAP to sort 1st four elements of array in descending order

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of array elements\n");
	scanf("%d",&n);

	int a[n],i,j,t;
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	printf("before:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(*(a+j)>*(a+i))
			{
				t=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=t;
			}





		}
	}
	printf("after:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");




}
