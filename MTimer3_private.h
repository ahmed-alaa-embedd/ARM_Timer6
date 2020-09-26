/***********************************/
/* Author : Ahmed Alaa			   */
/* Date : 26/9/2020			 	   */
/* version : V01				   */
/***********************************/



#ifndef MTIMER3_PRIVATE_H
#define MTIMER3_PRIVATE_H

typedef struct
{
	volatile u32 CR1;
	volatile u32 CR2;
	volatile u32 SMCR;
	volatile u32 DIER;
	volatile u32 SR;
	volatile u32 EGR;
	volatile u32 CCMR1_OUT_COMP;
	volatile u32 CCMR1_INP_COMP;
	volatile u32 CCMR2_OUT_COMP;
	volatile u32 CCMR2_INP_COMP;
	volatile u32 CCER;
	volatile u32 CNT;
	volatile u32 PSC;
	volatile u32 ARR;
	volatile u32 Reserved0;
	volatile u32 CCR1;
	volatile u32 CCR2;
	volatile u32 CCR3;
	volatile u32 CCR4;
	volatile u32 Reserved1;
	volatile u32 DCR;
	volatile u32 DMAR;

}MTimer3_Type;

#define MTimer3 ((MTimer3_Type*)0x40000400 )

#endif
