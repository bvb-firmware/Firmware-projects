 #include<lpc21xx.h>
 #include"header3.h"

  void can2_init(void)
  {
  PINSEL1|=0x00014000;
  VPBDIV=1;
  C2MOD=1;
  C2BTR=0X001C001D;
  AFMR=2;
  C2MOD=0;
  }

  void can2_tx(can2 V)
  {
	C2TID1=V.id;
	C2TFI1=(V.dlc<<16);
	C2TFI1|=(V.rtr<<30);
	if(V.rtr==0)
	{
	C2TDA1=V.data1;
	C2TDB1=V.data2;
	}
	
	C2CMR=1|(1<<5);
	while(((C2GSR>>3)&1)==0);
  }

  void can2_rx(can2 *p)
  {
   while((C2GSR&1)==0);
   p->id=C2RID;
   p->dlc=(C2RFS>>16)&0XF;
   p->rtr=((C2RFS>>30)&1);
   if((p->rtr)==0)
   {
   p->data1=C2RDA;
   p->data2=C2RDB;
   }
   
   C2CMR=4;
  }

 

void adc_init(void)
 {
 	PINSEL1|=0X15400000;
	ADCR|=0X00201400;
 }
 unsigned int adc_read(unsigned char ch_num)
 {
   unsigned int result=0;
  ADCR|=(1<<ch_num);
  ADCR|=(1<<24);
  while(((ADDR>>31)&1)==0);
  ADCR^=(1<<ch_num);
   result=((ADDR>>6)&0x3ff);
  ADCR^=(1<<24);
 
 
  return result;
 }

