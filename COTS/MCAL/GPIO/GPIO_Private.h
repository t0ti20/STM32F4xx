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
/********************  Register definition for RCC ***************/
typedef struct
{
  volatile u32 MODER;    /*GPIO port mode register*/
  volatile u32 OTYPER;   /*GPIO port output type register*/
  volatile u32 OSPEEDR;  /*GPIO port output speed register*/
  volatile u32 PUPDR;    /*GPIO port pull-up/pull-down register*/
  volatile u32 IDR;      /*GPIO port input data register,*/
  volatile u32 ODR;      /*GPIO port output data register,*/
  volatile u32 BSRRL;    /*GPIO port bit set/reset low register,*/
  volatile u32 BSRRH;    /*GPIO port bit set/reset high register*/
  volatile u32 LCKR;     /*GPIO port configuration lock register*/
  volatile u32 AFR[2];   /*GPIO alternate function registers*/
} GPIO_Register;

/******************  Bits definition for GPIO_PUPDR register  *****************/
#define GPIO_PUPDR_0_No_Pull                  ((u32)0x00000003)
#define GPIO_PUPDR_0_Pull_Up                  ((u32)0x00000001)
#define GPIO_PUPDR_0_Pull_Down                ((u32)0x00000002)
#define GPIO_PUPDR_1_No_Pull                  ((u32)0x0000000C)
#define GPIO_PUPDR_1_Pull_Up                  ((u32)0x00000004)
#define GPIO_PUPDR_1_Pull_Down                ((u32)0x00000008)
#define GPIO_PUPDR_2_No_Pull                  ((u32)0x00000030)
#define GPIO_PUPDR_2_Pull_Up                  ((u32)0x00000010)
#define GPIO_PUPDR_2_Pull_Down                ((u32)0x00000020)
#define GPIO_PUPDR_3_No_Pull                  ((u32)0x000000C0)
#define GPIO_PUPDR_3_Pull_Up                  ((u32)0x00000040)
#define GPIO_PUPDR_3_Pull_Down                ((u32)0x00000080)
#define GPIO_PUPDR_4_No_Pull                  ((u32)0x00000300)
#define GPIO_PUPDR_4_Pull_Up                  ((u32)0x00000100)
#define GPIO_PUPDR_4_Pull_Down                ((u32)0x00000200)
#define GPIO_PUPDR_5_No_Pull                  ((u32)0x00000C00)
#define GPIO_PUPDR_5_Pull_Up                  ((u32)0x00000400)
#define GPIO_PUPDR_5_Pull_Down                ((u32)0x00000800)
#define GPIO_PUPDR_6_No_Pull                  ((u32)0x00003000)
#define GPIO_PUPDR_6_Pull_Up                  ((u32)0x00001000)
#define GPIO_PUPDR_6_Pull_Down                ((u32)0x00002000)
#define GPIO_PUPDR_7_No_Pull                  ((u32)0x0000C000)
#define GPIO_PUPDR_7_Pull_Up                  ((u32)0x00004000)
#define GPIO_PUPDR_7_Pull_Down                ((u32)0x00008000)
#define GPIO_PUPDR_8_No_Pull                  ((u32)0x00030000)
#define GPIO_PUPDR_8_Pull_Up                  ((u32)0x00010000)
#define GPIO_PUPDR_8_Pull_Down                ((u32)0x00020000)
#define GPIO_PUPDR_9_No_Pull                  ((u32)0x000C0000)
#define GPIO_PUPDR_9_Pull_Up                  ((u32)0x00040000)
#define GPIO_PUPDR_9_Pull_Down                ((u32)0x00080000)
#define GPIO_PUPDR_10_No_Pull                 ((u32)0x00300000)
#define GPIO_PUPDR_10_Pull_Up                 ((u32)0x00100000)
#define GPIO_PUPDR_10_Pull_Down               ((u32)0x00200000)
#define GPIO_PUPDR_11_No_Pull                 ((u32)0x00C00000)
#define GPIO_PUPDR_11_Pull_Up                 ((u32)0x00400000)
#define GPIO_PUPDR_11_Pull_Down               ((u32)0x00800000)
#define GPIO_PUPDR_12_No_Pull                 ((u32)0x03000000)
#define GPIO_PUPDR_12_Pull_Up                 ((u32)0x01000000)
#define GPIO_PUPDR_12_Pull_Down               ((u32)0x02000000)
#define GPIO_PUPDR_13_No_Pull                 ((u32)0x0C000000)
#define GPIO_PUPDR_13_Pull_Up                 ((u32)0x04000000)
#define GPIO_PUPDR_13_Pull_Down               ((u32)0x08000000)
#define GPIO_PUPDR_14_No_Pull                 ((u32)0x30000000)
#define GPIO_PUPDR_14_Pull_Up                 ((u32)0x10000000)
#define GPIO_PUPDR_14_Pull_Down               ((u32)0x20000000)
#define GPIO_PUPDR_15_No_Pull                 ((u32)0xC0000000)
#define GPIO_PUPDR_15_Pull_Up                 ((u32)0x40000000)
#define GPIO_PUPDR_15_Pull_Down               ((u32)0x80000000)
/******************  Bits definition for GPIO_OSPEEDR register  ***************/
#define GPIO_OSPEEDR_0_HI                     ((u32)0x00000003)/*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_0_Medium                 ((u32)0x00000001)
#define GPIO_OSPEEDR_0_Fast                   ((u32)0x00000002)
#define GPIO_OSPEEDR_1_HI                     ((u32)0x0000000C)/*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_1_Medium                 ((u32)0x00000004)
#define GPIO_OSPEEDR_1_Fast                   ((u32)0x00000008)
#define GPIO_OSPEEDR_2_HI                     ((u32)0x00000030)/*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_2_Medium                 ((u32)0x00000010)
#define GPIO_OSPEEDR_2_Fast                   ((u32)0x00000020)
#define GPIO_OSPEEDR_3_HI                     ((u32)0x000000C0)/*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_3_Medium                 ((u32)0x00000040)
#define GPIO_OSPEEDR_3_Fast                   ((u32)0x00000080)
#define GPIO_OSPEEDR_4_HI                     ((u32)0x00000300)/*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_4_Medium                 ((u32)0x00000100)
#define GPIO_OSPEEDR_4_Fast                   ((u32)0x00000200)
#define GPIO_OSPEEDR_5_HI                     ((u32)0x00000C00)/*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_5_Medium                 ((u32)0x00000400)
#define GPIO_OSPEEDR_5_Fast                   ((u32)0x00000800)
#define GPIO_OSPEEDR_6_HI                     ((u32)0x00003000)/*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_6_Medium                 ((u32)0x00001000)
#define GPIO_OSPEEDR_6_Fast                   ((u32)0x00002000)
#define GPIO_OSPEEDR_7_HI                     ((u32)0x0000C000)/*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_7_Medium                 ((u32)0x00004000)
#define GPIO_OSPEEDR_7_Fast                   ((u32)0x00008000)
#define GPIO_OSPEEDR_8_HI                     ((u32)0x00030000)/*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_8_Medium                 ((u32)0x00010000)
#define GPIO_OSPEEDR_8_Fast                   ((u32)0x00020000)
#define GPIO_OSPEEDR_9_HI                     ((u32)0x000C0000)/*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_9_Medium                 ((u32)0x00040000)
#define GPIO_OSPEEDR_9_Fast                   ((u32)0x00080000)
#define GPIO_OSPEEDR_10_HI                    ((u32)0x00300000) /*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_10_Medium                ((u32)0x00100000)
#define GPIO_OSPEEDR_10_Fast                  ((u32)0x00200000)
#define GPIO_OSPEEDR_11_HI                    ((u32)0x00C00000) /*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_11_Medium                ((u32)0x00400000)
#define GPIO_OSPEEDR_11_Fast                  ((u32)0x00800000)
#define GPIO_OSPEEDR_12_HI                    ((u32)0x03000000) /*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_12_Medium                ((u32)0x01000000)
#define GPIO_OSPEEDR_12_Fast                  ((u32)0x02000000)
#define GPIO_OSPEEDR_13_HI                    ((u32)0x0C000000) /*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_13_Medium                ((u32)0x04000000)
#define GPIO_OSPEEDR_13_Fast                  ((u32)0x08000000)
#define GPIO_OSPEEDR_14_HI                    ((u32)0x30000000) /*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_14_Medium                ((u32)0x10000000)
#define GPIO_OSPEEDR_14_Fast                  ((u32)0x20000000)
#define GPIO_OSPEEDR_15_HI                    ((u32)0xC0000000) /*Use Clear To Set Low Speed*/
#define GPIO_OSPEEDR_15_Medium                ((u32)0x40000000)
#define GPIO_OSPEEDR_15_Fast                  ((u32)0x80000000)
/******************  Bits definition for GPIO_OTYPER register  ****************/
#define GPIO_OTYPER_0                         ((u32)0x00000001)
#define GPIO_OTYPER_1                         ((u32)0x00000002)
#define GPIO_OTYPER_2                         ((u32)0x00000004)
#define GPIO_OTYPER_3                         ((u32)0x00000008)
#define GPIO_OTYPER_4                         ((u32)0x00000010)
#define GPIO_OTYPER_5                         ((u32)0x00000020)
#define GPIO_OTYPER_6                         ((u32)0x00000040)
#define GPIO_OTYPER_7                         ((u32)0x00000080)
#define GPIO_OTYPER_8                         ((u32)0x00000100)
#define GPIO_OTYPER_9                         ((u32)0x00000200)
#define GPIO_OTYPER_10                        ((u32)0x00000400)
#define GPIO_OTYPER_11                        ((u32)0x00000800)
#define GPIO_OTYPER_12                        ((u32)0x00001000)
#define GPIO_OTYPER_13                        ((u32)0x00002000)
#define GPIO_OTYPER_14                        ((u32)0x00004000)
#define GPIO_OTYPER_15                        ((u32)0x00008000)
/******************  Bits definition for GPIO_MODER register  *****************/
#define GPIO_MODER_MODER_0_ANALOG             ((u32)0x00000003)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_0_OUTPUT             ((u32)0x00000001)
#define GPIO_MODER_MODER_0_ALTERNATE          ((u32)0x00000002)
#define GPIO_MODER_MODER_1_ANALOG             ((u32)0x0000000C)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_1_OUTPUT             ((u32)0x00000004)
#define GPIO_MODER_MODER_1_ALTERNATE		  ((u32)0x00000008)
#define GPIO_MODER_MODER_2_ANALOG             ((u32)0x00000030)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_2_OUTPUT             ((u32)0x00000010)
#define GPIO_MODER_MODER_2_ALTERNATE          ((u32)0x00000020)
#define GPIO_MODER_MODER_3_ANALOG             ((u32)0x000000C0)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_3_OUTPUT             ((u32)0x00000040)
#define GPIO_MODER_MODER_3_ALTERNATE          ((u32)0x00000080)
#define GPIO_MODER_MODER_4_ANALOG             ((u32)0x00000300)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_4_OUTPUT             ((u32)0x00000100)
#define GPIO_MODER_MODER_4_ALTERNATE          ((u32)0x00000200)
#define GPIO_MODER_MODER_5_ANALOG             ((u32)0x00000C00)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_5_OUTPUT             ((u32)0x00000400)
#define GPIO_MODER_MODER_5_ALTERNATE          ((u32)0x00000800)
#define GPIO_MODER_MODER_6_ANALOG             ((u32)0x00003000)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_6_OUTPUT             ((u32)0x00001000)
#define GPIO_MODER_MODER_6_ALTERNATE          ((u32)0x00002000)
#define GPIO_MODER_MODER_7_ANALOG             ((u32)0x0000C000)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_7_OUTPUT             ((u32)0x00004000)
#define GPIO_MODER_MODER_7_ALTERNATE          ((u32)0x00008000)
#define GPIO_MODER_MODER_8_ANALOG             ((u32)0x00030000)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_8_OUTPUT             ((u32)0x00010000)
#define GPIO_MODER_MODER_8_ALTERNATE          ((u32)0x00020000)
#define GPIO_MODER_MODER_9_ANALOG             ((u32)0x000C0000)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_9_OUTPUT             ((u32)0x00040000)
#define GPIO_MODER_MODER_9_ALTERNATE          ((u32)0x00080000)
#define GPIO_MODER_MODER_10_ANALOG            ((u32)0x00300000)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_10_OUTPUT            ((u32)0x00100000)
#define GPIO_MODER_MODER_10_ALTERNATE         ((u32)0x00200000)
#define GPIO_MODER_MODER_11_ANALOG            ((u32)0x00C00000)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_11_OUTPUT            ((u32)0x00400000)
#define GPIO_MODER_MODER_11_ALTERNATE         ((u32)0x00800000)
#define GPIO_MODER_MODER_12_ANALOG            ((u32)0x03000000)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_12_OUTPUT            ((u32)0x01000000)
#define GPIO_MODER_MODER_12_ALTERNATE         ((u32)0x02000000)
#define GPIO_MODER_MODER_13_ANALOG            ((u32)0x0C000000)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_13_OUTPUT            ((u32)0x04000000)
#define GPIO_MODER_MODER_13_ALTERNATE         ((u32)0x08000000)
#define GPIO_MODER_MODER_14_ANALOG            ((u32)0x30000000)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_14_OUTPUT            ((u32)0x10000000)
#define GPIO_MODER_MODER_14_ALTERNATE         ((u32)0x20000000)
#define GPIO_MODER_MODER_15_ANALOG            ((u32)0xC0000000)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_15_OUTPUT            ((u32)0x40000000)
#define GPIO_MODER_MODER_15_ALTERNATE         ((u32)0x80000000)
#define GPIO_MODER_MODER_ALL_ANALOG           ((u32)0xFFFFFFFF)/*Use Clear To Set Input Mode*/
#define GPIO_MODER_MODER_ALL_OUTPUT           ((u32)0x55555555)
#define GPIO_MODER_MODER_ALL_ALTERNATE        ((u32)0xAAAAAAAA)
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
typedef enum{Pin_0,Pin_1,Pin_2,Pin_3,Pin_4,Pin_5,Pin_6,Pin_7,Pin_8,Pin_9,Pin_10,Pin_11,Pin_12,Pin_13,Pin_14,Pin_15}GPIO_PINS;
#endif
/* _GPIO_PRIVATE_H_ */
