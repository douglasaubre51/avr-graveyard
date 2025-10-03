/*
 * exp4.c
 *
 * Created: 11-09-2025 3.34.39 PM
 *  Author: MAC
 */ 

#include <avr/io.h>

int main(void)
{
   DDRC = 0x00;
   DDRB = 0xff;
   DDRD = 0xff;
   
   unsigned int temp = PINC;
   
   if( temp < 100 ){
	   
	   PORTB = temp;
	   return 0;
   }
   
   PORTD = temp;
}