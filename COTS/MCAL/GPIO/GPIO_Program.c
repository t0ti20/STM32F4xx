/*------------------------------- INCLUDE -------------------------------*/
#include "GPIO_Interface.h"
/******************************************************************************/
/*                                SINGLE  PIN                                 */
/******************************************************************************/



/*------------------------- Set Pin State -------------------------*/
void GPIO_VidSet_Pin(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8State)
{
	GPIO_Register *GPIO_X;
	switch(Copy_u8Port)
	{
		case(Port_A):GPIO_X = GPIO_A;break;
		case(Port_B):GPIO_X = GPIO_B;break;
		case(Port_C):GPIO_X = GPIO_C;break;
		case(Port_D):GPIO_X = GPIO_D;break;
		case(Port_E):GPIO_X = GPIO_E;break;
		default:break;
	}
	switch(Copy_u8State)
	{
		case(Hi):Set_Port(GPIO_X->BSRR_Set,(GPIO_BSRR<<Copy_u8Pin));break;
		case(Low):Set_Port(GPIO_X->BSRR_Clear,(GPIO_BSRR<<Copy_u8Pin));break;
		default:break;
	}
}



/*------------------------- Set Pin Output Configurations -------------------------*/
void GPIO_VidPin_Mode_Output(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Type,u8 Copy_u8Speed)
{
	GPIO_VidPin_Mode(Copy_u8Port,Copy_u8Pin,GPIO_Output);
	GPIO_Register *GPIO_X;
	switch(Copy_u8Port)
	{
		case(Port_A):GPIO_X = GPIO_A;break;
		case(Port_B):GPIO_X = GPIO_B;break;
		case(Port_C):GPIO_X = GPIO_C;break;
		case(Port_D):GPIO_X = GPIO_D;break;
		case(Port_E):GPIO_X = GPIO_E;break;
		default:break;
	}
	/*Select Output Type*/
	switch (Copy_u8Type)
	{
		case(Push_Pull):Clear_Bit(GPIO_X->OTYPER,(GPIO_OTYPER<<Copy_u8Pin));break;
		case(Open_Drain):
				Set_Bit(GPIO_X->OTYPER,(GPIO_OTYPER<<Copy_u8Pin));
			#if Open_Drain_Pull == Pull_Up
				Set_Bit(GPIO_X->PUPDR,GPIO_PUPDR_Pull_Up<<(Copy_u8Pin<<ONE));
			#elif Open_Drain_Pull == Pull_Down
				Set_Bit(GPIO_X->PUPDR,(GPIO_PUPDR_Pull_Down<<(Copy_u8Pin<<ONE)));
			#endif
		break;
		default:break;
	}
	/*Select Operating Speed*/
	switch (Copy_u8Speed)
	{
		case(Low_Speed):Clear_Bit(GPIO_X->OSPEEDR,GPIO_OSPEEDR_HI<<(Copy_u8Pin<<ONE));break;
		case(Medium_Speed):Set_Bit(GPIO_X->OSPEEDR,GPIO_OSPEEDR_Medium<<(Copy_u8Pin<<ONE));break;
		case(Fast_Speed):/*Enable Compensation Cell*/Set_Bit(GPIO_X->OSPEEDR,GPIO_OSPEEDR_Fast<<(Copy_u8Pin<<ONE));break;
		case(High_Speed):/*Enable Compensation Cell*/Set_Bit(GPIO_X->OSPEEDR,GPIO_OSPEEDR_HI<<(Copy_u8Pin<<ONE));break;
		default:break;
	}
}



/*------------------------- Set Pin Mode -------------------------*/
void GPIO_VidPin_Mode(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Mode)
{
	RCC_VidPort_Clock(Copy_u8Port,Clock_Enable);
	GPIO_Register *GPIO_X;
	switch(Copy_u8Port)
	{
		case(Port_A):GPIO_X = GPIO_A;break;
		case(Port_B):GPIO_X = GPIO_B;break;
		case(Port_C):GPIO_X = GPIO_C;break;
		case(Port_D):GPIO_X = GPIO_D;break;
		case(Port_E):GPIO_X = GPIO_E;break;
		default:break;
	}
	/*Select Pin Mode*/
	switch (Copy_u8Mode)
	{
		case (GPIO_Output):Set_Bit(GPIO_X->MODER,GPIO_MODER_MODER_OUTPUT<<(Copy_u8Pin<<ONE));break;
		case (GPIO_Input):Clear_Bit(GPIO_X->MODER,GPIO_MODER_MODER_ANALOG<<(Copy_u8Pin<<ONE));break;
		case (GPIO_Alternate):Set_Bit(GPIO_X->MODER,GPIO_MODER_MODER_ALTERNATE<<(Copy_u8Pin<<ONE));break;
		case (GPIO_Analog):Set_Bit(GPIO_X->MODER,GPIO_MODER_MODER_ANALOG<<(Copy_u8Pin<<ONE));break;
		default:break;
	}
}
