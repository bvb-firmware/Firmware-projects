/*WAP in C to merge 2 array into 3rd array .
i/p: int a[2]={1,5}; b[4]={11,22,33,44};
o/p: int c[6]={1,11,5,22,33,44};*/

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],b[n],c[n+n],i;
printf("enter a[n] aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("enter b[n] aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",b+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(b+i));
printf("\n");

for(i=0;i<n;i++)
{
*(c+i+i)=*(a+i);
*(c+i+i+1)=*(b+i);
}

printf("after\n");
for(i=0;i<(n+n);i++)
printf("%d ",*(c+i));
printf("\n");

}
