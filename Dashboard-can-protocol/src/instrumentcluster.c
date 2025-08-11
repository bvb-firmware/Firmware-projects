#include<lpc21xx.h>
#include"header3.h"
#define head (1<<17)
#define lind (1<<18)
#define rind (1<<19)

can2 v2;
unsigned int flag,t1,t2,flag5=0,k;
float f1;
main()
{
unsigned char h[8]={0x1f,0x00,0x00,0x1f,0x00,0x00,0x1f,0x00};
unsigned char l[8]={0x00,0x04,0x08,0x1f,0x08,0x04,0x00,0x00};
unsigned char r[8]={0x00,0x04,0x02,0x1f,0x02,0x04,0x00,0x00};
unsigned char b[8]={0x0e,0x1f,0x11,0x11,0x11,0x11,0x1f,0x00};	  
unsigned int c=0,c1=0,c2=0;
float f=0;
IODIR0=(7<<17);
IOSET0=(7<<17);
can2_init();
lcd4_init();
config_can2rx();
config_vic_for_can2rx();
while(1)
{
c++;

while(flag)
{
//flag=0;
if(v2.data1==0x9)
{
c1=(v2.data2)&(0xffff);
c2=(v2.data2>>16)&(0xffff);
f=(c1*3.3)/1023;
f=(f-0.5)/0.01;
f1=(c2*3.3)/1023;
lcd4_cmd(0xc0);
lcd4_string("tp:");
lcd4_float(f);
lcd4_string("c");
k=24;
flag5=1;
lcd4_cgram(b);
lcd4_cmd(0xcf);
lcd4_data(3);
} 

else if(v2.data1==0x1)
{
IOCLR0=head;
k=0;
flag5=0;
lcd4_cmd(0x88);
lcd4_data('D');
lcd4_cgram(h);
lcd4_cmd(0x87);
lcd4_data(0);
}

else if(v2.data1==0X2)
{
IOSET0=head;
lcd4_cmd(0x87);
lcd4_data(' ');
lcd4_cmd(0x88);
lcd4_data(' ');
}

else if(v2.data1==0x3)
{
IOSET0=rind;
while(1)
{
k=8;
flag5=0;
lcd4_cgram(l);
lcd4_cmd(0x80);
lcd4_data(1);
IOCLR0=lind;
delay_ms(500);
IOSET0=lind;
lcd4_cmd(0x80);
lcd4_data(' ');
delay_ms(500);
if(v2.data1==0x1)
{
IOCLR0=head;
k=0;
flag5=0;
lcd4_cmd(0x88);
lcd4_data('D');
lcd4_cgram(h);
lcd4_cmd(0x87);
lcd4_data(0);
}

else if(v2.data1==0X2)
{
IOSET0=head;
lcd4_cmd(0x88);
lcd4_data(' ');
lcd4_cmd(0x87);
lcd4_data(' ');
}
if(v2.data1==0x4||v2.data1==0x5)
break;
}
}
else if(v2.data1==0x4)
{
lcd4_cmd(0x80);
lcd4_data(' ');
IOSET0=lind;
}

else if(v2.data1==0x5)
{
IOSET0=lind;
while(1)
{
k=16;
flag5=0;
lcd4_cgram(r);
lcd4_cmd(0x8f);
lcd4_data(2);
IOCLR0=rind;
delay_ms(500);
IOSET0=rind;
lcd4_cmd(0x8f);
lcd4_data(' ');
delay_ms(500);
if(v2.data1==0x1)
{
IOCLR0=head;
k=0;
flag5=0;
lcd4_cmd(0x88);
lcd4_data('D');
lcd4_cgram(h);
lcd4_cmd(0x87);
lcd4_data(0);
}

else if(v2.data1==0X2)
{
IOSET0=head;
lcd4_cmd(0x88);
lcd4_data(' ');
lcd4_cmd(0x87);
lcd4_data(' ');
}
if(v2.data1==0x6||v2.data1==0x3)
break;
}
}

else if(v2.data1==0x6)
{
lcd4_cmd(0x8f);
lcd4_data(' ');
IOSET0=rind;
} 
} 

}
}


