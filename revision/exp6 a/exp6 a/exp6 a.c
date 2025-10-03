/*
 * exp6_a.c
 *
 * Created: 12-09-2025 6.54.28 AM
 *  Author: MAC
 */ 

#include <avr/io.h>

int main(void)
{
   DDRB = 0xff;
   DDRC = 0xff;
   
   unsigned int pbcd = 0x29;
   
   unsigned int shiftRight = pbcd >> 4;
   PORTB = shiftRight & 0b00001111;
   
   PORTC = pbcd & 0b00001111;
}