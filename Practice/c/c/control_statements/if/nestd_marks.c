/* WAP to display the result of a student based marks he got
         0---39 = fail
         40---59 = C grade
         60---79 = B grade
         80---100 = A grade */

#include<stdio.h>
void main()
{
int marks;
printf("enter any 0 to 100 marks\n");
scanf("%d",&marks);
// using nested if and else
if(marks<80)
{
	if(marks<60)
	{
		if(marks<40)
		{
			printf("Fail\n");
		}
		else
			printf("c grade\n");
	}
	else
		printf("B grade\n");
}
else
printf("A grade\n");

// here we use other expression which gives same result of above. 
if(marks>39)
{
	if(marks>60)
	{
		if(marks>80)
		{
			printf("A grade\n");
		}
		else
			printf("B grade\n");
	}
	else
		printf("C grade\n");
}
else
printf("Fail\n");

// in case of (-ve)marks or morethan 100 we use nested if to get same result above

if(marks>=0 && marks<=100)
{
	if(marks<=79)
	{
		if(marks<=59)
		{
			if(marks<=39)
			{
				printf("Fail\n");
			}
			else
				printf("C grade\n");
		}
		else
			printf("B grade\n");
	}
	else
		printf("A grade\n");
}
else
printf("Invalid marks\n");  

}
