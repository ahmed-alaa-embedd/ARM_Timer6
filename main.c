/*
 * main.c
 *
 *  Created on: 24 Aug 2020
 *      Author: ahmed alaa
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_int.h"




void main(void)
{
	/*initiat clock*/
	RCC_voidInitSysClock();
	RCC_voidEnableClock(RCC_APB2, 2); // Enable clock for GPIOA
	RCC_voidEnableClock(RCC_APB1, 0b10000); // Enable clock for Timer6



	/*PIN mode*/
	MGPIO_VoidSetPinDirection(GPIOA , PIN1 , OUTPUT_SPEED_2MHZ_PP);

	//initalize timer6
	MTimer6_voidInit();




	while(1)
	{
		MGPIO_VoidSetPinValue(GPIOA,PIN1,HIGH);
		MTimer6_VoidSetBusyWait(1000000);
		MGPIO_VoidSetPinValue(GPIOA,PIN1,LOW);
		MTimer6_VoidSetBusyWait(1000000);

	}
}
