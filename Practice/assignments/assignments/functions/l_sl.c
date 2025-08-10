//design a function for finding largest and second largest element in an array.

#include<stdio.h>
void l_sl(int *,int ,int *,int *);
void main()
{
	int n;
	printf("enter no.of array elements\n");
	scanf("%d",&n);
	int a[n],*l,*sl=0,i;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	l_sl(a,n,l,sl);
	printf("large=%d\n",*l);
	printf("second largest=%d\n",*sl);

}
void l_sl(int *a,int n,int *l,int *sl)
{
	int i;
	*l=a[0];

	for(i=1;i<n;i++)
	{
		if(a[i]>*l)
		{
			*sl=*l;
			*l=a[i];
		}
		else if(a[i]>*sl && a[i]!=*l)
			*sl=a[i];
	}


}
