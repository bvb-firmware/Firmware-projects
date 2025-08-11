//WAP to delete 1st digit of  all array elements

#include<stdio.h>
void main()
{
	int n;
	printf("enter no.of elements\n");
	scanf("%d",&n);

	int a[n],i,temp,temp1,r,r1,l,sum,j,c,k;
	printf("enter aray elemants\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++)
	{
		/*for(temp=*(a+i) ;temp;temp/=10)
			r=temp%10;
		for(temp1=*(a+i),l=1,sum=0;temp1;temp1/=10)
		{
			r1=temp1%10;
			if(r!=r1)
			{

				sum=sum+l*r1;
				l=l*10;
			}
			*(a+i)=sum;
		}
		printf("%d ",*(a+i));*/
	for(temp=a[i],c=0;temp;temp/=10,c++);
	for(temp1=a[i],j=0,l=1,k=0;j<c-1;j++,temp1/=10,l=l*10)
{
r=temp1%10;
k=k+r*l;


}
a[i]=k;
		printf("%d ",*(a+i));
	}
	printf("\n");
}
