/* WAP in C to count all duplicate elements from array.
i/p: a[10]={3,3,2,4,4,2,5,3,4,9}
o/p: 3 ->3 times ,2-> 2 times , 4-> 3 times */

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],i,j,k,l;
	printf("enter a[n] aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);


	printf("before\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");


	for(i=0;i<n;i++)
	{
		for(j=i+1,k=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				k++;
				for(l=j;l<n;l++)
					*(a+l)=*(a+l+1);
				--j;
				--n;
			}
		}
		if(k!=0)
			printf("%d=%d\n",*(a+i),k+1);

	}



}
