//WAP to reverse first 6bits to last 6bits of given  int num

#include<stdio.h>
void main()
{
	int i,j,num,m,n;
	printf("enter any shortint num\n");
	scanf("%d",&num);

	printf("before reversing num=%d\n",num);
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
			printf(" ");
	}
		/////////////////////////////////////////////////////////////////////////

		for(i=0,j=31;i<6;i++,j--)
		{
			m=num>>i&1;
			n=num>>j&1;
			if(m!=n)
			{
			num=num^1<<i;
			num=num^1<<j;
			}
		}
			/////////////////////////////////////////////////////////////////////////

			printf("\nafter reversing num =%d\n",num);
			for(i=31;i>=0;i--)
			{
				printf("%d",num>>i&1);
				if(i%8==0)
					printf(" ");
			}

		     	printf("\n");
}	
