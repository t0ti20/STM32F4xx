/*------------------------------- INCLUDE -------------------------------*/
#include "GPIO_Interface.h"
/******************************************************************************/
/*                                SINGLE  PIN                                 */
/******************************************************************************/
/*------------------------- Set Pin State -------------------------*/
void GPIO_VidSet_Pin(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8State)
{
	switch(Copy_u8Port)
	{
		case(Port_A):
				switch (Copy_u8Pin)
				{
					case (Pin_0):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_0_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_0_Clear);break;
					case (Pin_1):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_1_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_1_Clear);break;
					case (Pin_2):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_2_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_2_Clear);break;
					case (Pin_3):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_3_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_3_Clear);break;
					case (Pin_4):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_4_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_4_Clear);break;
					case (Pin_5):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_5_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_5_Clear);break;
					case (Pin_6):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_6_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_6_Clear);break;
					case (Pin_7):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_7_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_7_Clear);break;
					case (Pin_8):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_8_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_8_Clear);break;
					case (Pin_9):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_9_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_9_Clear);break;
					case (Pin_10):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_10_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_10_Clear);break;
					case (Pin_11):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_11_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_11_Clear);break;
					case (Pin_12):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_12_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_12_Clear);break;
					case (Pin_13):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_13_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_13_Clear);break;
					case (Pin_14):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_14_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_14_Clear);break;
					case (Pin_15):if(Copy_u8State==Hi){Set_Bit(GPIO_A->BSRR,GPIO_BSRR_15_Set);}
								 else Set_Bit(GPIO_A->BSRR,GPIO_BSRR_15_Clear);break;
					default:break;
				}
		break;
		case(Port_B):
				switch (Copy_u8Pin)
				{
					case (Pin_0):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_0_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_0_Clear);break;
					case (Pin_1):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_1_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_1_Clear);break;
					case (Pin_2):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_2_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_2_Clear);break;
					case (Pin_3):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_3_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_3_Clear);break;
					case (Pin_4):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_4_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_4_Clear);break;
					case (Pin_5):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_5_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_5_Clear);break;
					case (Pin_6):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_6_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_6_Clear);break;
					case (Pin_7):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_7_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_7_Clear);break;
					case (Pin_8):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_8_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_8_Clear);break;
					case (Pin_9):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_9_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_9_Clear);break;
					case (Pin_10):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_10_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_10_Clear);break;
					case (Pin_11):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_11_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_11_Clear);break;
					case (Pin_12):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_12_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_12_Clear);break;
					case (Pin_13):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_13_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_13_Clear);break;
					case (Pin_14):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_14_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_14_Clear);break;
					case (Pin_15):if(Copy_u8State==Hi){Set_Bit(GPIO_B->BSRR,GPIO_BSRR_15_Set);}
								 else Set_Bit(GPIO_B->BSRR,GPIO_BSRR_15_Clear);break;
					default:break;
				}
		break;
		case(Port_C):
				switch (Copy_u8Pin)
				{
					case (Pin_0):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_0_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_0_Clear);break;
					case (Pin_1):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_1_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_1_Clear);break;
					case (Pin_2):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_2_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_2_Clear);break;
					case (Pin_3):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_3_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_3_Clear);break;
					case (Pin_4):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_4_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_4_Clear);break;
					case (Pin_5):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_5_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_5_Clear);break;
					case (Pin_6):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_6_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_6_Clear);break;
					case (Pin_7):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_7_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_7_Clear);break;
					case (Pin_8):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_8_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_8_Clear);break;
					case (Pin_9):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_9_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_9_Clear);break;
					case (Pin_10):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_10_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_10_Clear);break;
					case (Pin_11):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_11_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_11_Clear);break;
					case (Pin_12):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_12_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_12_Clear);break;
					case (Pin_13):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_13_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_13_Clear);break;
					case (Pin_14):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_14_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_14_Clear);break;
					case (Pin_15):if(Copy_u8State==Hi){Set_Bit(GPIO_C->BSRR,GPIO_BSRR_15_Set);}
								 else Set_Bit(GPIO_C->BSRR,GPIO_BSRR_15_Clear);break;
					default:break;
				}
		break;
		case(Port_D):
				switch (Copy_u8Pin)
				{
					case (Pin_0):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_0_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_0_Clear);break;
					case (Pin_1):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_1_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_1_Clear);break;
					case (Pin_2):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_2_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_2_Clear);break;
					case (Pin_3):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_3_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_3_Clear);break;
					case (Pin_4):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_4_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_4_Clear);break;
					case (Pin_5):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_5_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_5_Clear);break;
					case (Pin_6):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_6_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_6_Clear);break;
					case (Pin_7):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_7_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_7_Clear);break;
					case (Pin_8):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_8_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_8_Clear);break;
					case (Pin_9):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_9_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_9_Clear);break;
					case (Pin_10):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_10_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_10_Clear);break;
					case (Pin_11):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_11_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_11_Clear);break;
					case (Pin_12):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_12_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_12_Clear);break;
					case (Pin_13):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_13_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_13_Clear);break;
					case (Pin_14):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_14_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_14_Clear);break;
					case (Pin_15):if(Copy_u8State==Hi){Set_Bit(GPIO_D->BSRR,GPIO_BSRR_15_Set);}
								 else Set_Bit(GPIO_D->BSRR,GPIO_BSRR_15_Clear);break;
					default:break;
				}
		break;
		case(Port_E):
				switch (Copy_u8Pin)
				{
					case (Pin_0):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_0_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_0_Clear);break;
					case (Pin_1):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_1_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_1_Clear);break;
					case (Pin_2):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_2_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_2_Clear);break;
					case (Pin_3):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_3_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_3_Clear);break;
					case (Pin_4):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_4_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_4_Clear);break;
					case (Pin_5):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_5_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_5_Clear);break;
					case (Pin_6):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_6_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_6_Clear);break;
					case (Pin_7):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_7_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_7_Clear);break;
					case (Pin_8):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_8_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_8_Clear);break;
					case (Pin_9):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_9_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_9_Clear);break;
					case (Pin_10):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_10_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_10_Clear);break;
					case (Pin_11):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_11_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_11_Clear);break;
					case (Pin_12):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_12_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_12_Clear);break;
					case (Pin_13):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_13_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_13_Clear);break;
					case (Pin_14):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_14_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_14_Clear);break;
					case (Pin_15):if(Copy_u8State==Hi){Set_Bit(GPIO_E->BSRR,GPIO_BSRR_15_Set);}
								 else Set_Bit(GPIO_E->BSRR,GPIO_BSRR_15_Clear);break;
					default:break;
				}
		break;
		default:break;
	}
}
/*------------------------- Set Pin Output Configurations -------------------------*/
void GPIO_VidPin_Mode_Output(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Type,u8 Copy_u8Speed)
{
	GPIO_VidPin_Mode(Copy_u8Port,Copy_u8Pin,GPIO_Output);
	switch(Copy_u8Port)
	{
		case(Port_A):
				switch (Copy_u8Pin)
				{
					case (Pin_0):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_0);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_0);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_0_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(Copy_u8PortAddress->PUPDR,GPIO_PUPDR_0_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_0_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_0_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_0_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_0_HI);}
					break;
					case (Pin_1):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_1);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_1);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_1_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_1_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_1_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_1_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_1_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_1_HI);}
					break;
					case (Pin_2):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_2);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_2);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_2_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_2_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_2_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_2_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_2_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_2_HI);}
					break;
					case (Pin_3):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_3);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_3);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_3_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_3_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_3_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_3_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_3_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_3_HI);}
					break;
					case (Pin_4):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_4);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_4);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_4_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_4_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_4_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_4_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_4_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_4_HI);}
					break;
					case (Pin_5):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_5);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_5);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_5_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_5_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_5_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_5_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_5_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_5_HI);}
					break;
					case (Pin_6):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_6);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_6);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_6_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_6_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_6_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_6_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_6_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_6_HI);}
					break;
					case (Pin_7):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_7);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_7);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_7_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_7_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_7_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_7_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_7_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_7_HI);}
					break;
					case (Pin_8):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_8);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_8);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_8_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_8_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_8_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_8_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_8_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_8_HI);}
					break;
					case (Pin_9):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_9);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_9);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_9_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_9_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_9_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_9_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_9_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_9_HI);}
					break;
					case (Pin_10):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_10);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_10);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_10_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_10_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_10_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_10_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_10_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_10_HI);}
					break;
					case (Pin_11):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_11);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_11);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_11_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_11_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_11_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_11_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_11_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_11_HI);}
					break;
					case (Pin_12):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_12);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_12);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_12_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_12_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_12_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_12_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_12_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_12_HI);}
					break;
					case (Pin_13):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_13);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_13);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_13_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_13_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_13_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_13_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_13_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_13_HI);}
					break;
					case (Pin_14):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_14);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_14);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_14_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_14_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_14_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_14_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_14_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_14_HI);}
					break;
					case (Pin_15):
							/*Select Output Type*/
							if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_A->OTYPER,GPIO_OTYPER_15);}
							else if (Copy_u8Type==Open_Drain)
							{
								Set_Bit(GPIO_A->OTYPER,GPIO_OTYPER_15);
							#if Open_Drain_Pull == Pull_Up
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_15_Pull_Up);
							#elif Open_Drain_Pull == Pull_Down
								Set_Bit(GPIO_A->PUPDR,GPIO_PUPDR_15_Pull_Down);
							#endif
							}
							/*Select Operating Speed*/
							if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_15_HI);}
							else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_15_Medium);}
							else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_15_Fast);}
							else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_A->OSPEEDR,GPIO_OSPEEDR_15_HI);}
					break;
					default:break;
				}
		break;
		case(Port_B):
			switch (Copy_u8Pin)
			{
				case (Pin_0):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_0);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_0);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_0_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(Copy_u8PortAddress->PUPDR,GPIO_PUPDR_0_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_0_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_0_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_0_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_0_HI);}
				break;
				case (Pin_1):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_1);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_1);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_1_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_1_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_1_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_1_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_1_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_1_HI);}
				break;
				case (Pin_2):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_2);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_2);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_2_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_2_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_2_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_2_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_2_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_2_HI);}
				break;
				case (Pin_3):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_3);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_3);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_3_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_3_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_3_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_3_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_3_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_3_HI);}
				break;
				case (Pin_4):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_4);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_4);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_4_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_4_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_4_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_4_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_4_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_4_HI);}
				break;
				case (Pin_5):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_5);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_5);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_5_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_5_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_5_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_5_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_5_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_5_HI);}
				break;
				case (Pin_6):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_6);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_6);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_6_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_6_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_6_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_6_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_6_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_6_HI);}
				break;
				case (Pin_7):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_7);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_7);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_7_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_7_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_7_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_7_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_7_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_7_HI);}
				break;
				case (Pin_8):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_8);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_8);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_8_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_8_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_8_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_8_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_8_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_8_HI);}
				break;
				case (Pin_9):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_9);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_9);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_9_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_9_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_9_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_9_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_9_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_9_HI);}
				break;
				case (Pin_10):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_10);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_10);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_10_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_10_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_10_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_10_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_10_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_10_HI);}
				break;
				case (Pin_11):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_11);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_11);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_11_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_11_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_11_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_11_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_11_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_11_HI);}
				break;
				case (Pin_12):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_12);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_12);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_12_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_12_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_12_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_12_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_12_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_12_HI);}
				break;
				case (Pin_13):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_13);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_13);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_13_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_13_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_13_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_13_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_13_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_13_HI);}
				break;
				case (Pin_14):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_14);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_14);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_14_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_14_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_14_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_14_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_14_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_14_HI);}
				break;
				case (Pin_15):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_B->OTYPER,GPIO_OTYPER_15);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_B->OTYPER,GPIO_OTYPER_15);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_15_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_B->PUPDR,GPIO_PUPDR_15_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_15_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_15_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_15_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_B->OSPEEDR,GPIO_OSPEEDR_15_HI);}
				break;
				default:break;
			}
		break;
		case(Port_C):
			switch (Copy_u8Pin)
			{
				case (Pin_0):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_0);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_0);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_0_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(Copy_u8PortAddress->PUPDR,GPIO_PUPDR_0_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_0_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_0_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_0_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_0_HI);}
				break;
				case (Pin_1):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_1);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_1);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_1_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_1_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_1_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_1_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_1_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_1_HI);}
				break;
				case (Pin_2):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_2);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_2);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_2_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_2_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_2_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_2_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_2_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_2_HI);}
				break;
				case (Pin_3):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_3);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_3);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_3_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_3_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_3_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_3_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_3_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_3_HI);}
				break;
				case (Pin_4):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_4);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_4);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_4_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_4_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_4_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_4_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_4_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_4_HI);}
				break;
				case (Pin_5):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_5);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_5);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_5_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_5_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_5_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_5_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_5_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_5_HI);}
				break;
				case (Pin_6):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_6);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_6);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_6_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_6_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_6_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_6_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_6_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_6_HI);}
				break;
				case (Pin_7):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_7);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_7);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_7_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_7_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_7_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_7_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_7_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_7_HI);}
				break;
				case (Pin_8):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_8);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_8);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_8_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_8_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_8_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_8_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_8_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_8_HI);}
				break;
				case (Pin_9):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_9);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_9);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_9_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_9_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_9_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_9_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_9_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_9_HI);}
				break;
				case (Pin_10):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_10);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_10);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_10_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_10_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_10_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_10_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_10_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_10_HI);}
				break;
				case (Pin_11):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_11);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_11);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_11_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_11_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_11_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_11_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_11_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_11_HI);}
				break;
				case (Pin_12):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_12);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_12);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_12_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_12_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_12_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_12_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_12_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_12_HI);}
				break;
				case (Pin_13):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_13);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_13);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_13_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_13_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_13_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_13_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_13_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_13_HI);}
				break;
				case (Pin_14):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_14);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_14);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_14_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_14_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_14_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_14_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_14_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_14_HI);}
				break;
				case (Pin_15):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_C->OTYPER,GPIO_OTYPER_15);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_C->OTYPER,GPIO_OTYPER_15);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_15_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_C->PUPDR,GPIO_PUPDR_15_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_15_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_15_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_15_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_C->OSPEEDR,GPIO_OSPEEDR_15_HI);}
				break;
				default:break;
			}
		break;
		case(Port_D):
			switch (Copy_u8Pin)
			{
				case (Pin_0):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_0);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_0);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_0_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(Copy_u8PortAddress->PUPDR,GPIO_PUPDR_0_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_0_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_0_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_0_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_0_HI);}
				break;
				case (Pin_1):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_1);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_1);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_1_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_1_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_1_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_1_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_1_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_1_HI);}
				break;
				case (Pin_2):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_2);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_2);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_2_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_2_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_2_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_2_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_2_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_2_HI);}
				break;
				case (Pin_3):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_3);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_3);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_3_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_3_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_3_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_3_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_3_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_3_HI);}
				break;
				case (Pin_4):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_4);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_4);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_4_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_4_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_4_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_4_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_4_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_4_HI);}
				break;
				case (Pin_5):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_5);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_5);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_5_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_5_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_5_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_5_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_5_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_5_HI);}
				break;
				case (Pin_6):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_6);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_6);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_6_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_6_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_6_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_6_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_6_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_6_HI);}
				break;
				case (Pin_7):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_7);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_7);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_7_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_7_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_7_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_7_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_7_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_7_HI);}
				break;
				case (Pin_8):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_8);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_8);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_8_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_8_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_8_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_8_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_8_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_8_HI);}
				break;
				case (Pin_9):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_9);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_9);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_9_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_9_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_9_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_9_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_9_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_9_HI);}
				break;
				case (Pin_10):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_10);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_10);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_10_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_10_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_10_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_10_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_10_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_10_HI);}
				break;
				case (Pin_11):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_11);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_11);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_11_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_11_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_11_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_11_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_11_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_11_HI);}
				break;
				case (Pin_12):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_12);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_12);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_12_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_12_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_12_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_12_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_12_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_12_HI);}
				break;
				case (Pin_13):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_13);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_13);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_13_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_13_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_13_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_13_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_13_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_13_HI);}
				break;
				case (Pin_14):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_14);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_14);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_14_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_14_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_14_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_14_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_14_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_14_HI);}
				break;
				case (Pin_15):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_D->OTYPER,GPIO_OTYPER_15);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_D->OTYPER,GPIO_OTYPER_15);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_15_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_D->PUPDR,GPIO_PUPDR_15_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_15_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_15_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_15_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_D->OSPEEDR,GPIO_OSPEEDR_15_HI);}
				break;
				default:break;
			}
		break;
		case(Port_E):
			switch (Copy_u8Pin)
			{
				case (Pin_0):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_0);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_0);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_0_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(Copy_u8PortAddress->PUPDR,GPIO_PUPDR_0_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_0_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_0_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_0_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_0_HI);}
				break;
				case (Pin_1):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_1);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_1);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_1_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_1_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_1_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_1_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_1_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_1_HI);}
				break;
				case (Pin_2):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_2);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_2);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_2_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_2_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_2_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_2_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_2_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_2_HI);}
				break;
				case (Pin_3):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_3);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_3);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_3_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_3_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_3_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_3_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_3_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_3_HI);}
				break;
				case (Pin_4):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_4);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_4);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_4_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_4_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_4_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_4_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_4_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_4_HI);}
				break;
				case (Pin_5):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_5);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_5);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_5_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_5_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_5_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_5_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_5_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_5_HI);}
				break;
				case (Pin_6):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_6);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_6);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_6_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_6_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_6_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_6_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_6_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_6_HI);}
				break;
				case (Pin_7):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_7);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_7);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_7_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_7_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_7_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_7_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_7_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_7_HI);}
				break;
				case (Pin_8):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_8);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_8);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_8_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_8_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_8_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_8_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_8_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_8_HI);}
				break;
				case (Pin_9):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_9);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_9);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_9_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_9_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_9_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_9_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_9_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_9_HI);}
				break;
				case (Pin_10):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_10);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_10);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_10_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_10_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_10_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_10_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_10_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_10_HI);}
				break;
				case (Pin_11):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_11);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_11);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_11_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_11_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_11_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_11_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_11_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_11_HI);}
				break;
				case (Pin_12):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_12);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_12);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_12_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_12_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_12_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_12_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_12_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_12_HI);}
				break;
				case (Pin_13):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_13);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_13);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_13_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_13_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_13_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_13_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_13_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_13_HI);}
				break;
				case (Pin_14):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_14);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_14);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_14_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_14_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_14_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_14_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_14_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_14_HI);}
				break;
				case (Pin_15):
						/*Select Output Type*/
						if(Copy_u8Type==Push_Pull){Clear_Bit(GPIO_E->OTYPER,GPIO_OTYPER_15);}
						else if (Copy_u8Type==Open_Drain)
						{
							Set_Bit(GPIO_E->OTYPER,GPIO_OTYPER_15);
						#if Open_Drain_Pull == Pull_Up
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_15_Pull_Up);
						#elif Open_Drain_Pull == Pull_Down
							Set_Bit(GPIO_E->PUPDR,GPIO_PUPDR_15_Pull_Down);
						#endif
						}
						/*Select Operating Speed*/
						if(Copy_u8Speed==Low_Speed){Clear_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_15_HI);}
						else if(Copy_u8Speed==Medium_Speed){Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_15_Medium);}
						else if(Copy_u8Speed==Fast_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_15_Fast);}
						else if(Copy_u8Speed==High_Speed){/*Enable Compensation Cell*/Set_Bit(GPIO_E->OSPEEDR,GPIO_OSPEEDR_15_HI);}
				break;
				default:break;
			}
		break;
		default:break;
	}
}
/*------------------------- Set Pin Mode -------------------------*/
void GPIO_VidPin_Mode(u8 Copy_u8Port,u8 Copy_u8Pin,u8 Copy_u8Mode)
{
	RCC_VidPort_Clock(Copy_u8Port,Clock_Enable);
	switch(Copy_u8Port)
	{
		case(Port_A):
			switch (Copy_u8Pin)
			{
				case (Pin_0):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_0_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_0_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_0_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_0_ANALOG);}
					break;
				case (Pin_1):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_1_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_1_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_1_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_1_ANALOG);}
					break;
				case (Pin_2):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_2_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_2_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_2_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_2_ANALOG);}
					break;
				case (Pin_3):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_3_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_3_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_3_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_3_ANALOG);}
					break;
				case (Pin_4):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_4_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_4_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_4_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_4_ANALOG);}
					break;
				case (Pin_5):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_5_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_5_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_5_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_5_ANALOG);}
					break;
				case (Pin_6):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_6_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_6_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_6_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_6_ANALOG);}
					break;
				case (Pin_7):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_7_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_7_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_7_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_7_ANALOG);}
					break;
				case (Pin_8):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_8_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_8_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_8_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_8_ANALOG);}
					break;
				case (Pin_9):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_9_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_9_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_9_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_9_ANALOG);}
					break;
				case (Pin_10):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_10_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_10_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_10_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_10_ANALOG);}
					break;
				case (Pin_11):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_11_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_11_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_11_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_11_ANALOG);}
					break;
				case (Pin_12):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_12_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_12_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_12_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_12_ANALOG);}
					break;
				case (Pin_13):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_13_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_13_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_13_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_13_ANALOG);}
					break;
				case (Pin_14):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_14_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_14_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_14_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_14_ANALOG);}
					break;
				case (Pin_15):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_15_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_15_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_A->MODER,GPIO_MODER_MODER_15_ANALOG);}
						else{Clear_Bit(GPIO_A->MODER,GPIO_MODER_MODER_15_ANALOG);}
					break;
				default:break;
			}
			break;
		case(Port_B):
			switch (Copy_u8Pin)
			{
				case (Pin_0):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_0_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_0_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_0_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_0_ANALOG);}
					break;
				case (Pin_1):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_1_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_1_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_1_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_1_ANALOG);}
					break;
				case (Pin_2):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_2_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_2_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_2_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_2_ANALOG);}
					break;
				case (Pin_3):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_3_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_3_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_3_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_3_ANALOG);}
					break;
				case (Pin_4):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_4_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_4_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_4_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_4_ANALOG);}
					break;
				case (Pin_5):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_5_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_5_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_5_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_5_ANALOG);}
					break;
				case (Pin_6):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_6_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_6_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_6_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_6_ANALOG);}
					break;
				case (Pin_7):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_7_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_7_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_7_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_7_ANALOG);}
					break;
				case (Pin_8):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_8_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_8_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_8_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_8_ANALOG);}
					break;
				case (Pin_9):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_9_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_9_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_9_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_9_ANALOG);}
					break;
				case (Pin_10):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_10_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_10_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_10_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_10_ANALOG);}
					break;
				case (Pin_11):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_11_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_11_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_11_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_11_ANALOG);}
					break;
				case (Pin_12):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_12_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_12_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_12_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_12_ANALOG);}
					break;
				case (Pin_13):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_13_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_13_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_13_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_13_ANALOG);}
					break;
				case (Pin_14):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_14_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_14_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_14_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_14_ANALOG);}
					break;
				case (Pin_15):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_15_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_15_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_B->MODER,GPIO_MODER_MODER_15_ANALOG);}
						else{Clear_Bit(GPIO_B->MODER,GPIO_MODER_MODER_15_ANALOG);}
					break;
				default:break;
			}
			break;
		case(Port_C):
				switch (Copy_u8Pin)
				{
					case (Pin_0):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_0_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_0_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_0_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_0_ANALOG);}
						break;
					case (Pin_1):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_1_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_1_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_1_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_1_ANALOG);}
						break;
					case (Pin_2):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_2_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_2_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_2_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_2_ANALOG);}
						break;
					case (Pin_3):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_3_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_3_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_3_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_3_ANALOG);}
						break;
					case (Pin_4):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_4_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_4_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_4_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_4_ANALOG);}
						break;
					case (Pin_5):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_5_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_5_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_5_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_5_ANALOG);}
						break;
					case (Pin_6):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_6_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_6_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_6_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_6_ANALOG);}
						break;
					case (Pin_7):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_7_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_7_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_7_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_7_ANALOG);}
						break;
					case (Pin_8):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_8_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_8_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_8_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_8_ANALOG);}
						break;
					case (Pin_9):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_9_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_9_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_9_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_9_ANALOG);}
						break;
					case (Pin_10):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_10_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_10_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_10_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_10_ANALOG);}
						break;
					case (Pin_11):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_11_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_11_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_11_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_11_ANALOG);}
						break;
					case (Pin_12):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_12_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_12_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_12_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_12_ANALOG);}
						break;
					case (Pin_13):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_13_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_13_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_13_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_13_ANALOG);}
						break;
					case (Pin_14):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_14_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_14_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_14_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_14_ANALOG);}
						break;
					case (Pin_15):
							if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_15_OUTPUT);}
							else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_15_ALTERNATE);}
							else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_C->MODER,GPIO_MODER_MODER_15_ANALOG);}
							else{Clear_Bit(GPIO_C->MODER,GPIO_MODER_MODER_15_ANALOG);}
						break;
					default:break;
			}
			break;
		case(Port_D):
			switch (Copy_u8Pin)
			{
				case (Pin_0):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_0_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_0_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_0_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_0_ANALOG);}
					break;
				case (Pin_1):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_1_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_1_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_1_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_1_ANALOG);}
					break;
				case (Pin_2):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_2_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_2_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_2_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_2_ANALOG);}
					break;
				case (Pin_3):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_3_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_3_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_3_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_3_ANALOG);}
					break;
				case (Pin_4):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_4_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_4_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_4_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_4_ANALOG);}
					break;
				case (Pin_5):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_5_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_5_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_5_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_5_ANALOG);}
					break;
				case (Pin_6):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_6_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_6_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_6_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_6_ANALOG);}
					break;
				case (Pin_7):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_7_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_7_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_7_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_7_ANALOG);}
					break;
				case (Pin_8):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_8_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_8_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_8_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_8_ANALOG);}
					break;
				case (Pin_9):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_9_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_9_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_9_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_9_ANALOG);}
					break;
				case (Pin_10):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_10_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_10_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_10_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_10_ANALOG);}
					break;
				case (Pin_11):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_11_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_11_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_11_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_11_ANALOG);}
					break;
				case (Pin_12):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_12_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_12_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_12_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_12_ANALOG);}
					break;
				case (Pin_13):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_13_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_13_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_13_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_13_ANALOG);}
					break;
				case (Pin_14):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_14_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_14_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_14_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_14_ANALOG);}
					break;
				case (Pin_15):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_15_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_15_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_D->MODER,GPIO_MODER_MODER_15_ANALOG);}
						else{Clear_Bit(GPIO_D->MODER,GPIO_MODER_MODER_15_ANALOG);}
					break;
				default:break;
			}
			break;
		case(Port_E):
			switch (Copy_u8Pin)
			{
				case (Pin_0):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_0_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_0_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_0_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_0_ANALOG);}
					break;
				case (Pin_1):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_1_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_1_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_1_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_1_ANALOG);}
					break;
				case (Pin_2):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_2_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_2_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_2_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_2_ANALOG);}
					break;
				case (Pin_3):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_3_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_3_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_3_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_3_ANALOG);}
					break;
				case (Pin_4):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_4_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_4_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_4_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_4_ANALOG);}
					break;
				case (Pin_5):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_5_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_5_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_5_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_5_ANALOG);}
					break;
				case (Pin_6):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_6_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_6_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_6_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_6_ANALOG);}
					break;
				case (Pin_7):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_7_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_7_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_7_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_7_ANALOG);}
					break;
				case (Pin_8):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_8_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_8_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_8_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_8_ANALOG);}
					break;
				case (Pin_9):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_9_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_9_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_9_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_9_ANALOG);}
					break;
				case (Pin_10):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_10_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_10_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_10_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_10_ANALOG);}
					break;
				case (Pin_11):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_11_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_11_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_11_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_11_ANALOG);}
					break;
				case (Pin_12):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_12_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_12_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_12_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_12_ANALOG);}
					break;
				case (Pin_13):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_13_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_13_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_13_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_13_ANALOG);}
					break;
				case (Pin_14):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_14_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_14_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_14_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_14_ANALOG);}
					break;
				case (Pin_15):
						if(Copy_u8Mode==GPIO_Output){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_15_OUTPUT);}
						else if(Copy_u8Mode==GPIO_Alternate){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_15_ALTERNATE);}
						else if(Copy_u8Mode==GPIO_Analog){Set_Bit(GPIO_E->MODER,GPIO_MODER_MODER_15_ANALOG);}
						else{Clear_Bit(GPIO_E->MODER,GPIO_MODER_MODER_15_ANALOG);}
					break;
				default:break;
			}
			break;
		default:break;
	}
}
/******************************************************************************/
/*                                WHOLE  PORT                                 */
/******************************************************************************/
/*------------------------- SET PORT MODE -------------------------*/
void GPIO_VidPort_Mode(u8 Copy_u8Port,u8 Copy_u8Mode)
{
	RCC_VidPort_Clock(Copy_u8Port,Clock_Enable);
	switch(Copy_u8Port)
		{
		case(Port_A):
			switch (Copy_u8Mode)
			{
				case(GPIO_Output):Set_Port(GPIO_A->MODER,GPIO_MODER_MODER_ALL_OUTPUT);break;
				case(GPIO_Alternate):Set_Port(GPIO_A->MODER,GPIO_MODER_MODER_ALL_ALTERNATE);break;
				case(GPIO_Analog):Set_Port(GPIO_A->MODER,GPIO_MODER_MODER_ALL_ANALOG);break;
				default:Clear_Port(GPIO_A->MODER);break;
			}
			break;
		case(Port_B):
				switch (Copy_u8Mode)
					{
						case(GPIO_Output):Set_Port(GPIO_B->MODER,GPIO_MODER_MODER_ALL_OUTPUT);break;
						case(GPIO_Alternate):Set_Port(GPIO_B->MODER,GPIO_MODER_MODER_ALL_ALTERNATE);break;
						case(GPIO_Analog):Set_Port(GPIO_B->MODER,GPIO_MODER_MODER_ALL_ANALOG);break;
						default:Clear_Port(GPIO_B->MODER);break;
					}
				break;
		case(Port_C):
				switch (Copy_u8Mode)
					{
						case(GPIO_Output):Set_Port(GPIO_C->MODER,GPIO_MODER_MODER_ALL_OUTPUT);break;
						case(GPIO_Alternate):Set_Port(GPIO_C->MODER,GPIO_MODER_MODER_ALL_ALTERNATE);break;
						case(GPIO_Analog):Set_Port(GPIO_C->MODER,GPIO_MODER_MODER_ALL_ANALOG);break;
						default:Clear_Port(GPIO_C->MODER);break;
					}
				break;
		case(Port_D):
				switch (Copy_u8Mode)
					{
						case(GPIO_Output):Set_Port(GPIO_D->MODER,GPIO_MODER_MODER_ALL_OUTPUT);break;
						case(GPIO_Alternate):Set_Port(GPIO_D->MODER,GPIO_MODER_MODER_ALL_ALTERNATE);break;
						case(GPIO_Analog):Set_Port(GPIO_D->MODER,GPIO_MODER_MODER_ALL_ANALOG);break;
						default:Clear_Port(GPIO_D->MODER);break;
					}
				break;
		case(Port_E):
				switch (Copy_u8Mode)
					{
						case(GPIO_Output):Set_Port(GPIO_E->MODER,GPIO_MODER_MODER_ALL_OUTPUT);break;
						case(GPIO_Alternate):Set_Port(GPIO_E->MODER,GPIO_MODER_MODER_ALL_ALTERNATE);break;
						case(GPIO_Analog):Set_Port(GPIO_E->MODER,GPIO_MODER_MODER_ALL_ANALOG);break;
						default:Clear_Port(GPIO_E->MODER);break;
					}
				break;
		default:break;
		}
}








