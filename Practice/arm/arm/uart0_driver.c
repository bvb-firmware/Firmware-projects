#include<lpc21xx.h>
void uart0_init(unsigned int baud)
{	
	unsigned int pclk,result=0;
	int a[]={15,60,30,15,15};
	pclk=a[VPBDIV]*1000000;
	result=pclk/(16*baud);
	PINSEL0 |=0x05;
	U0LCR=0X83;
	U0DLL=result&0xFF;
	U0DLM=(result>>8)&0XFF;
	U0LCR=0X03;

}

#define THRE ((U0LSR>>5)&1)
void uart0_tx_data(unsigned char data)
{
U0THR=data;
while(THRE==0);
}

void uart0_tx_string(unsigned char *p)
{
 while(*p)
 {
  U0THR=*p;
  while(THRE==0);
  p++;
 
}
}

#define RDR (U0LSR&1)
unsigned char uart0_rx_data(void)
{
 while(RDR==0);
 return U0RBR;
}

/*#define sw1 (((IOPIN0>>14)&1)==0)
extern int flag;
unsigned char uart0_rx_data_home(void)
{			    
  while(RDR==0 && sw1==1);
 if(sw1==0)
 {
 while(sw1==0);
 flag=1;
 return flag;
  }
  else
  return U0RBR;
} */


void uart0_tx_integer(int num)
{
 int a[12],i;
 if(num==0)
  uart0_tx_data('0');
  if(num<0)
  {
   num=-num;
   uart0_tx_data('-');
  
  }
  i=0;
  while(num>0)
  {
  	 a[i]=(num%10)+48;
	 num/=10;
	 i++;
 }
 for(i-=1;i>=0;i--)
 uart0_tx_data(a[i]);
}

void uart0_tx_octal(int num)
{
 int a[12],i;
 if(num==0)
  uart0_tx_string("00");
  if(num<0)
  {
   num=-num;
   uart0_tx_data('-');
  
  }
  if(num!=0)
  uart0_tx_data('0');
  i=0;
  while(num>0)
  {
  	 a[i]=(num%8)+48;
	 num/=8;
	 i++;
 }
 for(i-=1;i>=0;i--)
 uart0_tx_data(a[i]);
}

void uart0_tx_hexa(int num)
{
 int a[12],i;
 if(num==0)
  uart0_tx_string("0X0");
  if(num<0)
  {
   num=-num;
   uart0_tx_data('-');
  
  }
  if(num!=0)
  uart0_tx_string("0X");
  i=0;
  while(num>0)
  {
  	 a[i]=(num%16)+48;
	 num/=16;
	 i++;
 }
 for(i-=1;i>=0;i--)
 uart0_tx_data(a[i]);
}

void uart0_tx_float(float num)
{
	int i;
 //int a[12],j;
 if(num==0)
  uart0_tx_string("0.000000");
  if(num<0)
  {
   num=-num;
   uart0_tx_data('-');
  
  }

  i=num;
  if(num>0)
  {
  uart0_tx_integer(i);
  uart0_tx_data('.');
  
  i=(num-i)*1000000;
  if(i==0)
  uart0_tx_string("000000");
  else
  uart0_tx_integer(i);
	}
 /* j=0;

  while(i>0)
  {
  	 a[j]=(i%10)+48;
	 i/=10;
	 j++;
 }
 for(j-=1;j>=0;j--)
 uart0_tx_data(a[j]);
 uart0_tx_data('.');
 i=(num-i)*1000000;
 j+=1;
 while(i>0)
  {
  	 a[j]=(i%10)+48;
	 i/=10;
	 j++;
 }
 for(j-=1;j>=0;j--)
 uart0_tx_data(a[j]); */


}

void uart0_tx_binary(short int num)
{
 int pos=15,i;
 for(pos=15;pos>=0;pos--)
 {
 i=num>>pos&1;
 uart0_tx_integer(i);
}
}

void uart0_rx_string(unsigned char *p,unsigned int len)
{
 int i=0;
 for(i=0;i<len;i++)
 {
 while(RDR==0);
 p[i]=U0RBR;
 if(p[i]=='\r')
 break;
 }
p[i]='\0';
// return U0RBR;
} 

/*unsigned char * uart0_rx_string(void)
{
   unsigned char s[13];
   int i;
   for(i=0;i<12;i++)
   {
   	while((U0LSR>>0&1)==0);
	s[i]=U0RBR;
	if(s[i]=='\r')
	break;
   }
   s[i]='\0';
   return s;

} */



