/**
 *
 * \file SlideSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SlideSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/11/2023 01:02 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SlideSensor.h"


/**
 *
 * Runnable SlideSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppSlideSensor_SlideSensor_GetPosition
 *
 */

void SlideSensor_GetPosition (SensorPositiontype* position)
{
	Std_ReturnType status;
	SensorPositiontype Position;

	/* Server Call Points */
	status = Rte_Call_rpIoGetSlideSensorPosition_IoGet(&Position);
	if(Position == 0)
		*position = SENSOR_POSITION_STEP_0;
	if(Position > 0 && Position <= 64)
		*position = SENSOR_POSITION_STEP_1;
	if(Position > 64 && Position <= 192)
		*position = SENSOR_POSITION_STEP_2;
	if(Position > 192 && Position <= 255)
		*position = SENSOR_POSITION_STEP_3;
}

