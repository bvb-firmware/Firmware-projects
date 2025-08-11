/* LCD 8-bit DRIVER */

#include<lpc21xx.h>
#include"header.h"

void lcd8_data(unsigned char data)
{
	IOCLR0=0x7FF;
	IOSET0=data;
	IOSET0=1<<8;
	IOCLR0=1<<9;
	IOSET0=1<<10;
	delay_ms(2);
	IOCLR0=1<<10;
}

void lcd8_cmd(unsigned char cmd)
{
	IOCLR0=0x7FF;
	IOSET0=cmd;
	IOCLR0=1<<8;
	IOCLR0=1<<9;
	IOSET0=1<<10;
	delay_ms(2);
	IOCLR0=1<<10;
}

void lcd8_init()
{
	IODIR0=0x7FF;
	IOCLR0=1<<10;
	lcd8_cmd(0X38);
	lcd8_cmd(0X0e);
	lcd8_cmd(0X01);
}
void lcd8_string(char *p)
{
while(*p)
{
lcd8_data(*p);
p++;
}

}
void lcd8_int(int num)
{
  int i,a[13];
  if(num==0)
  lcd8_data('0');
  else if(num<0)
  {
   num=-num;
   lcd8_data('-');
  }
  else
  {
  i=0;
  while(num)
  {
   a[i]=num%10+48;
   num/=10;
   i++;
  }
  for(i-=1;i>=0;i--)
   lcd8_data(a[i]);
  
  }

}

void lcd8_octal(int num)
{
  int r,l,sum;
  if(num==0)
  lcd8_int(00);
  if(num<0)
  {
   num=-num;
   lcd8_data('-');
  }
  if(num!=0)
  lcd8_int(0);
  for(sum=0,l=1;num;num/=8,l*=10)
  {
   r=num%8;
   sum=sum+r*l;
  }
  if(num>=0)
   lcd8_int(sum);
}

void lcd8_hexa(int num)
{
  int r,l,sum;
  if(num==0)
  lcd8_string("0X0");
  if(num<0)
  {
   num=-num;
   lcd8_data('-');
  }
  if(num!=0)
  lcd8_string("0X");
  for(sum=0,l=1;num;num/=16,l*=10)
  {
   r=num%16;
   sum=sum+r*l;
  }
  if(num>=0)
   lcd8_int(sum);
}

void lcd8_binary(int num)
{
 int pos,i;
for(pos=15;pos>=0;pos--)
{
	i=num>>pos&1;
	 lcd8_int(i);
}
}

