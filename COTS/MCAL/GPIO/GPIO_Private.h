/*File Guard*/
#ifndef _GPIO_PRIVATE_H_
#define _GPIO_PRIVATE_H_
/***************************** Include ****************************/
#include "../../Library/Standard_Types.h"
/********************  Peripheral Address Configure ***************/
#define PERIPH_BASE_GPIO       ((u32)0x40000000)
#define AHB1PERIPH_BASE_GPIO   (PERIPH_BASE_GPIO + 0x00020000)
#define GPIO_A_BASE            (AHB1PERIPH_BASE_GPIO + 0x0000)
#define GPIO_B_BASE            (AHB1PERIPH_BASE_GPIO + 0x0400)
#define GPIO_C_BASE            (AHB1PERIPH_BASE_GPIO + 0x0800)
#define GPIO_D_BASE            (AHB1PERIPH_BASE_GPIO + 0x0C00)
#define GPIO_E_BASE            (AHB1PERIPH_BASE_GPIO + 0x1000)
#define GPIO_A                 ((GPIO_Register *) GPIO_A_BASE)
#define GPIO_B                 ((GPIO_Register *) GPIO_B_BASE)
#define GPIO_C                 ((GPIO_Register *) GPIO_C_BASE)
#define GPIO_D                 ((GPIO_Register *) GPIO_D_BASE)
#define GPIO_E                 ((GPIO_Register *) GPIO_E_BASE)
/********************  Register Definition For RCC ***************/
typedef struct
{
  volatile u32 MODER;          /*GPIO port mode register*/
  volatile u32 OTYPER;         /*GPIO port output type register*/
  volatile u32 OSPEEDR;        /*GPIO port output speed register*/
  volatile u32 PUPDR;          /*GPIO port pull-up / pull-down register*/
  volatile u32 IDR;            /*GPIO port input data register,*/
  volatile u32 ODR;            /*GPIO port output data register,*/
  volatile u16 BSRR_Set;	   /*GPIO port bit set register,*/
  volatile u16 BSRR_Clear;     /*GPIO port bit reset register,*/
  volatile u32 LCKR;           /*GPIO port configuration lock register*/
  volatile u32 AFR[2];         /*GPIO alternate function registers*/
} GPIO_Register;
/******************  GPIO_BSRR register  ******************/
#define GPIO_BSRR                             ((u16)0x0001)
/******************  GPIO_PUPDR register  *****************/
#define GPIO_PUPDR_Pull_Up                    ((u32)0x00000001)
#define GPIO_PUPDR_Pull_Down                  ((u32)0x00000002)
#define GPIO_PUPDR_No_Pull                    ((u32)0x00000003)
/******************  GPIO_OSPEEDR register  ***************/
#define GPIO_OSPEEDR_Medium                   ((u32)0x00000001)
#define GPIO_OSPEEDR_Fast                     ((u32)0x00000002)
#define GPIO_OSPEEDR_HI                       ((u32)0x00000003)		/*Use Clear To Set Low Speed*/
/******************  GPIO_OTYPER register  ****************/
#define GPIO_OTYPER                           ((u32)0x00000001)
/******************  GPIO_MODER register  *****************/
#define GPIO_MODER_MODER_OUTPUT               ((u32)0x00000001)
#define GPIO_MODER_MODER_ALTERNATE            ((u32)0x00000002)
#define GPIO_MODER_MODER_ANALOG               ((u32)0x00000003)		/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_ALL_OUTPUT           ((u32)0x55555555)
#define GPIO_MODER_MODER_ALL_ALTERNATE        ((u32)0xAAAAAAAA)
#define GPIO_MODER_MODER_ALL_ANALOG           ((u32)0xFFFFFFFF)		/*Use Clear To Set Input Mode*/
/********************  GPIO MACROS Definitions  ***************/
#define GPIO_Input      		  (0)
#define GPIO_Output     		  (1)
#define GPIO_Alternate  		  (2)
#define GPIO_Analog    			  (3)
#define Low_Speed    	 		  (4)
#define Medium_Speed      		  (5)
#define Fast_Speed                (6)
#define High_Speed                (7)
#define Push_Pull                 (8)
#define Open_Drain                (9)
#define No_Pull	                  (10)
#define Pull_Up	                  (11)
#define Pull_Down                 (12)
#define Hi		                  (13)
#define Low                       (14)
typedef enum{Pin_0,Pin_1,Pin_2,Pin_3,Pin_4,Pin_5,Pin_6,Pin_7,Pin_8,Pin_9,Pin_10,Pin_11,Pin_12,Pin_13,Pin_14,Pin_15}GPIO_PINS;
#endif
/* _GPIO_PRIVATE_H_ */
