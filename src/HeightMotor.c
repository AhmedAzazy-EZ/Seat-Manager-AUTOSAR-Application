/**
 *
 * \file HeightMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HeightMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/11/2023 01:02 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_HeightMotor.h"


/**
 *
 * Runnable HightMotorMove
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightMotor_Opr_HeightMotorMove
 *
 */

void HightMotorMove (uint8 Arg_step)
{
	Std_ReturnType status;

	/* Server Call Points */
	if(Arg_step == MOTOR_STEP_PLUS)
		status = Rte_Call_rpIoHeightSetMotor_IoSetForward();
	else if(Arg_step == MOTOR_STEP_MINUS)
		status = Rte_Call_rpIoHeightSetMotor_IoSetReverse();
	
}

