/*
 * test_1.c
 *
 * Created: 19-07-2025 12.13.42 PM
 *  Author: douglasaubre51
 */ 

#include <avr/io.h>

int main(void)
{
	DDRA = 0x00;
	DDRB = 0xff;
	
	unsigned int temp = PINA;
	
	PORTB = temp;
}