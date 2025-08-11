#include<lpc21xx.h>
#include"header.h"
int c=0;
main()
{
uart0_init(9600);
config_uart0();
config_vic_for_uart0();
while(1)
{
c++;
}

}
