//WAP to revrse the bits.

#include<stdio.h> 
void main()
{

int num,pos,i,m,n;
printf(" enter any number\n");
scanf("%d",&num);

printf("before num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);

for(i=0,pos=31;i<pos;i++,pos--)
{
m=num>>i&1;
n=num>>pos&1;
if(m!=n)
{
num=num^1<<i;
num=num^1<<pos;
}
}

printf("\nafter num=%d\n",num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
printf("\n");


}
