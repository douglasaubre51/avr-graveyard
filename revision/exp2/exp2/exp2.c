/*
 * exp2.c
 *
 * Created: 11-09-2025 2.51.15 PM
 *  Author: MAC
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA = 0xff;
	
    for(unsigned int i = 0x00; i <= 0xff; i++){
		
		PORTA = i;
		_delay_ms(100);
	}
}