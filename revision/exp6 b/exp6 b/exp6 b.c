/*
 * exp6_b.c
 *
 * Created: 12-09-2025 7.05.09 AM
 *  Author: MAC
 */ 

#include <avr/io.h>

int main(void)
{
   DDRB = 0xff;
   DDRC = 0xff;
   
   unsigned char four = '4';
   unsigned char seven = '7';
   
   
   
   four &= 0b00001111;
   seven &= 0b00001111;
   
   PORTC = seven;
   PORTB = (four<<4) | seven;
}