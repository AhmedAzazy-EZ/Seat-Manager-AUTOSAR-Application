/**
 *
 * \file SlideMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SlideMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/11/2023 01:02 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SlideMotor.h"


/**
 *
 * Runnable SlideMotorMove
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppSlightMotor_Opr_SlideMotorMove
 *
 */

void SlideMotorMove (uint8 Arg_step)
{
	Std_ReturnType status;

	/* Server Call Points */
	if(Arg_step == MOTOR_STEP_PLUS)
		status = Rte_Call_rpSlideMotorMove_IoSetForward();
	if(Arg_step == MOTOR_STEP_MINUS)
		status = Rte_Call_rpSlideMotorMove_IoSetReverse();
	
}

