/*
 * exp5.c
 *
 * Created: 11-09-2025 9.21.45 PM
 *  Author: MAC
 */ 

#include <avr/io.h>

int main(void)
{
    DDRB = 0x00;
	DDRC = 0xff;
	
	unsigned int temp;
	
	while(1){
		
		temp = PINB & 0b00100000;
		
		if(temp & 0b00100000){
			
			PORTC |= 0b10000000;
		}
		else{
			
			PORTC &= 0b01111111;
		}
	}
}