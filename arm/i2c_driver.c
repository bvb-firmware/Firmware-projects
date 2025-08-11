#include<lpc21xx.h>
#include"header1.h"

void i2c_init(void)
{
PINSEL0|=0x50;
I2SCLL=75;
I2SCLH=75;
I2CONSET=(1<<6);
}

#define SI ((I2CONSET>>3)&1)
void i2c_write(unsigned char sa,unsigned char ma,unsigned char data)
{
/*start condition*/
 I2CONSET=(1<<5);		 //STA=1
 I2CONCLR=(1<<3);  //SI=0
 while(SI==0);
 I2CONCLR=(1<<5);

 /*send SA+W AND CHECK ACK*/
 I2DAT=sa;
 I2CONCLR=(1<<3);
 while(SI==0);
 if(I2STAT==0X20)
 {
 	uart0_tx_string("ERR:SA+W\r\n");
	goto exit;
 }


/*SEND MA AND CHECK ACK*/
I2DAT=ma;
I2CONCLR=(1<<3);
while(SI==0);
if(I2STAT==0X30)
{
	uart0_tx_string("ERR:MA\r\n");
	goto exit;
			  
}

/*SEND DATA AND CHECK ACK*/
I2DAT=data;
I2CONCLR=(1<<3);
while(SI==0);
if(I2STAT==0X30)
{
 uart0_tx_string("ERR:data\r\n");
  goto exit;
}
/*STOP CONDTITION*/
exit:
I2CONCLR=(1<<3);
I2CONSET=(1<<4);//STO=1;
}

unsigned char i2c_read(unsigned char sa,unsigned char ma)
{
unsigned char temp;
 /*start condition*/
 I2CONSET=(1<<5);		 //STA=1
 I2CONCLR=(1<<3);  //SI=0
 while(SI==0);
 I2CONCLR=(1<<5);

 /*send SA+W AND CHECK ACK*/
 I2DAT=sa;
 I2CONCLR=(1<<3);
 while(SI==0);
 if(I2STAT==0X20)
 {
 	uart0_tx_string("ERR:SA+W\r\n");
	goto exit;
 }


/*SEND MA AND CHECK ACK*/
I2DAT=ma;
I2CONCLR=(1<<3);
while(SI==0);
if(I2STAT==0X30)
{
	uart0_tx_string("ERR:MA\r\n");
	goto exit;
			  
}

/*resatart conditon*/
I2CONSET=(1<<5);
I2CONCLR=(1<<3);
while(SI==0);
I2CONCLR=(1<<5);

 
 /*send SA+R AND CHECK ACK*/
 I2DAT=sa|1;
 I2CONCLR=(1<<3);
 while(SI==0);
 if(I2STAT==0X48)
 {
 	uart0_tx_string("ERR:SA+R\r\n");
	goto exit;
 }

/*RECEIVE DATA AND CHECK ACK*/
I2CONCLR=(1<<3);
while(SI==0);
temp=I2DAT;

/*STOP CONDTITION*/
exit:
I2CONCLR=(1<<3);
I2CONSET=(1<<4);//STO=1;
return temp;
}

void uart0_init(unsigned int baud)
{
unsigned int pclk,r=0,a[]={15,60,30,15,15};
pclk=a[VPBDIV]*1000000;
PINSEL0|=0X5;
r=(pclk)/(16*baud);
U0LCR=0X83; //DLAB==1;
U0DLL=r&(0XFf);
U0DLM=r&(0XfF00);
U0LCR=0X03;
}

void uart0_tx_string(unsigned char *ptr)
{
while(*ptr)
{
while(((U0LSR>>5)&1)==0);
U0THR=*ptr;
ptr++;
}
}

void uart0_tx_data(unsigned char data)
{
U0THR=data;
while(((U0LSR>>5)&1)==0);
}

unsigned char uart0_rx_data(void)
{
while(((U0LSR>>0)&1)==0);
return U0RBR;
}

 extern unsigned int c;
unsigned int i2c_detect(unsigned int sa)
{
  unsigned int temp=0; 
	I2CONSET=(1<<5);
	I2CONCLR=(1<<3);
	while(SI==0);
	I2CONCLR=(1<<5);

	/*SEND SA AND RECEIVE ACK*/
	I2DAT=sa;
	I2CONCLR=(1<<3);
	while(SI==0);
	if(I2STAT==0X20)
	{
	temp=1;
	//uart0_tx_string("ERR:SA+W\r\n");
	goto exit;
	}
	exit:
	I2CONCLR=(1<<3);
	I2CONSET=(1<<4);

	if(temp==0)
	{
		c++;
	return sa;
	}
	else
	return 0;
}


void uart0_tx_hexa(unsigned int num)
{
	int i=0,arr[13];
 if(num==0)
 {
 uart0_tx_string("0X0");
 return;
 }

 uart0_tx_string("0X");

 while(num)
 {
   arr[i]=num%16;
   num/=16;
   i++;
 
 }

  for(i-=1;i>=0;i--)
  {
  uart0_tx_data((arr[i])+48);
  }
}
