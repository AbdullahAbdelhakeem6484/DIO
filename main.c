/*
 * main.c
 *
 *  Created on: 22/9/2018
 *      Author: Abdullah Abdelhakeem
 */

#include"../lib/STD_Types.h"
#include"../lib/macros.h"
#include "DIO_interface.h"
#define F_CPU 12000000
#include<util/delay.h>


int main (void)
{
	DIO_voidSetPinDir(PORT_A,PIN_0,OUTPUT);
while(1)
{
	DIO_voidSetPinValue(PORT_A,PIN_0,HIGH);
	_delay_ms(500);
	DIO_voidSetPinValue(PORT_A,PIN_0,LOW);
		_delay_ms(500);

}

return 0;
}
