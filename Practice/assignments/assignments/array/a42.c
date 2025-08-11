/* WAP in C to shift all -ve elements to right side in
same array.
i/p: int a[7]={-1,22,3,-4,-8,33,77};
o/p: int a[7]={22,3,33,77,-1,-4,-8,}*/

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of array elements\n");
	scanf("%d",&n);

	int a[n],i,j,r,c=0;

	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	printf("before\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i=0;i<n-c;i++)
	{
		if(a[i]<0)
		{
			r=a[i];
			for(j=i;j<n-1;j++)
				a[j]=a[j+1];
			a[j]=r;
			--i;
			c++;
		}
	}


	printf("after\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
