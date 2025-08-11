//WAP to sort an array using descending ordr.

#include<stdio.h>
void main()
{
int n;
printf("enter no.of array elements\n");
scanf("%d",&n);
int a[n],i,j,t;
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");
/////////////////////////////////////////////////////////////////////////
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(*(a+i)<*(a+j))
		{
			t=*(a+i);
			*(a+i)=*(a+j);
			*(a+j)=t;


		}

	}
}

/////////////////////////////////////////////////////////////////////////
printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");


}
