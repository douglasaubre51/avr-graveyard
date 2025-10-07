/*
 * exp_13.c
 *
 * Created: 07-10-2025 09:26:55
 *  Author: MTI
 */ 

#include <avr/io.h>

int main(void)
{
  DDRD = 0xff;
  DDRB = 0xff;
  DDRA = 0;
  
  ADCSRA = 0x87;
  ADMUX = 0xe0;
  
  while(1){
	  ADCSRA |= (1 << ADSC);
	  
	  while((ADCSRA & (1 << ADIF)) == 0);
	  
	  PORTB = ADCH;
  }
  
  return 0;
}