//WAP for reversing of bits of a given integer number Note: not revrese printing

#include<stdio.h>
void main()
{
int num,num1,n1,n2,i,j,r;
printf("enter any number\n");
scanf("%d",&num);

printf("before reversing num=%d\n",num);
for(j=31;j>=0;j--)
printf("%d",num>>j&1);

/////////////////////////////////////////////
for(i=0,j=31,num1=0 ; i<32; i++,j--)
if(num&1<<i)
num1=num1|1<<j;
num=num1;


/////////////////////////////////////


printf("\nafter reversing num=%d\n",num);
for(j=31;j>=0;j--)
printf("%d",num>>j&1);
printf("\n");


}
