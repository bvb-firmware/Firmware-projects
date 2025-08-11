
/*rfid reader */
#include<lpc21xx.h>
#include"header.h"
main()
{
 unsigned char temp[13];
 uart0_init(9600);
 lcd4_init();
 //adc_init();
 while(1)
 {
  uart0_tx_string("scan rfid card\r\nRFID NO:");
  uart0_rx_string(temp,12);
  uart0_tx_string(temp);
  lcd4_string("ID:");
  lcd4_string(temp);
  uart0_tx_string("\r\n");
  lcd4_cmd(0x80);
  }
}
