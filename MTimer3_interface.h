/***********************************/
/* Author : Ahmed Alaa			   */
/* Date : 26/9/2020			 	   */
/* version : V01				   */
/***********************************/


#ifndef MTIMER3_interface_H
#define MTIMER3_interface_H

void MTimer3_voidInit();
void MTimer3_voidCounter();
void MTimer3_VoidSetBusyWait(u32 copy_u32ticks);

/*give u interrupt that ticks end
	takes time and function that return to after end*/
void MTimer3_VoidSetIntervalSingle(u32 copyu32ticks,void (*copy_ptr)(void));
void MTimer3_VoidSetIntervalPeriodic(u32 copyu32ticks,void (*copy_ptr)(void));
void MTimer3_VoidStopInterval(void);
u32 MTimer3_U32GetElapsedTime(void);
u32 MTimer3_U32GetRemainingTime(void);



#endif
