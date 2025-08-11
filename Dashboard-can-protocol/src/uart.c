#include<lpc21xx.h>
#include"header.h"
main()

                     {
 	/*	PINSEL0=0X5;
		U0LCR=0X83;
		U0DLL=97;
		U0DLM=0;
		U0LCR=0X3;
		U0THR='A';
		while(((U0LSR>>5)&1)==0);

		int i=0;
		uart0_init(33600);
		while(1)
		{
		for(i=0;i<26;i++)
		{
		uart0_tx_data('A'+i);
		delay_ms(300);
		}
		} 

		uart0_tx_string("vector\r\nindia");	*/

		/*unsigned char s[]="switch is pressed 00 times";
		int c=0;
		#define sw ((IOPIN0>>14)&1)
		uart0_init(9600);
		while(1)
		{
		 if(sw==0)
		 {
		  while(sw==0);
		  c++;
		  s[18]=c/10+48;
		  s[19]=c%10+48;
		  uart0_tx_string(s);
		  uart0_tx_string("\r\n");
		  if(c==99)
		  c=0;
		 }
		} 

		uart0_init(9600);
		while(1)
		{
			unsigned char temp;
		  temp=uart0_rx_data();
			 uart0_tx_data(temp);
		
		}  

		unsigned char temp;
		uart0_init(9600);
		uart0_tx_data('a');
		while(1)
		{
		  uart0_tx_string("Enter the char: ");
		  temp=uart0_rx_data();
		  uart0_tx_data(temp);
		  uart0_tx_string("\r\nits ASCII is: ");
		   uart0_tx_data((temp/10)+48);
		   uart0_tx_data((temp%10)+48);
		   uart0_tx_string("\r\n");
		} */


	/*	unsigned char temp;
		uart0_init(9600);
		while(1)
		{
		 uart0_tx_string("Enter any char : ");
		 temp=uart0_rx_data();
		 uart0_tx_data(temp);
		 while(uart0_rx_data()!='\r');
		 uart0_tx_string("\r\nIts ascii is: ");
		 uart0_tx_integer(temp);
		 uart0_tx_data(' ');

		 uart0_tx_octal(temp);
		 uart0_tx_data(' ');
		 uart0_tx_hexa(temp);
		 uart0_tx_data(' ');
		 uart0_tx_float(temp);
		 uart0_tx_data(' ');
		 uart0_tx_binary(temp);
		 uart0_tx_data(' ');
		 uart0_tx_string("\r\n");

		} 

		//basic calculator
		unsigned char op,temp,temp1,r;
		uart0_init(9600);
		while(1)
		{
			uart0_tx_string("Enter expression : ");
			temp=uart0_rx_data();
			uart0_tx_data(temp);
			op=uart0_rx_data();
		  	uart0_tx_data(op);
		   temp1=uart0_rx_data();
		   uart0_tx_data(temp1);
		   while(uart0_rx_data()!='\r');
		   uart0_tx_string("\r\nresult : ");
		   temp-=48;
		   temp1-=48;
		   switch(op)
		   {
		   		case '+': r=temp+temp1; break;
				case '-':  r=temp-temp1; break;
		   
		   	  	case '*': r=temp*temp1; break;
				case '/': r=temp/temp1; break;
				case '%': r=temp%temp1; break;
			//	case default : uart0_tx_string("undefined operator");
		   	//					break;
		   }
		   uart0_tx_data((r/10)+48);
		   uart0_tx_data((r%10)+48);
		   uart0_tx_string("\r\n");
		} 

		//receving a string
		 char *p;
		uart0_init(9600);
		while(1)
		{
		uart0_tx_string("enter : ");
		p=uart0_rx_string();
		 uart0_tx_string("\r\n");
		uart0_tx_string(p);
		 uart0_tx_string("\r\n");
		} 

		//options to led on
		unsigned char op; 
		#define LED (1<<18)
		#define LED1 (1<<19)
	
		
		

	   uart0_init(9600);
	   	IODIR0 =LED|LED1;
		 IOSET0|=LED|LED1;
	   while(1)
	   {
	 
	   uart0_tx_string("Menu");
	   	uart0_tx_string("\r\na.TURN ON LED1");
		uart0_tx_string("\r\nb.TURN OFF LED1");
		uart0_tx_string("\r\nc.TURN ON LED2");
		uart0_tx_string("\r\nd.TURN OFF LED2");
	   	 uart0_tx_string("\r\nEnter option : ");
		 op=uart0_rx_data();
		 uart0_tx_data(op);
		 while(uart0_rx_data()!='\r');
		 uart0_tx_string("\r\n");

		 switch(op)
		 {
		   case 'a':	IOCLR0=LED;	break;
		    case 'b':	IOSET0=LED;		break;
			 case 'c':	IOCLR0=LED1; 	break;
			  case 'd':	IOSET0=LED1; 	break;


		 
		 }
		 delay_ms(200);
	   }  */
	   unsigned char s[13];
	   unsigned int len=12;
	   uart0_init(9600);
	   while(1)
	   {
	   	 uart0_tx_string("Enter the string: ");
	   uart0_rx_string(s,len);
	   uart0_tx_string(s);
	   delay_ms(100); 

		}



}







