#include<lpc21xx.h>
#include"header3.h"
#define head ((IOPIN0>>14)&1)
#define lind ((IOPIN0>>15)&1)
#define rind ((IOPIN0>>16)&1)
can2 v1;
unsigned int count2,c;

unsigned int flag5,k,flag7=0;

float f1;
main()
{
unsigned char flag=0,flag1=0,flag2=0,flag3=0;
unsigned short int f2=0;
unsigned int f3=0;

can2_init();
//lcd4_init();
adc_init();

//uart0_init(9600);

 /* config_sw1();
 config_sw2();
 config_sw3();
 config_vic_for_sw1();
 config_vic_for_sw2();
 config_vic_for_sw3(); */	   

config_vic_for_timer();
config_timer();
delays(5000); 
v1.rtr=0;
v1.dlc=8;
v1.data1=0;
v1.data2=0;
v1.id=0;

while(1)
{
	//c++;
	/*f3=adc_read(1);
 f2=adc_read(2);
 lcd4_cmd(0x80);
 lcd4_int(f3);
 uart0_tx_integer(f3);
 uart0_tx_data(' ');
 uart0_tx_integer(f2);
 lcd4_data(' ');
 lcd4_int(f3);
 uart0_tx_string("\r\n");
 delay_ms(500);	*/
if(flag7==1)
{
 flag7=0;
 flag3^=1;
 if(flag3==0)
 f2=adc_read(1);
 else if(flag3==1)
 f3=adc_read(2);
 f3=f3<<16;
 v1.data2=f2;
 v1.data2|=f3;
 v1.id=0x509;
 v1.data1=0x9;
 //lcd4_cmd(0x80);
 //lcd4_int(f2);
 //uart0_tx_integer(f3);
 //lcd4_data(' ');
 //lcd4_int(f3);
 //uart0_tx_integer(f2);
 can2_tx(v1);
} 

//else
//{

else if(head==0)
{
while(head==0);
delay_ms(20);
flag^=1;
if(flag==1)
{
 f2=adc_read(1);
 f3=f3<<16;
 v1.data2=f2;
 v1.data2|=f3;	  

v1.id=0x501;
v1.data1=0x1;
can2_tx(v1);
}
else if(flag==0)
{
 f2=adc_read(1);
 f3=f3<<16;
 v1.data2=f2;
 v1.data2|=f3;  

v1.id=0x501;
v1.data1=0x2;
can2_tx(v1);
}
}

if(lind==0)
{
while(lind==0);
delay_ms(20);
flag1^=1;
if(flag1==1)
{
 f2=adc_read(1);
 f3=f3<<16;
 v1.data2=f2;
 v1.data2|=f3; 	

v1.id=0x502;
v1.data1=0x3;
can2_tx(v1);
}
else if(flag1==0)
{
 f2=adc_read(1);
 f3=f3<<16;
 v1.data2=f2;
 v1.data2|=f3;	   

v1.id=0x502;
v1.data1=0x4;
can2_tx(v1);
}
}

if(rind==0)
{
while(rind==0);
delay_ms(20);
flag2^=1;
if(flag2==1)
{
 f2=adc_read(1);
 f3=f3<<16;
 v1.data2=f2;
 v1.data2|=f3; 	 
 
v1.id=0x503;
v1.data1=0x5;
can2_tx(v1);
}
else if(flag2==0)
{
 f2=adc_read(1);
 f3=f3<<16;
 v1.data2=f2;
 v1.data2|=f3;	 	

v1.id=0x503;
v1.data1=0x6;
can2_tx(v1);
}
}
}
}


