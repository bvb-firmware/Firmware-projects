/*WAP to delete a digit from number
i/p n=234527 ,d=2
o/p= 3457 */

#include<stdio.h> 
void main()
{
int n,d,r,sum,l;

printf("enter any number and digit to delete\n");
scanf("%d%d",&n,&d);

for(sum=0,l=1;n;n/=10)
{
	r=n%10;
	if(r!=d)  // compare r with the "number to delete"
	{
		sum=sum+r*l;
		l=l*10;
	}
}
printf("after deleting digit number is: %d\n",sum);

}
