#include<stdio.h>
void main()
{
	//WAP program to check given character is uppercase or lowercase using if and else condition

	char ch;
	printf("enter any character\n");
	scanf("%c",&ch); // if we give input as digits specialcase symbols it will give as lowercase or uppercase. so below expressions are not correct instead we elseif ladder. 

	if(ch&32)
	
		printf("lower case\n");
	
	else
	
		printf("upper case\n");
	

	if(ch>='a' && ch<='z')
	
		printf("lower case\n");
	
        else
        
	     printf("upper case\n");
        
}
