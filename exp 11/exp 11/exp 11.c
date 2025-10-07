/*
 * exp_11.c
 *
 * Created: 03-10-2025 5.40.03 AM
 *  Author: MAC
 */ 

#include <avr/io.h>
#include <util/delay.h>

#define KEY_DDR DDRC
#define KEY_PRT PORTC
#define KEY_PIN PINC

unsigned char keypad[4][4] = {
	'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'
};

int main(void)
{
    unsigned char colloc, rowloc;
	
	DDRD = 0xff;
	KEY_DDR = 0xf0;
	KEY_PRT = 0xff;
	
	while(1)
	{
		do
		{
			KEY_PRT &= 0x0f;
			colloc = (KEY_PIN & 0x0f);	
		}while(colloc != 0x0f);
		
		do 
		{
			_delay_ms(20);
			colloc = (KEY_PIN & 0x0f);
		} while (colloc== 0x0f);
		
	
	while(1)
	{
		KEY_PRT = 0xef;
		colloc = (KEY_PIN & 0x0f);
		
		if(colloc != 0x0f)
		{
			rowloc = 0;
			break;
		}
		
		KEY_PRT = 0xdf;
		colloc = (KEY_PIN & 0x0f);
		
		if(colloc != 0x0f)
		{
			rowloc = 1;
			break;
		}
		
		KEY_PRT = 0xbf;
		colloc = (KEY_PIN & 0x0f);
		
		if(colloc != 0x0f)
		{
			rowloc = 2;
			break;
		}
		
		KEY_PRT = 0x7f;
		colloc = (KEY_PIN & 0x0f);
		rowloc = 3;
		break;
	}
	
	if(colloc == 0x0e)
		PORTD = (keypad[rowloc][0]);
	else if(colloc == 0x0d)
		PORTD = (keypad[rowloc][1]);
	else if(colloc == 0x0b)
		PORTD = (keypad[rowloc][2]);
	else
		PORTD = (keypad[rowloc][3]);
}
return 0;
		}