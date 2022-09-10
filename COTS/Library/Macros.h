/*MACROS*/
#ifndef _MACROS_H_
#define _MACROS_H_
/*-------------- File Guard ------------------*/
/* Magic_Numbers */
typedef enum{FALSE,TRUE,ZERO=0,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHTH,NINE,TEN}Magic_Numbers;
/* Bit Math */
#define Set_Port(Reg,Bit)   ((Reg)  =  (Bit))					/* Set Port */
#define Clear_Port(Reg) 	((Reg)  =  (0x0))					/* Clear Port */
#define Set_Bit(Reg,Bit)    ((Reg) |=  (Bit))					/* Set Bit */
#define Clear_Bit(Reg,Bit)  ((Reg) &= ~(Bit))					/* Clear Bit */
#define Get_Bit(Reg,Bit)    ((Reg)  &  (Bit))					/* Get Bit */
/*-------------- File Guard ------------------*/
#endif
_MACROS_H_
