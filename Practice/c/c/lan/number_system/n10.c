//WAP to implement a claculator using switch.

#include<stdio.h>
void main()
{
int n1,n2,n3;
char op;
printf("enter anyn two numbers\n");
scanf("%d%d",&n1,&n2);

printf("select an option\n1)+\n2)-\n3)*\n4)/\n5)%%\n");
scanf(" %c",&op);

switch(op)
{
case '+' : n3=n1+n2;
printf("%d\n",n3);
break;

case '-' : n3=n1-n2;
printf("%d\n",n3);
break;

case '*' : n3=n1*n2;
printf("%d\n",n3);
break;

case '/' : if(n2!=0)
{
n3=n1/n2;
printf("%d\n",n3);
}
else
printf("not executed\n");
break;

case '%' : n3=n1%n2;
printf("%d\n",n3);
break;

default : printf("invalid option\n");
}


}
