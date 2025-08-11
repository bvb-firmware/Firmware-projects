//WAP to print binary   all array elements

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],i,pos;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
	{
		printf("%d = ",*(a+i));
		for(pos=31;pos>=0;pos--)
	
		printf("%d",*(a+i)>>pos&1);
		printf("\n");
	}
	printf("\n");
}
