#include<stdio.h>
void main()
{
// type/byte conversion program
unsigned int i,j,k;                   // unsigned int = 4 bytes ----> 0 to 4297655(4g)
i=2,j=3;
printf("i=%u j=%u\n",i,j);
k=i*j;
printf("k=%u\n\n",k);

// printing o/p more than 4g value
i=200000000,j=3;
printf("i=%u j=%u\n",i,j);
k=i*j;
printf("k=%u\n\n",k);


i=2000000000,j=3;
printf("i=%u j=%u\n",i,j);
k=i*j;
printf("k=%u\n\n",k);      // here k must be 6000000000 but k range is upto 4g

// increasing k range /byte size
unsigned int I,J;
unsigned long int K;
I=2000000000,J=3;
printf("I=%u J=%u\n",I,J);
K=I*J;
printf("K=%lu\n\n",K);      // here k= unsigned long int = 8 bytes (8g) but k value is not changed

// increasig operand 'b' size
unsigned int a,c;
unsigned long int b;
a=2000000000,b=3;
printf("a=%u b=%lu\n",a,b);
c=a*b;
printf("c=%u\n\n",c);      // here b= unsigned long int = 8 bytes (8g) but c value is not changed

// increasig operand 'b' size and c
unsigned int A;
unsigned long int B,C;
A=2000000000,B=3;
printf("a=%u b=%lu\n",A,B);
C=A*B;
printf("C=%lu\n\n",C);          
                                // here b and c= unsigned long int = 8 bytes (8g) so c value is  changed because of temporary buffer


// increasig operand a,b and c  sizes

unsigned long int d,e,f;
d=2000000000,e=3;
printf("d=%lu e=%lu\n",d,e);
f=d*e;
printf("f=%lu\n\n",f);      // here all are  unsigned long int = 8 bytes (8g) so c value is  changed
}
