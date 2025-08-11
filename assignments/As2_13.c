//WAP to implement claculator using switch

#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("enter any two numbers\n");
scanf("%d%d",&n1,&n2);

char op;

printf("select an option\nadd +\nsub -\nmul *\ndiv /\nmod %%\n");
scanf(" %c",&op);

switch(op)
{
	case '+': n3=n1+n2;
		  printf("%d\n",n3);
		  break;

	case '-': n3=n1-n2;
		  printf("%d\n",n3);
		  break;

	case '*': n3=n1*n2;
		  printf("%d\n",n3);
		  break;

	case '/': n3=n1/n2;
		  printf("%d\n",n3);
		  break;

	case '%': n3=n1%n2;
		  printf("%d\n",n3);
		  break;


	default : printf("unknown option\n");


}

}
