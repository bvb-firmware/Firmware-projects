#include<lpc21xx.h>
#include"header1.h"
unsigned int c;
main()
{
unsigned int c1,i;
unsigned char s; 
uart0_init(9600);
i2c_init();
lcd4_init();

for(i=2;i<=255;i+=2)
{
c1=i2c_detect(i);
if(c1!=0)
{
uart0_tx_string("slave address: ");
uart0_tx_hexa(c1);
uart0_tx_string("\r\n");
}
} 
uart0_tx_string("total slaves: ");
uart0_tx_data((c%10)+48);
uart0_tx_string("\r\n");
/*for(i=0;i<27;i++)
{
i2c_write(0xA0,0x00,('A'+i));
delay_ms(500);
s=i2c_read(0xA0,0x00);
uart0_tx_data(s);
uart0_tx_string("\r\n");
lcd4_cmd(0x1);
lcd4_data(s);
} */



}
