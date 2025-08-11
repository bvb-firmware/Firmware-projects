/*  WAP in C using Recursive fun to reverse bits .
i/p : n= 31
00000000 00000000 00000000 00011111
o/p: // print binary in main function
11111000 00000000 00000000 00000000
int rec_fun_rev_bit ( int );
void rec_fun_binary ( int );  */

#include<stdio.h>
int rec_fun_rev_bit(int);
void rec_fun_binary(int );

void main()
{
	int n,pos,n1;
	printf("ENTER ANY NUMBER\n");
	scanf("%d",&n);

	printf("before\n");
	for(pos=31;pos>=0;pos--)
		printf("%d",n>>pos&1);
	printf("\n");

	n1=rec_fun_rev_bit(n);
	printf("after\n");
	rec_fun_binary(n1);

	printf("\n");

}

int rec_fun_rev_bit(int n)
{
	static int i=0,pos=31,t,t1;

	if(i<pos)
	{
		t=(n>>pos&1);
		t1=(n>>i&1);
		if(t!=t1)
		{
		n=n^1<<pos;
		n=n^1<<i;
		}	
		i++;
		pos--;
		rec_fun_rev_bit(n);
	}
	else
		return n;

}
void rec_fun_binary(int n1)
{
static int pos=31;
if(pos>=0)
{
printf("%d",n1>>pos&1);
pos--;
rec_fun_binary(n1);
}

}


