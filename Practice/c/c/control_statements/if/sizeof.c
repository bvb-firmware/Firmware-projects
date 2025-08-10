#include<stdio.h>
void main()
{
int i=334;
short int s=399;
long int l=213;
long long int ll=122;
float f=33.5;
double d=234.55;
char ch='a';
// here we take %ld or %lu for sizeof() operator. compiler allows only %ld or %lu to check sizeof given.
printf("%ld %ld %ld\n",sizeof(int),sizeof(i),sizeof(334));
printf("%ld %ld %ld\n",sizeof(short int),sizeof(s),sizeof(399));
printf("%ld %ld %ld\n",sizeof(long int),sizeof(l),sizeof(213));
printf("%ld %ld %ld\n",sizeof(long long int),sizeof(ll),sizeof(122));
printf("%ld %ld %ld\n",sizeof(float),sizeof(f),sizeof(33.5));
printf("%ld %ld %ld\n",sizeof(float),sizeof(f),sizeof(33.5f));// .f is treated as float =4bytes
printf("%ld %ld %ld\n",sizeof(double),sizeof(d),sizeof(234.55));
printf("%ld %ld %ld\n",sizeof(char),sizeof(ch),sizeof('a')); // here 'a' =97 it is treated as intger.


}
