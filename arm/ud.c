#include<lpc21xx.h>
#include"header7.h"

void uart0_init(unsigned int baud)
{
	
	int res=0,pclk=0,a[]={15,60,30,15,15};
	PINSEL0=0x5;
	pclk=a[VPBDIV]*1000000;
	res=pclk/(16*baud);
	U0LCR=0x83;
	U0DLL=res&0xff;
	U0DLM=(res>>8)&0xff;
	U0LCR=0x3;
}

void uart0_data(unsigned char p)
{
U0THR=p;
while(((U0LSR>>5)&1)==0);
}

void uart0_tx_string(unsigned char *p)
{
while(*p)
{
uart0_data(*p);
p++;
}
}

void uart0_rx_string(unsigned char *p,unsigned int l)
{
int i=0;
for(i=0;i<l-1;i++)
{
while((U0LSR&1)==0);
 p[i]=U0RBR;
 if(p[i]=='\r')
 break;
}
p[i]='\0';
}

void uart0_binary(unsigned char *num)
{
int i,j=0,l,k=0;
for(l=0;num[l];l++)
{
j=j*10+(num[l]-48);

}
for(i=31;i>=0;i--)
{
k=j>>i&1;
uart0_data(k+48);
}
}

 extern unsigned char arr[13];
 unsigned int flag;
void uart0_handler(void)__irq
{
int r=UOIIR&0xe;
static int i=0;
if(r==4)
{
 arr[i]=U0RBR;
 if(arr[i]=='\r')
 {
 flag=1;
 i=-1;
 arr[i]='\0';
 }
 i++;
 if(i==12)
 {
 flag=1;
 i=-1;
 arr[i]='\0';
 }
}
}
