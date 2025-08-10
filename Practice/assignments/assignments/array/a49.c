/* WAP in C to store prime index ele in another array.
i/p: int a[8]={11,22,33,44,55,66,77,88};
o/p: int b[8]={33,44,66,88}; */

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],i,mul,c1,b[n],j;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	printf("before\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	for(i=0,c1=0,j=0;i<n;i++)
	{
		mul=2;
		while(mul<=i)
		{
			if(i%mul==0)
				break;
			mul++;
		}
		if(mul==i)
		{
			
			b[j]=a[i];
				j++;
		}
	}

	printf("after\n");
	for(i=0;i<j;i++)
		printf("%d ",*(b+i));
	printf("\n");
}
