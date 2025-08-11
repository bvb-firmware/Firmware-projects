/* 34. WAP in C to print and count prime in array .
i/p: int a[7]={3,4,5,6,7,8,9};
o/p: 3 5 7 , count= 3  */

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
		while(mul<(*(a+i)))
		{
			if(*(a+i)%mul==0)
				break;
			mul++;
		}
		if(mul==(*(a+i)))
		{
			c1++;
			printf("%d\n",mul);
		}
	}

	printf("count=%d\n",c1);
}
