/*
 * exp_8_b.c
 *
 * Created: 03-10-2025 6.16.12 AM
 *  Author: MAC
 */ 

#include <avr/io.h>

void T1Delay();

int main(void)
{
    DDRB = 0xff;
	
	while(1)
	{
		PORTB = PORTB ^ (1 << PB4);
		T1Delay();
	}
}

void T1Delay()
{
	TCNT1H = 0x85;
	TCNT1L = 0xee;
	
	TCCR1A = 0x00;
	TCCR1B = 0x04;
	
	while((TIFR & (0x1 << TOV1)) == 0);
	
	TCCR1B = 0;
	TIFR = 0x1 << TOV1;
}