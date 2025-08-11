//WAP to check num is prime or perfect or strong or armstrong number using switch case

#include<stdio.h>
void main()
{
int num,i,r,r1,temp,op,temp1,sum,rev,c;
printf("enter any number\n");
scanf("%d",&num);

printf("enter an option\n 1)prime check\n 2)perfect check\n 3)palindrome check\n 4)factors\n 5)strong check\n 6)armstrong check\n 7)binary\n");
scanf("%d",&op);

switch(op)
{
	case 1: for(i=2;i<num;i++)
		{
			if(num%i==0)
				break;
			c++;
		}
		if(num==i)
			printf("prime number\n");
		else 
			printf("not prime number\n");
		break;

	case 2: for(i=1,sum=0;i<num;i++)
		{
			if(num%i==0)
				sum=sum+i;
		}
		if(sum==num)
			printf("perfect number\n");
		else
			printf("not perfect number\n");
		break;

	case 3: for(rev=0,temp=num;temp;temp/=10)
		{
			r=temp%10;
			rev=rev*10+r;
		}
		if(rev==num)
			printf("palindrome\n");
		else
			printf("not palindrome\n");
		break;

	case 4: for(i=1;i<=num;i++)
		{
			if(num%i==0)
				printf("%d\n",i);
		}
		break;


	case 5: for(temp=num,sum=0;temp;temp/=10)
	       {
		       r=temp%10;
		       for(r1=1,i=1;i<=r;i++)
		       {
			       r1=r1*i;

		       }
		       sum=sum+r1;

	       }
	       if(sum==num)
		       printf("strong number\n");
	       else
		       printf("not strong number\n");
	       break;

	case 6: for(temp=num,c=0;temp;temp/=10)
		{
			c++;
			for(temp1=num,sum=0;temp1;temp1/=10)
			{
				r=temp1%10;
				for(r1=1,i=1;i<=c;i++)
				{
					r1=r1*r;
				}
				sum=sum+r1;
			}
		}
			if(sum==num)
				printf("armstrong\n");
			else
				printf("not armstrong\n");
		break;
		
		

	case 7: for(i=31;i>=0;i--)
			printf("%d",num>>i&1);
		printf("\n");
		break;

	default : printf("unknown option\n");
}




}
