/* WAP to C to insert 99 on 0th index in same array .
i/p: int a[7]={2,3,5,7,11,13 }, in=0, num=99;
o/p: int a[7]={99, 2,3,5,7,11,13}; */

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,t,num;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

printf("enter index and number to insert\n");
scanf("%d%d",&t,&num);

for(i=n;i>=0;i--)
{
*(a+i)=*(a+i-1);
}
*(a+t)=num;

printf("after\n");
for(i=0;i<n+1;i++)
printf("%d ",*(a+i));
printf("\n");

}
