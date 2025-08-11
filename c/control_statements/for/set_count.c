//WAp to count set and clear bits of given number

#include<stdio.h>
void main()
{
int num,temp,pos,r,setcount=0;
printf("enter any number\n");
scanf("%d",&num);

printf("binary of %d is: \n",num);
for(temp=num,pos=31; pos>=0; pos-- )
{
r=temp>>pos&1;
printf("%d",r);
if(pos%8==0)
printf(" ");
if(r==1)
setcount++;

}
printf("\n");
printf("count of set bits of %d is: %d\n",num,setcount);
printf("count of clear bits of %d is: %d\n",num,31-setcount);

}
