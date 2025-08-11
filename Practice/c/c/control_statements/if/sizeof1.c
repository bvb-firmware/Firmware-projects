// Behaviour of sizeof() operator in printf() function
#include<stdio.h>
void main()
{
int i=2,j=3;
double d=33.5;
float f=1.22;
char ch=0,ch2='a';

printf("ch=%d\n",ch);
printf("%ld\n",sizeof(ch));
printf("%ld\n",sizeof(ch=i+j));
printf("ch=%d\n",ch);

printf("%ld\n",sizeof(i+j));

printf("d=%lf\n",d);
printf("%ld\n",sizeof(d=i-j));
printf("d=%lf\n",d);

printf("%ld\n",sizeof(ch+ch2));

//type promotion
printf("%ld\n",sizeof(ch+ch2-i));
printf("%ld\n",sizeof(f+d));
printf("%ld\n",sizeof(i+j+d));

printf("%ld\n",sizeof(0+'a'));// all will be in integer format only = 4bytes 
printf("%ld\n",sizeof(22.2f+'a'));
printf("%ld\n",sizeof(33.5+22.2f));// 8 bytes becuse double type promotion
printf("%ld\n",sizeof(0+'a'-33.5+3*22.2f));

}
