/*WAP in C using CLA to print given Pattern .
i/p: ./a.out 5       ./a.out 3
9 7 5 3 1        |    
 7 5 3 1         |     5 3 1
  5 3 1          |      3 1      
   3 1           |       1         
    1            |        
                                */


#include<stdio.h> 
#include<stdlib.h>
void main(int argc,char **argv)
{
int i=atoi(argv[1]),j,k,l;
for(j=0;j<i;j++)
{
for(k=0;k<j;k++)
printf(" ");
for(l=i*2-1-(j*2);l>0;l-=2)
printf("%d ",l);
printf("\n");
}


}           
