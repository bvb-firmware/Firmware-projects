//WAP to print binary   all array elements

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],i,pos,set_count,clear_count;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0,set_count=0,clear_count=0;i<n;i++)
	{
		printf("%d ",*(a+i));
		for(pos=31;pos>=0;pos--)
		{
			if(*(a+i)>>pos&1)
			set_count++;
			else
			clear_count++;
		}
	
	}
	printf("\n");
	printf("set bit count=%d  clear bit count=%d\n",set_count,clear_count);
}
