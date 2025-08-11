
#include<lpc21xx.h>
#include"header.h"
main()
 {	
 // data mode
/*	IODIR0=0x7FF;
	IOCLR0=0x7FF;
	IOSET0='A';
	IOSET0=1<<8;
	IOCLR0=1<<9;
	IOSET0=1<<10;
	delay_ms(2);
	IOCLR0=1<<10;  

	 delay_ms(300);

	IODIR0=0x7FF;
	IOCLR0=0x7FF;
	IOSET0='B';
	IOSET0=1<<8;
	IOCLR0=1<<9;
	IOSET0=1<<10;
	delay_ms(2);
	IOCLR0=1<<10;  

	//command mode
	IODIR0=0x3FF;
	IOCLR0=0x3FF;
	IOSET0=0x01;
	IOCLR0=1<<9;
	IOCLR0=1<<10;
	IOSET0=1<<11;
	delay_ms(2);
	IOCLR0=1<<11; 			

	//lcd8_init();
	//lcd8_cmd(0X88);
	//lcd8_data('a');

	lcd4_init();
	lcd4_cmd(0X81);
	lcd4_data('V');
	lcd4_cmd(0X82);
	lcd4_data('E');
	lcd4_cmd(0X83);
	lcd4_data('E');
	lcd4_cmd(0X84);
	lcd4_data('E');
	lcd4_cmd(0X85);
	lcd4_data('R');
	lcd4_cmd(0X86);
	lcd4_data('A');

	lcd4_cmd(0XC1);
	lcd4_data('V');
	//lcd4_cmd(0X82);
	lcd4_data('E');
//	lcd4_cmd(0X83);
	lcd4_data('E');
//	lcd4_cmd(0X84);
	lcd4_data('E');
//	lcd4_cmd(0X85);
	lcd4_data('R');
//	lcd4_cmd(0X86);
	lcd4_data('A');	 
	
			
	lcd4_init();
	while(1){
	lcd4_cmd(0xc0);
	lcd4_data('v');
	delay_ms(400);
	lcd4_cmd(0xc0);
	lcd4_data('e');
	delay_ms(400);
	lcd4_cmd(0xc0);
	lcd4_data('e');
	delay_ms(400);
	lcd4_cmd(0xc0);
	lcd4_data('r');
	delay_ms(400);
	lcd4_cmd(0xc0);
	lcd4_data('a');
	delay_ms(400);
	}				 
							

	// shifting char for next location
	lcd4_init();
	while(1)
	{
	int i;
	for(i=0;i<16;i++)
	{
		lcd4_cmd(0X80+i);
		lcd4_data('A');
		delay_ms(300);
		lcd4_cmd(0X01);
		delay_ms(300);
	
	}	
	for(i-=1;i>=0;i--)
	{
		lcd4_cmd(0xc0+i);
		lcd4_data('Z');
		delay_ms(300);
		lcd4_cmd(0x01);
		delay_ms(300);
	}
	}					

 // char and its ascii

	lcd4_init();
	while(1)
	{
		int i;
		for(i=0;i<26;i++)
		{
		int num;
		  lcd4_cmd(0x80);
		  lcd4_data('A'+i);
		  lcd4_cmd(0xc0)
		 ; num='A'+i;
		  lcd4_data(num/10+48);
		  lcd4_cmd(0xc1);
		  lcd4_data(num%10+48);
		  delay_ms(300);
		  lcd4_cmd(0x01);
		  delay_ms(300);

		}
	
	}						
					
	//flahing vector 5 times and 6th time india

	lcd4_init();
	while(1)
	{
	int i;
	for(i=0;i<5;i++)
	{
	lcd4_cmd(0x80);
	lcd4_string("vector");
	delay_ms(500);
	lcd4_cmd(0x01);
	delay_ms(500);
	}
	lcd4_cmd(0x80);
	lcd4_string("india");
	delay_ms(500);
	
	} 				

	//shifting vectoer india.

	lcd4_init();
	while(1)
	{
	int i;
	for(i=0;i<16;i++)
	{
	lcd4_cmd(0x80+i);
	lcd4_string("vector");
	lcd4_cmd(0xc0+i);
	lcd4_string("india");
	delay_ms(600);
	lcd4_cmd(0x01);
	delay_ms(400);
	
	}
	
	
	}						

	//circular scrolling

	lcd4_init();
	while(1)
	{
	char s[20]="vector";
	int l,i;
	for(l=0;s[l];l++);
	for(i=0;i<16;i++)
	{
		lcd4_cmd(0x80+i);
		lcd4_string(s);
		if(i>(16-l))
		{
		 lcd4_cmd(0x80);
		 lcd4_string(s+(16-i));
		}
		delay_ms(200);
		lcd4_cmd(0x01);
		//delay_ms(10);
	
	}						
	}			*/			

/*	//circular scrolling

	lcd4_init();
	while(1)
	{
	char s[20]="vector";
	int l,i;
	for(l=0;s[l];l++);
	for(i=0;i<16;i++)
	{
		lcd4_cmd(0x80+i);
		lcd4_string(s);
		if(i>(16-l))
		{
		 lcd4_cmd(0xc0);
		 lcd4_string(s+(16-i));
		}
		delay_ms(300);
		lcd4_cmd(0x01);
		delay_ms(220);
	
	}
	for(i=0;i<16;i++)
	{
		lcd4_cmd(0xc0+i);
		lcd4_string(s);
		if(i>(16-l))
		{
		 lcd4_cmd(0x80);
		 lcd4_string(s+(16-i));
		}
		delay_ms(300);
		lcd4_cmd(0x01);
		delay_ms(220);
	
	}
	} 			

	lcd4_init();
	 while(1)
	 {
	   int i;
	   	for(i=0;i<16;i++)
		{
			lcd4_cmd(0x80+i);
		  lcd4_int(-(i));
		  delay_ms(300);
		  lcd4_cmd(0x01);
		  delay_ms(50);
		
		}
	 
	 }	  
									   
	 //lcd4_init();
	 //lcd4_int(-123456);
						
	lcd4_init();
	
	while(1)
	{
	int i=0,j=0;
	lcd4_hexa(i);
	delay_ms(200);
	lcd4_cmd(0X01);
	delay_ms(200);	  
	lcd4_octal(j);
	delay_ms(200);	
	lcd4_cmd(0X01);
	delay_ms(200);		
	} 
					
	lcd4_init();
	while(1)
	{
	lcd4_binary(-1);
	delay_ms(600);
	lcd4_cmd(0x01);
	delay_ms(400);
	} 				*/

	//printing symbol
	lcd4_init();
	while(1)
	{
	 lcd4_cgram();
	 lcd4_cmd(0X80);
	 lcd4_data(0);
	 delay_ms(500);
	 lcd4_cmd(0X01);
	 delay_ms(500);
	
	
	}

}
