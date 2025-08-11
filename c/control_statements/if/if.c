#include<stdio.h>
void main()
{
// basic working of if

	int i=10,j;
	printf("i=%d\n",i);

	if(i<5)
		printf("i is less than 5\n");
	printf("i is greater than 5\n");

	if(i==10)
		printf("i is equal to 10\n");
	printf("i is not equal to 10\n");

	if(printf("abc"))
		printf("%d  ",i++);
	printf("%d\n",++i);

	j=10;
	if(printf("abc\n"))
		printf("%d\n",j++);
	printf("%d\n",++j);
}
