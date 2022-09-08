/*File Guard*/
#ifndef _RCC_PRIVATE_H_
#define _RCC_PRIVATE_H_
/********************  Include ********************/
#include "../../Library/Standard_Types.h"
/********************  Peripheral Address Configure ***************/
#define PERIPH_BASE_RCC       ((u32)0x40000000)
#define AHB1PERIPH_BASE_RCC   (PERIPH_BASE_RCC + 0x00020000)
#define RCC_BASE              (AHB1PERIPH_BASE_RCC + 0x3800)
#define RESET_CONTROL         ((RCC_Register *) RCC_BASE)
/********************  Register definition for RCC ***************/
typedef struct
{
volatile u32 CR;            /*RCC clock control register*/
volatile u32 PLLCFGR;       /*RCC PLL configuration register*/
volatile u32 CFGR;          /*RCC clock configuration register*/
volatile u32 CIR;           /*RCC clock interrupt register*/
volatile u32 AHB1RSTR;      /*RCC AHB1 peripheral reset register*/
volatile u32 AHB2RSTR;      /*RCC AHB2 peripheral reset register*/
volatile u32 AHB3RSTR;      /*RCC AHB3 peripheral reset register*/
 	 	 u32 RESERVED0;   	 /*Reserved*/
volatile u32 APB1RSTR;      /*RCC APB1 peripheral reset register*/
volatile u32 APB2RSTR;      /*RCC APB2 peripheral reset register*/
 	 	 u32 RESERVED1[2];  /*Reserved*/
volatile u32 AHB1ENR;       /*RCC AHB1 peripheral clock register*/
volatile u32 AHB2ENR;       /*RCC AHB2 peripheral clock register*/
volatile u32 AHB3ENR;       /*RCC AHB3 peripheral clock register*/
 	 	 u32 RESERVED2;     /*Reserved*/
volatile u32 APB1ENR;       /*RCC APB1 peripheral clock enable register*/
volatile u32 APB2ENR;       /*RCC APB2 peripheral clock enable register*/
		 u32 RESERVED3[2];  /*Reserved*/
volatile u32 AHB1LPENR;     /*RCC AHB1 peripheral clock enable in low power mode register*/
volatile u32 AHB2LPENR;     /*RCC AHB2 peripheral clock enable in low power mode register*/
volatile u32 AHB3LPENR;     /*RCC AHB3 peripheral clock enable in low power mode register*/
		 u32 RESERVED4;     /*Reserved*/
volatile u32 APB1LPENR;     /*RCC APB1 peripheral clock enable in low power mode register*/
volatile u32 APB2LPENR;     /*RCC APB2 peripheral clock enable in low power mode register*/
		 u32 RESERVED5[2];  /*Reserved*/
volatile u32 BDCR;          /*RCC Backup domain control register*/
volatile u32 CSR;           /*RCC clock control & status register*/
		 u32 RESERVED6[2];  /*Reserved*/
volatile u32 SSCGR;         /*RCC spread spectrum clock generation register*/
volatile u32 PLLI2SCFGR;    /*RCC PLLI2S configuration register*/
} RCC_Register;
/********************  Bit definition for RCC_AHB1ENR register  ***************/
#define  RCC_AHB1ENR_GPIOAEN                 ((u32)0x00000001)
#define  RCC_AHB1ENR_GPIOBEN                 ((u32)0x00000002)
#define  RCC_AHB1ENR_GPIOCEN                 ((u32)0x00000004)
#define  RCC_AHB1ENR_GPIODEN                 ((u32)0x00000008)
#define  RCC_AHB1ENR_GPIOEEN                 ((u32)0x00000010)
#define  RCC_AHB1ENR_GPIOFEN                 ((u32)0x00000020)
#define  RCC_AHB1ENR_GPIOGEN                 ((u32)0x00000040)
#define  RCC_AHB1ENR_GPIOHEN                 ((u32)0x00000080)
#define  RCC_AHB1ENR_GPIOIEN                 ((u32)0x00000100)
#define  RCC_AHB1ENR_CRCEN                   ((u32)0x00001000)
#define  RCC_AHB1ENR_BKPSRAMEN               ((u32)0x00040000)
#define  RCC_AHB1ENR_CCMDATARAMEN            ((u32)0x00100000)
#define  RCC_AHB1ENR_DMA1EN                  ((u32)0x00200000)
#define  RCC_AHB1ENR_DMA2EN                  ((u32)0x00400000)
#define  RCC_AHB1ENR_ETHMACEN                ((u32)0x02000000)
#define  RCC_AHB1ENR_ETHMACTXEN              ((u32)0x04000000)
#define  RCC_AHB1ENR_ETHMACRXEN              ((u32)0x08000000)
#define  RCC_AHB1ENR_ETHMACPTPEN             ((u32)0x10000000)
#define  RCC_AHB1ENR_OTGHSEN                 ((u32)0x20000000)
#define  RCC_AHB1ENR_OTGHSULPIEN             ((u32)0x40000000)
/********************  Ports Definitions  ***************/
typedef enum{Port_A,Port_B,Port_C,Port_D,Port_E}RCC_PORTS;
typedef enum{Clock_Disable,Clock_Enable}RCC_CLOCK;
#endif
/* _RCC_PRIVATE_H_ */
