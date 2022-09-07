/*File Guard*/
#ifndef _RCC_INTERFACE_H_
#define _RCC_INTERFACE_H_
/********************  Include ********************/
#include "RCC_Config.h"
#include "RCC_Private.h"
#include "../../Library/Macros.h"
#include "../../Library/Standard_Types.h"
/********************  Clock ********************/
void RCC_VidPort_Clock(u8 Copy_u8Port,u8 Copy_u8State);		/*ENABLE CLOCK TO GPIO PORTS*/

#endif
/* _RCC_INTERFACE_H_ */
