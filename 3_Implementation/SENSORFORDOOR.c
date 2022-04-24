/*
 * GccApplication1.c
 *
 * Created: 22-04-2022 18:04:36
 * Author : nikhi
 */ 

#include <avr/io.h> //standard AVR header
int main(void)
{
	DDRB=DDRB&0b11111101;//fd  pin 1 is the input(sensor)
	DDRC=DDRC|0b01000000;//40  pin 6 is the output(LED)
	while(1)
	{
		if(PINB & 0b00000010)//02 checking the pin 6 of PORT B
		PORTC=PORTC|0b01000000;//40 set pin 6 of PORT C
		else
		PORTC=PORTC&0b10111111;//bf clear the pin 6 of PORT B 
	}
	return 0;
}

