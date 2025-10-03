/*
 * exp_8_c.c
 *
 * Created: 03-10-2025 6.22.46 AM
 *  Author: MAC
 */ 

#include <avr/io.h>

int main(void)
{
   PORTB = 0x01;
   DDRC = 0xff;
   DDRD = 0xff;
   
   TCCR0 = 0x06;
   TCNT0 = 0x00;
   
   while(1)
   {
	   do 
	   {
		   PORTC = TCNT0;
	   } while ((TIFR & (0x1 << TOV0)) == 0);
	   
	   TIFR = 0x1 << TOV0;
	   PORTD ++;
   }
}