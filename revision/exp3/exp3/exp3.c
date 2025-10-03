/*
 * exp3.c
 *
 * Created: 11-09-2025 2.56.04 PM
 *  Author: MAC
 */ 

#include <avr/io.h>
#include <stdbool.h>

int main(void)
{
	DDRB = 0xff;
	PORTB = 0x24;
	
	while(true){
		
		PORTB = ~(PORTB);
	}
}