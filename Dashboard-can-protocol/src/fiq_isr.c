#include<lpc21xx.h>
#include"header.h"
extern unsigned char s[10];
char temp;
int i=0,j=0,len,flag=0;

void fiq_isr(void)__irq
{
int r;
r=U0IIR&0Xe;
if(r==4)
{
 s[i]=U0RBR;
 if(s[i]=='\r')
 {
 s[i]='\0';
 uart0_tx_string("string:");
uart0_tx_string(s);
uart0_tx_string("\r\n");
 flag=1;
  
for(j=0;s[j];j++);
for(j=j-1,len=0;len<j;j--,len++)
{
temp=s[len];
s[len]=s[j];
s[j]=temp;
} 
}
if(i==9)
{
s[++i]='\0';
uart0_tx_string("string:");
uart0_tx_string(s);
uart0_tx_string("\r\n");
flag=1;
for(j=0;s[j];j++);
for(j=j-1,len=0;len<j;j--,len++)
{
temp=s[len];
s[len]=s[j];
s[j]=temp;
}
}
if(s[i]!='\0')
i++;
else
i=0;
}
}

void config_fiq(void)
{
 VICIntSelect=(1<<6);
 VICIntEnable=(1<<6);
}

void config_UART(void)
{
  U0IER=1;
}
