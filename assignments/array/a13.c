//WAP to print second smallest  array elements

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],l,sl,i;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");
	if(a[0]>a[1])
	{
		l=a[0];
		sl=a[1];
	}
	else if(a[1]>a[0])
	{
		l=a[1];
		sl=a[0];


	}
	else
	{
		l=a[0];
		sl=a[1];

	}


	for(i=2,l,sl;i<n;i++)
	{
		if(a[i]>l)
		{
			sl=l;
			l=a[i];

		}
		else if(a[i]>sl && a[i]!=l)
			sl=a[i];

	}
	printf("largest element=%d  second largest element=%d\n",l,sl);
}
