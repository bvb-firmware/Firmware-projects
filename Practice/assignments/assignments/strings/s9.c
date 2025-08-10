/*   WAP in C to check string lenght is strong or not.
i/p: char s[10]= ”vector”;
o/p: 6 is not strong number  */


#include<stdio.h>
void main()
{
char s[20],*p=s;
printf("enter any string\n");
scanf("%[^\n]",p);
printf("%s\n",p);

int i,sum,r,r1,len,temp;
for(len=0;p[len];len++);

for(temp=len,sum=0;temp;temp/=10)
{
r=temp%10;
for(r1=1;r;r--)
r1=r1*r;
sum=sum+r1;

}
if(len==sum)
printf("yes %d is strong\n",len);
else
printf("no %d is not strong\n",len);

}

