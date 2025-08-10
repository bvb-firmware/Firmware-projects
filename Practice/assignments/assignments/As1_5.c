//WAP to rotate the bits of given short int num

#include<stdio.h>
void main()
{
	int i,r,j,num,temp;
	printf("enter any shortint num\n");
	scanf("%d",&num);

	printf("before rotating num=%d\n",num);
	for(i=15;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%4==0)
			printf(" ");
	}
		/////////////////////////////////////////////////////////////////////////

		for(i=15,j=1;j<=3;j++)
		{
			r=num&1;// to check 0th bit is set or clear
			num=num>>1;
			if(r)
			num=num|1<<i;
		}
			/////////////////////////////////////////////////////////////////////////

			printf("\nafter rotating num =%d\n",num);
			for(i=15;i>=0;i--)
			{
				printf("%d",num>>i&1);
				if(i%4==0)
					printf(" ");
			}

		     	printf("\n");
}	
