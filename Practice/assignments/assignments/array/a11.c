/* WAP in C to store set bit count to another array.
i/p: int a[5]={10,15,64,100,511};
o/p: int b[5]={2 , 4, 1, 3, 9 };*/

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],b[n],i,pos,set_count;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");

	for(i=0;i<n;i++)
	{
		for(pos=31,set_count=0;pos>=0;pos--)
		{
			if(*(a+i)>>pos&1)
			set_count++;
		}
		*(b+i)=set_count;
		printf("%d ",*(b+i));
	
	}
	printf("\n");
}
