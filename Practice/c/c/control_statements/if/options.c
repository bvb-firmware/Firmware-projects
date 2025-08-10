/* WAP to scan a number and bit position from the user. after that display a menu which contains three options as :
            (i)   set bit
            (ii)  clear bit
            (iii) compliment bit
scan an option from the user depends on that option perform the task and
display the result   */ 

#include<stdio.h>
//#include<limits.h>
void main()
{
int num,pos,r,op,c=0;
l1:
printf("Enter any number\n");
scanf("%d",&num);
//if(num>=0 && num<=INT_MAX)   // range of int
if(num>=0 && num<=2147483647)  // range of int
{
	printf("Enter any postion between(0-31)\n");
	scanf("%d",&pos);
	if(pos>=0 && pos<=31)   // length of int
	{
		printf("Enter the option :\n(1)set bit\n(2)clear bit\n(3)compliment bit\n");
		scanf("%d",&op);
		if(op==1)
		{
			r=num|1<<pos;
			printf("After setting bit num=%d\n",r);
		}
		else if(op==2)
		{
			r=num&~(1<<pos);
			printf("After clearing bit num=%d\n",r);
		}
		else if(op==3)
		{
			r=num^1<<pos;
			printf("After complimenting bit num=%d\n",r);
		}
		else
		{
			printf("Unknown option\n");
		}
	}
	else
	{
		printf("wrong bit position\n");
	}
}
else
{
	printf("integer number overflow\n");
	c++;
	if(c<3)
		goto l1;
}
}

