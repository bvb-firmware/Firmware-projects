/* 4-bit lcd driver */

#include<lpc21xx.h>
#include"header3.h"
extern unsigned int flag5,k;
extern float f1;
void lcd4_data(unsigned char data)
{
	unsigned int TEMP;
   // HIGHER NIBBLE
	IOCLR1=0xFE<<16;
	TEMP=(data&0xF0)<<16;
	IOSET1=TEMP;
	IOSET1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
// LOWER NIBBLE
	IOCLR1=0xFE<<16;
	TEMP=(data&0x0F)<<20;
	IOSET1=TEMP;
	IOSET1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
}

void lcd4_cmd(unsigned char cmd)
{
	   unsigned int TEMP;
// HIGHER NIBBLE
	IOCLR1=0xFE<<16;
	TEMP=(cmd&0xF0)<<16;
	IOSET1=TEMP;
	IOCLR1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
// LOWER NIBBLE
	IOCLR1=0xFE<<16;
	TEMP=(cmd&0x0F)<<20;
	IOSET1=TEMP;
	IOCLR1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;

}

void lcd4_init(void)
{
	IODIR1=0xFE<<16;
	PINSEL2|=0x0;
	IOCLR1=1<<19;
	lcd4_cmd(0x02);
	lcd4_cmd(0x28);
	lcd4_cmd(0xe);
	lcd4_cmd(0x1);


}
void lcd4_string(unsigned char *p)
{
while(*p)
{
lcd4_data(*p);
 p++;
}
	
}

void lcd4_int(int num)
{
  int i,a[13];
  if(num==0)
  {
  lcd4_data('0');
  return;
  }
  if(num<0)
  {
   num=-num;
   lcd4_data('-');
  }
  i=0;
  while(num>0)
  {
   a[i]=num%10+48;
   num/=10;
   i++;
  }
  for(i-=1;i>=0;i--)
   lcd4_data(a[i]);
}	

void lcd4_octal(int num)
{
  int r,l,sum;
  if(num==0)
  lcd4_int(00);
  if(num<0)
  {
   num=-num;
   lcd4_data('-');
  }
  if(num!=0)
  lcd4_int(0);
  for(sum=0,l=1;num;num/=8,l*=10)
  {
   r=num%8;
   sum=sum+r*l;
  }
  if(num>=0)
   lcd4_int(sum);
}

void lcd4_hexa(int num)
{
  int r,l,sum;
  if(num==0)
  lcd4_string("0X0");
  if(num<0)
  {
   num=-num;
   lcd4_data('-');
  }
  if(num!=0)
  lcd4_string("0X");
  for(sum=0,l=1;num;num/=16,l*=10)
  {
   r=num%16;
   sum=sum+r*l;
  }
  if(num>=0)
   lcd4_int(sum);
}

void lcd4_binary(int num)
{
 int pos,i;
 for(pos=15;pos>=0;pos--)
{
	i=num>>pos&1;
	 lcd4_int(i);
}
}
void lcd4_float(float num)
{
  	int i;
 //int a[12],j;
 if(num==0)
 {
  lcd4_string("0.000000");
  return;
  }
  if(num<0)
  {
   num=-num;
   lcd4_data('-');
  
  }

  i=num;
  lcd4_int(i);
  lcd4_data('.');
  num=(num-i)*1000000;
  lcd4_int(num);
  }

 

void lcd4_cgram(unsigned char *p)
{
	int i;
 lcd4_cmd((0X40)+k);
 if(flag5==0)
 {
 for(i=0;i<8;i++)
 {
 lcd4_data(p[i]);
 }
 }
 else
 {
  for(i=0;i<8;i++)
 {
 if(i==2 && f1>=3.1)
 lcd4_data(0x1f);
 else if(i==3 && f1>=2.4)
 lcd4_data(0x1f);
 else if(i==4 && f1>=1.8)
 lcd4_data(0x1f);
 else if(i==5 && f1>=0.7)
 lcd4_data(0x1f);
 else
 lcd4_data(p[i]);
 }
 }	 
} 






