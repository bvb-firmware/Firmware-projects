/*  WAP in C to swap 3rd ele with 4th ele in array .
i/p: int a[6]={11,22,33,44,55,66};
o/p: 11 22 33 55 44, 66 */

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,t;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

t=*(a+4);
*(a+4)=*(a+3);
*(a+3)=t;

printf("after\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

}
