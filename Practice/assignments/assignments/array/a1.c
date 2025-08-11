//WAP to print an array using int pointer

#include<stdio.h>
void main()
{
int n,ele;
printf("no.of elements\n");
scanf("%d",&n);
int a[n],*p,i;
ele=sizeof(a)/sizeof(a[0]);
p=a;
printf("enter array elements\n");
for(i=0;i<ele;i++)
scanf("%d",p++);
p=a;

for(i=0;i<ele;i++)
printf("%d ",*p++);
}
