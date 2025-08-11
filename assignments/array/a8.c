//WAP to delete 0th bit of all array elements

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],i;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
	{
	
		printf("%d ",*(a+i));
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		*(a+i)=*(a+i)>>1;
	
		printf("%d ",*(a+i));
	}
	printf("\n");
}
