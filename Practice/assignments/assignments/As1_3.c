//WAP to reverse the bits of given charcter

#include<stdio.h>
void main()
{
	int i,j,m,n;
	char ch,temp;
	printf("enter any character\n");
	scanf("%c",&ch);

	printf("before reversing char is : %c and its acsii value is : %d\n",ch,ch);
	for(i=7;i>=0;i--)
	{
		printf("%d",ch>>i&1);
		if(i%4==0)
			printf(" ");
	}
		/////////////////////////////////////////////////////////////////////////

		for(i=0,j=7;i<j;i++,j--)
		{
			m=ch>>i&1;
			n=ch>>j&1;
			if(m!=n)
			{
				ch=ch^1<<i;
				ch=ch^1<<j;

			}
		}
			/////////////////////////////////////////////////////////////////////////

			printf("\nafter reversing char is : %c and its acsii value is : %d\n",ch,ch);
			for(i=7;i>=0;i--)
			{
				printf("%d",ch>>i&1);
				if(i%4==0)
					printf(" ");
			}

		     	printf("\n");
}	
