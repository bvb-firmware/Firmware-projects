

#include<stdio.h>
void in_fun(int *,int,int,int,int,int,int);
void main()
{
int n;
printf("enter no.of array elements\n");
scanf("%d",&n);

int a[n],ind,p,i,p1,ind1,n1;
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

printf("enter elments to insert and indexes\n");
scanf("%d%d%d%d",&p,&p1,&ind,&ind1);

n1=2;

in_fun(a,n,ind,ind1,p,p1,n1);

printf("after\n");
for(i=0;i<n+n1;i++)
printf("%d ",*(a+i));
printf("\n");


}
void in_fun(int *a,int n,int ind,int ind1,int p,int p1,int n1)
{
int i,j;
for(j=0;j<n1;j++)
{
for(i=n;i>ind;i--)
a[i]=a[i-1];
n++;
a[i]=p;
p=p1;
ind=ind1;
}

}







