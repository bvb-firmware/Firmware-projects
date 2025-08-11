#include<lpc21xx.h>
#include"header.h"

void spi0_init(void)
{
PINSEL0|=0x00001500;
IODIR0|=(1<<7);
IOSET0=(1<<7);	 //CS=0;
S0SPCR=0x20;//MASTER MODE SELECTED
S0SPCCR=150;//SPEED=100KBPPS
}

unsigned char spi0_transfer(unsigned char data)
{
S0SPDR=data;
while(((S0SPSR>>7)&1)==0);
return S0SPDR;
}

unsigned short int mcp3204(unsigned char ch_num)
{
unsigned short int result=0,r=0,r1=0;
ch_num=ch_num<<6;
IOCLR0=1<<7;
spi0_transfer(0x6);
r=spi0_transfer(ch_num);
r1=spi0_transfer(0x0);
IOSET0=1<<7;
result=result|r1;
r=r&0xf;
result=result|(r<<8);
return result;
}

void adc1_init(void)
{
PINSEL1|=0x15400000;
ADCR|=0x00200400;
}

unsigned short int adc1_read(unsigned char ch_num)
{
unsigned short int result=0;
ADCR|=1<<ch_num;
ADCR|=1<<24;
while(((ADDR>>31)&1)==0);
ADCR^=1<<24;
ADCR^=1<<ch_num;
result=(ADDR>>6)&(0x3ff);
return result;
}

unsigned char mcp25aa1024_read(unsigned int memory)
{

}

void mcp25aq1024_write(unsigned int memory1,unsigned char data)
{

}