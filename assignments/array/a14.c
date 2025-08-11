//WAP to print second smallest  array elements

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],s,ss,i;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");
	if(*(a+0)<*(a+1))
	{
		s=*(a+0);
		ss=*(a+1);
	}
	else if(*(a+1)<*(a+0))
	{
		s=*(a+1);
		ss=*(a+0);


	}
	else
	{
		s=*(a+0);
		ss=*(a+1);

	}


	for(i=2,s,ss;i<n;i++)
	{
		if(*(a+i)<s)
		{
			ss=s;
			s=*(a+i);

		}
		else if(*(a+i)<ss && *(a+i)!=s)
			ss=*(a+i);

	}
	printf("smallest element=%d  second smallest element=%d\n",s,ss);
}
