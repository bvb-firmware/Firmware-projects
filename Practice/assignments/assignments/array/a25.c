/* WAP in C to delete 2nd,3rd index from array .
   i/p: int a[5]={99,88,77,66,55}, pos1=2, pos2=3;
   o/p: int a[5]={99,88,55} */

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],i,j,t,t1;
	printf("enter a[n] aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);


	printf("before\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	printf("enter indexes to delete and no.of elements deleting\n");
	scanf("%d%d",&t,&t1);

	for(i=0;i<2;i++)
	{
		for(j=t;j<n;j++)
			*(a+j)=*(a+j+1);
		t=t1-1;
		--n;

	}

	printf("after\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

}
