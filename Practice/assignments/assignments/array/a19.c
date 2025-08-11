/* WAP to C to insert 99 on 0th , 88 on 1st index in
same array .
i/p: int a[9]={30,11,45,34,14,8 ,50 },num=99 ;
o/p: int a[9]={99,88, 30,11,45,34,14,8, 50}*/

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,t,t1,num,num1,n1;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

printf("enter indexes and numbers to insert and no.of elements to insert\n");
scanf("%d%d%d%d%d",&t,&t1,&num,&num1,&n1);

for(i=0;i<n1;i++)
{
for(i=n;i>t;i--)
*(a+i)=*(a+i-1);
*(a+t)=num;
t=t1;
num=num1;
}
printf("after\n");
for(i=0;i<(n+n1);i++)
printf("%d ",*(a+i));
printf("\n");

}
