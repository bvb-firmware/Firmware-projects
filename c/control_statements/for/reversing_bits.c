//WAP for reversing of bits of a given integer number Note: not revrese printing

#include<stdio.h>
void main()
{
int num,temp,n1,n2,i,j;
printf("enter any number\n");
scanf("%d",&num);

printf("before reversing num=%d\n",num);
for(j=31;j>=0;j--)
printf("%d",num>>j&1);

/////////////////////////////////////////////
for(i=0,j=31 ; i<j; i++,j--)
{
n1=num>>i&1;
n2=num>>j&1;
if(n1!=n2)
{
num=num^1<<i;
num=num^1<<j;
}
}
/////////////////////////////////////


printf("\nafter reversing num=%d\n",num);
for(j=31;j>=0;j--)
printf("%d",num>>j&1);
printf("\n");


}
