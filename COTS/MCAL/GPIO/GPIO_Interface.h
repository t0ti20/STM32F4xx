/*
******************************************************************************
  * @file    GPIO
  * @author  Khaled El-Sayed @t0ti20
  * @version V1.0
  * @date    9-8-2022
  * @brief   STM-32 Cortex-M4 GPIO.
******************************************************************************
*/

/*File Guard*/
#ifndef _GPIO_INTERFACE_H_
#define _GPIO_INTERFACE_H_
/********************  INCLUDE  ***************/
#include "../../Library/Standard_Types.h"
#include "../../Library/Macros.h"
#include "../RCC/RCC_Interface.h"
#include "GPIO_Private.h"
#include "GPIO_Config.h"
/********************  USER GUIDE  ***************/
/*
 * Copy_u8Port  ==>> (Port_A , Port_B , Port_C , Port_D , Port_E)
 *
 * Copy_u8Pin   ==>> (Pin_0,Pin_1,Pin_2,Pin_3,Pin_4,Pin_5,Pin_6,Pin_7,Pin_8,Pin_9,Pin_10,Pin_11,Pin_12,Pin_13,Pin_14,Pin_15)
 *
 * Copy_u8Mode  ==>> (GPIO_Input , GPIO_Output , GPIO_Alternate , GPIO_Analog)
 *
 * Copy_u8State ==>> (Hi , Low)
 *
 * Copy_u8Type  ==>> (Push_Pull , Open_Drain)
 *
 * Copy_u8Speed ==>> (Low_Speed "2-MHz" , Medium_Speed "25-MHz" , Fast_Speed" 50-MHz" , High_Speed"100-MHz")
 *
 * */
/********************  OPTIONS FOR SINGLE BIN  ***************/
void GPIO_VidSet_Pin(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8State);								/*Set Pin Value (Port_X-Pin_X-"State")*/
void GPIO_VidPin_Mode(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Mode);								/*Set Pin Mode (Port_X-Pin_X-"Mode")*/
void GPIO_VidPin_Mode_Output(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Type,u8 Copy_u8Speed);		/*Configure Output Options (Port_X-Pin_X-"Type"-"Speed")*/
#endif
/* _GPIO_INTERFACE_H_ */
