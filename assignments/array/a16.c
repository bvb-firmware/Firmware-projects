/*WAP in C to swap(using bitwise) 0th ele with
last ele in array using 2 pointer without any loop.
i/p: int a[6]={111,222,333,444,555,666}, *p,*q ;
o/p: 666 222 333 444 555 111 */

#include<stdio.h>
void main()
{
int n;
printf("enter no.of elements\n");
scanf("%d",&n);

int a[n],i,*p,*q;
printf("enter aray elemants\n");
for(i=0;i<n;i++)
scanf("%d",a+i);

printf("before\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

p=a+0;
q=a+(n-1);

*p=*p^*q;
*q=*p^*q;
*p=*p^*q;



printf("after\n");
for(i=0;i<n;i++)
printf("%d ",*(a+i));
printf("\n");

}
