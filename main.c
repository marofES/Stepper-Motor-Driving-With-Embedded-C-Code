/*
 * main.c
 *
 *  Created on: Feb 25, 2021
 *      Author: marof
 */

#include<avr/io.h>
#include<util/delay.h>

//#define F_CPU 160000000UL

int main(){
	DDRB = 0b00001111; //pb3 A ,pb2 B, pb1 A', pb0 B'
	PORTB = 0x00;
	uint8_t  count=0;
	while(1){



		PORTB = 0b00001000;//A
		_delay_ms(8);
		PORTB = 0b00000100;//B
		_delay_ms(8);
		PORTB = 0b00000010;//A'
		_delay_ms(8);
		PORTB = 0b00000001;//B'
		_delay_ms(8);

		count++;
		if(count==255)
				{
					_delay_ms(3000);
					count =0;
				}

	}
}
