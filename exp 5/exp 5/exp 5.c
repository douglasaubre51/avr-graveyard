/*
 * exp_5.c
 *
 * Created: 19-07-2025 8.00.47 PM
 *  Author: douglasaubre51
 */ 

#include <avr/io.h>

int main(void)
{
	DDRB = 0xff;
	DDRC = 0xff;
	
	// get bit5 of PORTB
	unsigned int bit5 = PORTB & 0b001000;
	
	if(PORTC & 0b10000000){
		return 0;
	}
	else{
		PORTC |= 0b10000000;
	}
	
	return 0;
}