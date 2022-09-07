/*File Guard*/
#ifndef _GPIO_INTERFACE_H_
#define _GPIO_INTERFACE_H_
/********************  INCLUDE  ***************/
#include "../../Library/Standard_Types.h"
#include "../../Library/Macros.h"
#include "../RCC/RCC_Interface.h"
#include "GPIO_Private.h"
#include "GPIO_Config.h"
/********************  OPTIONS FOR SINGLE BIN  ***************/
void GPIO_VidPin_Mode(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Mode);									/* Set Pin Mode */
void GPIO_VidPin_Mode_Output(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Type,u8 Copy_u8Speed);			/* Configure Output Options */
/********************  OPTIONS FOR WHOLE PORT  ***************/
void GPIO_VidPort_Mode(u8 Copy_u8Port,u8 Copy_u8Mode);					/*Set Port Mode*/
#endif
/* _GPIO_INTERFACE_H_ */
