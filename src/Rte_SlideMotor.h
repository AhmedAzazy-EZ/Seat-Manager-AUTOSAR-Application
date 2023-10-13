/**
 *
 * \brief Sprints AUTOSAR Master Class - SeatCtrlApp
 * \author Hassan Farahat
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */
 
#ifndef RTE_SLIDEMOTOR_H
#define RTE_SLIDEMOTOR_H

#include "Rte_SlideMotor_Type.h"

#define Rte_Call_rpSlideMotorMove_IoSetForward 			Rte_Call_SlideMotor_rpIOSetSlide_IOSetForward
#define Rte_Call_rpSlideMotorMove_IoSetReverse 			Rte_Call_SlideMotor_rpIOSetSlide_IOSetReverse


/* RTE APIs Prototype Declaration */
Std_ReturnType Rte_Call_SlideMotor_rpIOSetSlide_IOSetForward();
Std_ReturnType Rte_Call_SlideMotor_rpIOSetSlide_IOSetReverse();

/* Runnables Prototype Declaration */
#define SlideMotor_Move SlideMotorMove
void SlideMotor_Move(StepMotorStepType Step);

#endif
