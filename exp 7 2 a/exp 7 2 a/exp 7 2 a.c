/*
 * exp_7_2_a.c
 *
 * Created: 03-10-2025 6.30.26 AM
 *  Author: MAC
 */ 

#include <avr/io.h>

#define serPin 3

int main(void)
{
    unsigned char x;
	unsigned char REGA = 0;
	
	DDRC &= ~(1 << serPin);
	
	for(x=0;x < 8;x++)
	{
		REGA = REGA << 1;
		REGA |= (PINC & (1 << serPin)) >> serPin;
	}
	
	return 0;
}