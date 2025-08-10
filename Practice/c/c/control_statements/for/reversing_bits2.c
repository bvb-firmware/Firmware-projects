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
printf("\n");
/////////////////////////////////////////////
for(j=0,n1=15;j<=31;j++)
{
printf("%d",n1>>j&1);
}
printf("\n");
printf("n1=%d\n",n1);
for(j=31,num1=0; j>=0 ; j--)
{
printf("%d",num1>>j&1);
}
printf("\n");
printf("num1=%d\n",num1);


/////////////////////////////////////


printf("\nafter reversing num=%d\n",num=num1|n1);
for(j=31,num=num1|n1;j>=0;j--)
printf("%d",num>>j&1);
printf("\n");


}
