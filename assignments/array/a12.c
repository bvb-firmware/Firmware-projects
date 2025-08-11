//WAP to print smallest  array elements

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],s,i;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0,s=*(a+0);i<n;i++)
	{
		printf("%d ",*(a+i));
	if(*(a+i)<s)
	s=*(a+i);

	}
	printf("\n");
	printf("smallest element=%d\n",s);
}
