/* WAP in C to replace prime index ele with 0 in array.
i/p: int a[8]={11,22,33,44,55,66,77,88};
o/p: int a[8]={11,22,0 ,0 ,55,0 ,77,0 };  */

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],i,mul,c1;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	printf("before\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	for(i=0,c1=0;i<n;i++)
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
			
			a[i]=0;
		}
	}

	printf("after\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
