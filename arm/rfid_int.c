#include<lpc21xx.h>
#include"header.h"
unsigned char arr[13];
extern int flag;
main()
{
uart0_init(9600);
config_rfid();
config_vic_for_rfid();
while(1)
{
if(flag==1)
{
flag=0;
uart0_tx_string("rfid: ");
uart0_tx_string(arr);
uart0_tx_string("\r\n");
}
}
}
