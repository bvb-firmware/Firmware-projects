/*WAP in C to merge 2 array into 3rd array .
i/p: int a[2]={1,5}; b[4]={11,22,33,44};
o/p: int c[6]={1,11,5,22,33,44};*/

#include<stdio.h>
void main()
{
int n,n1;
printf("enter no.of elements\n");
scanf("%d%d",&n,&n1);

int a[n],b[n1],c[n+n1],i,k;
printf("enter a[n] aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("enter b[n1] aray elemants\n");
for(i=0;i<n1;i++)
scanf("%d",b+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

printf("before\n");
for(i=0;i<n1;i++)
printf("%d ",*(b+i));
printf("\n");

for(i=0,k=0;i<n && i<n1;i++)
{

c[k++]=a[i];
c[k++]=b[i];
}

while(i<n)
{
c[k++]=a[i];
i++;

}
while(i<n1)
{
c[k++]=b[i];
i++;

}

printf("after\n");
for(i=0;i<(n+n1);i++)
printf("%d ",*(c+i));
printf("\n");

}
