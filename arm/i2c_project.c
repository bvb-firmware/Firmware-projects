
	#include<lpc21xx.h>
	#include"header1.h" 
	unsigned int c,c1,flag,flag1,flag2;
	main()
	{
	unsigned char h,m,s,d,mm,y,am,i;
	int flag3=0;
	i2c_init();
	uart0_init(9600);
	lcd4_init();
	config_sw3();
	config_vic_for_sw3();
	config_sw2();
	config_vic_for_sw2();
	config_sw1();
	config_vic_for_sw1();
	while(1)
	{
	c++;
	while(flag)
	{
	if(flag==1)
	{
	lcd4_cmd(0x01);
	lcd4_cmd(0x80);
	//uart0_tx_string("enter hours: ");
	lcd4_string("enter hours:");	
	
	while(flag)
	{
	if(c1>=0 && c1<=23)
	{
	lcd4_cmd(0xc0);
	lcd4_data((c1/10)+48);
	lcd4_data((c1%10)+48);
	i2c_write(0xD0,0x2,(0x60+c1));
	delay_ms(500);
	}
	else
	c1=0;
	if(flag1==1)
	{
	 c1=0;
	lcd4_cmd(0x01);
	lcd4_cmd(0x80);
	//uart0_tx_string("enter hours: ");
	lcd4_string("enter minutes:");
	while(flag)
	{
	flag1=0;
	lcd4_cmd(0xc0);
	lcd4_data((c1/10)+48);
	lcd4_data((c1%10)+48);
	i2c_write(0xD0,0x1,(0x00+c1));
	delay_ms(500);
	if(flag1==1)
	{
	c1=0;
	lcd4_cmd(0x01);
	lcd4_cmd(0x80);
	//uart0_tx_string("enter hours: ");
	lcd4_string("enter seconds:");
	while(flag)
	{
	flag1=0;
	lcd4_cmd(0xc0);
	lcd4_data((c1/10)+48);
	lcd4_data((c1%10)+48);
	i2c_write(0xD0,0x0,(0x00+c1));
	delay_ms(500);

	if(flag1==1)
	{
	c1=0;
	lcd4_cmd(0x01);
	lcd4_cmd(0x80);
	//uart0_tx_string("enter hours: ");
	lcd4_string("enter date:");
	while(flag)
	{
	flag1=0;
	lcd4_cmd(0xc0);
	lcd4_data((c1/10)+48);
	lcd4_data((c1%10)+48);
	i2c_write(0xD0,0x4,(0x00+c1));
	delay_ms(500);
	
	if(flag1==1)
	{
	c1=0;
	lcd4_cmd(0x01);
	lcd4_cmd(0x80);
	//uart0_tx_string("enter hours: ");
	lcd4_string("enter month:");
	while(flag)
	{
	flag1=0;
	lcd4_cmd(0xc0);
	lcd4_data((c1/10)+48);
	lcd4_data((c1%10)+48);
	i2c_write(0xD0,0x5,(0x00+c1));
	delay_ms(500);
	if(flag1==1)
	{
	c1=0;
	lcd4_cmd(0x01);
	lcd4_cmd(0x80);
	//uart0_tx_string("enter hours: ");
	lcd4_string("enter year:");
	while(flag)
	{
	flag1=0;
	lcd4_cmd(0xc0);
	lcd4_data((c1/10)+48);
	lcd4_data((c1%10)+48);
	i2c_write(0xD0,0x6,(0x00+c1));
	delay_ms(500);

	if(flag1==1)
	{
	c1=0;
	lcd4_cmd(0x01);
	lcd4_cmd(0x80);
	//uart0_tx_string("enter hours: ");
	lcd4_string("enter day of week:");
	while(flag)
	{
	flag1=0;
	lcd4_cmd(0xc0);
	lcd4_data((c1/10)+48);
	lcd4_data((c1%10)+48);
	i2c_write(0xD0,0x3,(0x00+c1));
	delay_ms(500);
	if(flag1==1)
	{
	flag=0;
	flag1=0;
	flag3=1;
	}
	}
	
	}
	}
	}
	while(flag3)
	{
	lcd4_cmd(0x1);
	lcd4_cmd(0x80);
	
	h=i2c_read(0xD0,0x2);
	am=h;
	h=h&(0xf);
	lcd4_data((h/16)+48);
	lcd4_data((h%16)+48);
	lcd4_data(':');
	
	m=i2c_read(0xD0,0x1);
	lcd4_data((m/16)+48);
	lcd4_data((m%16)+48);
	lcd4_data(':');
	
	s=i2c_read(0xD0,0x0);
	lcd4_data((s/16)+48);
	lcd4_data((s%16)+48);
	
	if(((am>>5)&1)==0)
	lcd4_string(" AM");
	else
	lcd4_string(" PM");

	lcd4_cmd(0xc0);
	d=i2c_read(0xD0,0x4);
	lcd4_data((d/16)+48);
	lcd4_data((d%16)+48);
	lcd4_data('/');
	
	mm=i2c_read(0xD0,0x5);
	lcd4_data((mm/16)+48);
	lcd4_data((mm%16)+48);
	lcd4_data('/');
	
	y=i2c_read(0xD0,0x6);
	lcd4_string("20");
	lcd4_data((y/10)+48);
	lcd4_data((y%10)+48);
	
	i=i2c_read(0xD0,0x3);
	if(i==0)
	lcd4_string(" SUN");
	else if(i==1)
	lcd4_string(" MON");
	else if(i==2)
	lcd4_string(" TUE");
	else if(i==3)
	lcd4_string(" WED");
	else if(i==4)
	lcd4_string(" THU");
	else if(i==5)
	lcd4_string(" FRI");
	else
	lcd4_string(" SAT");

	if(flag==1)
	break;
	delay_ms(1000);
	}
	}	
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
