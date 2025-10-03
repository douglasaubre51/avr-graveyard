/*
 * exp_8.c
 *
 * Created: 03-10-2025 6.05.48 AM
 *  Author: MAC
 */ 

#include <avr/io.h>

void T0Delay();

int main(void)
{
    DDRB = 0xff;
	
	while(1)
	{
		T0Delay();
		PORTB = PORTB ^ 0x10;
	}
}

void T0Delay()
{
	TCNT0 = 186;
	TCCR0 = 0x02;
	
	while((TIFR & (1 << TOV0)) == 0);
	
	TCCR0 = 0;
	TIFR = 0x1;
}