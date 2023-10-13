/**
 *
 * \brief Sprints AUTOSAR Master Class - SeatCtrlApp
 * \author Hassan Farahat
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */
 
#ifndef RTE_HEIGHTMOTOR_H
#define RTE_HEIGHTMOTOR_H

#include "Rte_HeightMotor_Type.h"

/* RTE APIs Prototype Declaration */
//#define Rte_Call_rpHeightMotor_Opr_HeightMotorMove	Rte_Call_SeatManager_rpHeightMotor_Move
Std_ReturnType Rte_Call_HeightMotor_rpIOSetHeight_IOSetForward();
Std_ReturnType Rte_Call_HeightMotor_rpIOSetHeight_IOSetReverse();

#define Rte_Call_rpIoHeightSetMotor_IoSetForward 		Rte_Call_HeightMotor_rpIOSetHeight_IOSetForward
#define Rte_Call_rpIoHeightSetMotor_IoSetReverse 		Rte_Call_HeightMotor_rpIOSetHeight_IOSetReverse

/* Runnables Prototype Declaration */
void HeightMotor_Move(StepMotorStepType Step);

#endif
