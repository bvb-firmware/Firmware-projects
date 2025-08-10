#include<lpc21xx.h>
#include"header.h"
int c,i;
main()
{

/* IODIR0=1<<17;
  while(1)
  {
  if(((IOPIN0>>14)&1)==0)
   IOCLR0=1<<17;
   else
   IOSET0=1<<17;
   }   	 

IODIR1=1<<17;
  while(1)
  {
  if(((IOPIN1>>14)&1)==0)
   IOCLR1=1<<17;
   else
   IOSET1=1<<17;   	 */

	  c=0;
	  IODIR0=0x1;
   while(1)
   {
   //IOSET0=0x1;
   	if(((IOPIN0>>1)&1)==0)
	{ 
	 while(((IOPIN0>>1)&1)==0)
	 	c++;
	 
	 //if(c==10)																							   
	  //c=0;
	}
   }			   	 


	/*
   IODIR0=0x2;
   while(1)
   {
   	 if(((IOPIN0>>2)&1)==0)
	  IOCLR0=0x2;
	  else
	  IOSET0=0x2;  


   
   }			   

   IODIR0=0x7;
   while(1)
   {
   	if(((IOPIN0>>5)&1)==0)

   	   IOCLR0=0x4;
	   
	   else
	 
	   IOSET0=0x4;
	   if(((IOPIN0>>6)&1)==0)

   	   IOCLR0=0x1;
	   
	   else
	 
	   IOSET0=0x1;
	   if(((IOPIN0>>7)&1)==0)

   	   IOCLR0=0x2;
	   

	   else
	 
	   IOSET0=0x2;
	 


	   
   
   }			   */


//to blink led according to binary.


/*IODIR0=0x7;
while(1)
{
IOSET0=0x7;
if(((IOPIN0>>5)&1)==0)
{
   while(((IOPIN0>>5)&1)==0);
   for(i=1;i<8;i++)
   {
   IOCLR0=i;
   delay_ms(300);
   IOSET0=i;
   delay_ms(300);

   
   } 



}

}	 
   c=0;
  IODIR0=0x7;
while(1)
{
IOSET0=0x7;
if(((IOPIN0>>5)&1)==0)
{
   while(((IOPIN0>>5)&1)==0);
   		   c++;
   IOCLR0=c;
   delay_ms(300);
   IOSET0=c;
   delay_ms(300);
   if(c==7)
	 c=0;
   
   } 



}	 */

}



