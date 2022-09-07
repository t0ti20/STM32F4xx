/*------------------------------- INCLUDE -------------------------------*/
#include "RCC_Interface.h"
/*------------------------- Edit Clock To Port -------------------------*/
void RCC_VidPort_Clock(u8 Copy_u8Port,u8 Copy_u8State)		/*ENABLE CLOCK TO GPIO PORTS*/
{
	switch(Copy_u8Port)
	{
		case(Port_A):
				if(Copy_u8State==Clock_Enable) Set_Bit(RESET_CONTROL->AHB1ENR, RCC_AHB1ENR_GPIOAEN);
				else Clear_Bit(RESET_CONTROL->AHB1ENR, RCC_AHB1ENR_GPIOAEN);
				break;
		case(Port_B):
				if(Copy_u8State==Clock_Enable) Set_Bit(RESET_CONTROL->AHB1ENR,RCC_AHB1ENR_GPIOBEN);
				else Clear_Bit(RESET_CONTROL->AHB1ENR,RCC_AHB1ENR_GPIOBEN);
				break;
		case(Port_C):
				if(Copy_u8State==Clock_Enable) Set_Bit(RESET_CONTROL->AHB1ENR,RCC_AHB1ENR_GPIOCEN);
				else Clear_Bit(RESET_CONTROL->AHB1ENR,RCC_AHB1ENR_GPIOCEN);
				break;
		case(Port_D):
				if(Copy_u8State==Clock_Enable) Set_Bit(RESET_CONTROL->AHB1ENR,RCC_AHB1ENR_GPIODEN);
				else Clear_Bit(RESET_CONTROL->AHB1ENR,RCC_AHB1ENR_GPIODEN);
				break;
		case(Port_E):
				if(Copy_u8State==Clock_Enable) Set_Bit(RESET_CONTROL->AHB1ENR,RCC_AHB1ENR_GPIOEEN);
				else Clear_Bit(RESET_CONTROL->AHB1ENR,RCC_AHB1ENR_GPIOEEN);
				break;
		default:break;
	}
}
