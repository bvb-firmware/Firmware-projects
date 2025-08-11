#include<lpc21xx.h>
#include"header.h"
main()
{	
	int i,j,k;
	//active high
/*	IODIR0=0xff;
	IOSET0=0xff;
	while(1)
	{
	
	IOCLR0=0xff;
	delay_ms(200);
	IOSET0=0xff;
	delay_ms(200);
	} */
				  
/*	IODIR0=0x7;
	while(1)
	{
		IOSET0=0x7;
		IOCLR0=0x7;
		delay_ms(200);
		IOSET0=0x7;
		delay_ms(200);
	}				
                                                                                                                                                                                                                                                                                   

	IODIR0=0xFF;
	
	while(1)
	{
		IOCLR0=0xFF;
			IOCLR0=1;
		delay_ms(300);
		IOSET0=1;
		delay_ms(300);
	for(i=1,j=2,k=1;k<=128; )
	{
		k=i*j;
	  IOCLR0=k;
	  delay_ms(300);
	  IOSET0=k;
	  delay_ms(300);
			i=k;
	}
   }  	 
    
 	  IODIR0=0xFF;
	
	while(1)
	{
		IOSET0=0xFF;
			IOCLR0=1;
		delay_ms(300);
		IOSET0=1;
		delay_ms(300);
	for(i=1,j=2,k=1;k<=128; )
	{
		k=i*j;
	  IOCLR0=k;
	  delay_ms(300);
	  IOSET0=k;
	  delay_ms(300);
			i=k;
	}
	for(i,k,j;k>=2;)
	{
	 k=i/j;
	 IOCLR0=k;
	  delay_ms(300);
	  IOSET0=k;
	  delay_ms(300);
			i=k;
	}


	
   } */  

   //TO blink LEDS according to binary.
	
	/*IODIR0=0X0F<<0;
	while(1)
	{
		IOSET0=0x0F;
	for(i=1;i<=7;i++)
	{
		IOCLR0=i;
		delay_ms(200);
		IOSET0=i;
		delay_ms(200);
	
	}
	
	
	} 

convergence
	IODIR0=0xFF;
	while(1)
	{  IOSET0=0xFF;
	 for(i=0,j=7;i<j;i++,j--)
	 {
	 	IOCLR0=1<<i|1<<j;
		delay_ms(300);
		IOSET0=1<<i|1<<j;
		delay_ms(300);
	 
	 }
	
	} 
	//divergence
	 
	IODIR0=0xFF;
	while(1)
	{
	  IOSET0=0xFF;
	 for(i=3,j=4;i>=0;i--,j++)
	 {
	 	IOCLR0=1<<i|1<<j;
		delay_ms(300);
		IOSET0=1<<i|1<<j;
		delay_ms(300);
	 
	 }
	
	} 
	
	IODIR0=0xFF;
	while(1)
	{  IOSET0=0xFF;
	 for(i=0,j=7;i<=7;i++,j--)
	 {
	 	IOCLR0=1<<i|1<<j;
		delay_ms(300);
		IOSET0=1<<i|1<<j;
		delay_ms(300);
	 
	 }
	
	} 

	IODIR0=0xFF<<0;
	while(1)
	{
	 IOSET0=0xFF;
	 for(i=0;i<8;i=i+2)
	 {
	 	 IOCLR0=1<<i;
		 delay_ms(200);
		 IOSET0=1<<i;
		 delay_ms(200);

	 }
	  for(i=i-1;i>=0;i=i-2)
	  {
	  	IOCLR0=1<<i;
		delay_ms(200);
		IOSET0=1<<i;
		delay_ms(200);

	  
	  }
	} */

	IODIR0=0x7<<17;
	while(1)
	{
	  IOSET0=0x7<<17;
	  for(i=17;i<20;i=i+2)
	  {
	  	IOCLR0=1<<i;
		delay_ms(200);
		IOSET0=1<<i;
		delay_ms(200);

	  }
		for(i=i-1;i>16;i=i-2)
	  {
	  	IOCLR0=1<<i;
		delay_ms(200);
		IOSET0=1<<i;
		delay_ms(200);

	  }
	}

}






