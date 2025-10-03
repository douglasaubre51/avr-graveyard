/*
 * exp5_b.c
 *
 * Created: 11-09-2025 9.49.37 PM
 *  Author: MAC
 */ 

#include <avr/io.h>

int main(void)
{
    DDRB = 0x00;
	DDRC = 0xff;
	unsigned int temp;
	
	while(1){
		
		temp = PINB & (1 << 5);
		
		if(temp & (1 << 5)){
			
			PORTC |= (1 << 7);
		}
		else{
			
			PORTC &= ~(1 << 7);
		}
	}
}