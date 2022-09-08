#include "../Libraries/COTS/MCAL/GPIO/GPIO_Interface.h"
//#include "stm32f4xx.h"

#define DELAY_COUNT    ( 50000 )

static void delay_ms( void )
{
    u32 i = 0;
    for( i=0; i<=DELAY_COUNT; i++ );
}

u8 pin[]={Pin_0,Pin_1,Pin_2,Pin_3,Pin_4,Pin_5,Pin_6,Pin_7,Pin_8,Pin_9,Pin_10,Pin_11,Pin_12,Pin_13,Pin_14,Pin_15};
u8 port[]={Port_A,Port_B,Port_C,Port_D,Port_E};
int main(void)
{
	for(u8 c=0;c<5;c++)
	  for(u8 i=0;i<16;i++)
		  GPIO_VidPin_Mode_Output(port[c],pin[i],Push_Pull,Low_Speed);
	while(1)
	{
		for(u8 c=0;c<5;c++)
		{
			for(u8 i=0;i<16;i++)GPIO_VidSet_Pin(port[c],pin[i],Hi);
		}
		delay_ms();
		for(u8 c=0;c<5;c++)
		{
			for(u8 i=0;i<16;i++)GPIO_VidSet_Pin(port[c],pin[i],Low);
		}
		delay_ms();
	}
}
