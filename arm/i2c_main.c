#include<lpc21xx.h>
#include"header1.h"
main()
{
unsigned char s,m,h;
uart0_init(9600);
i2c_init();
lcd4_init();
uart0_tx_string("fhbksf\r\n");
/*set time to 11:59:56sec */
i2c_write(0xD0,0x0,0x56);
i2c_write(0xD0,0x1,0x59);
i2c_write(0xD0,0x2,0x23);

while(1)
{
lcd4_cmd(0x01);
uart0_tx_string("current time: ");
h=i2c_read(0xD0,0x2);
uart0_tx_data((h/16)+48);
uart0_tx_data((h%16)+48);
lcd4_data((h/16)+48);
lcd4_data((h%16)+48);
uart0_tx_data(':');
lcd4_data(':');
m=i2c_read(0xD0,0x1);
uart0_tx_data((m/16)+48);
uart0_tx_data((m%16)+48);
lcd4_data((m/16)+48);
lcd4_data((m%16)+48);
uart0_tx_data(':');
lcd4_data(':');
s=i2c_read(0xD0,0x0);
uart0_tx_data((s/16)+48);
uart0_tx_data((s%16)+48);
lcd4_data((s/16)+48);
lcd4_data((s%16)+48);
uart0_tx_string("\r\n");
delay_ms(1000);
}
}

