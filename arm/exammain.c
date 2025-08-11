#include<lpc21xx.h>
#include"header7.h"
unsigned char arr[13];
 unsigned int flag;
main()
{
unsigned char i[10];
uart0_init(9600);
while(1)
{
uart0_tx_string("enter any number: ");
uart0_rx_string(i,10);
uart0_tx_string(i);
uart0_tx_string("\r\n");
uart0_binary(i);
uart0_tx_string("\r\n");
}

}
