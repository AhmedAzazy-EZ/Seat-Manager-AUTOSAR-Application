/**
 *
 * \file Seat_Manager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: Seat_Manager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/11/2023 01:02 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SeatManager.h"


/**
 *
 * Runnable SeatManager_AutoHeight
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoHeight_200ms
 *
 */

void SeatManager_AutoHeight (void)
{
	Std_ReturnType status;
	uint8 Arg_step;
	SensorPositiontype position;
	SensorWeightType weight;

	status = Rte_Call_rpHeightSensor_HeightSensor_GetPosition(&position);
	status = Rte_Call_rpWeightSensor_GetWeight(&weight);

	// >100
	if(weight >= 100 && position < SENSOR_POSITION_STEP_3)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight >= 100 && position > SENSOR_POSITION_STEP_3)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	// 80:100
	if(weight >= 80 && weight < 100 && position < SENSOR_POSITION_STEP_2)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight >= 80 && weight < 100 && position > SENSOR_POSITION_STEP_2)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	// 60:80
	if(weight >= 60 && weight < 80 && position < SENSOR_POSITION_STEP_1)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight >= 60 && weight < 80 && position > SENSOR_POSITION_STEP_1)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	// <100
	if(weight <= 60 && position < SENSOR_POSITION_STEP_0)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight <= 60 && position > SENSOR_POSITION_STEP_0)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}
	/* Server Call Points */
	Execute:
	status = Rte_Call_rpHeightMotor_Opr_HeightMotorMove(Arg_step);
}


/**
 *
 * Runnable SeatManager_AutoIncline
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoIncline_200ms
 *
 */

void SeatManager_AutoIncline (void)
{
	Std_ReturnType status;
	uint8 Arg_step;
	SensorPositionType position;
	SensorWeightType weight;

	status = Rte_Call_rpInclineSensor_InclineSensor_GetPosition(&position);
	status = Rte_Call_rpWeightSensor_GetWeight(&weight);

	// >100
	if(weight >= 100 && position < SENSOR_POSITION_STEP_3)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight >= 100 && position > SENSOR_POSITION_STEP_3)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	// 80:100
	if(weight >= 80 && weight < 100 && position < SENSOR_POSITION_STEP_2)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight >= 80 && weight < 100 && position > SENSOR_POSITION_STEP_2)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	// 60:80
	if(weight >= 60 && weight < 80 && position < SENSOR_POSITION_STEP_1)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight >= 60 && weight < 80 && position > SENSOR_POSITION_STEP_1)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	// <100
	if(weight <= 60 && position < SENSOR_POSITION_STEP_0)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight <= 60 && position > SENSOR_POSITION_STEP_0)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	/* Server Call Points */
	status = Rte_Call_rpInclineMotor_Opr_InclineMotorMove(Arg_step);
}


/**
 *
 * Runnable SeatManager_AutoSlide
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoSlide_200ms
 *
 */

void SeatManager_AutoSlide (void)
{
	Std_ReturnType status;
	uint8 Arg_step;
	SensorPositiontype position;
	SensorWeightType weight;

	status = Rte_Call_rpSlideSensor_SlideSensor_GetPosition(&position);
	status = Rte_Call_rpWeightSensor_GetWeight(&weight);

	// >100
	if(weight >= 100 && position < SENSOR_POSITION_STEP_3)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight >= 100 && position > SENSOR_POSITION_STEP_3)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	// 80:100
	if(weight >= 80 && weight < 100 && position < SENSOR_POSITION_STEP_2)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight >= 80 && weight < 100 && position > SENSOR_POSITION_STEP_2)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	// 60:80
	if(weight >= 60 && weight < 80 && position < SENSOR_POSITION_STEP_1)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight >= 60 && weight < 80 && position > SENSOR_POSITION_STEP_1)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	// <100
	if(weight <= 60 && position < SENSOR_POSITION_STEP_0)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}

	else if(weight <= 60 && position > SENSOR_POSITION_STEP_0)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}
	/* Server Call Points */
	status = Rte_Call_rpSlideMotor_Opr_SlideMotorMove(Arg_step);
}


/**
 *
 * Runnable SeatManager_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_HeightBtnState
 *
 */

void SeatManager_SetHeight (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	uint8 Arg_step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	

	if(HeightBtnState == MULTI_STATE_BTN_PLUS)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}
	else if(HeightBtnState == MOTOR_STEP_MINUS)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}

	/* Server Call Points */
	status = Rte_Call_rpHeightMotor_Opr_HeightMotorMove(Arg_step);
	
}


/**
 *
 * Runnable SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_InclineBtnState
 *
 */

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	MultiStateBtnType InclineBtnState;
	uint8 Arg_step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_InclineBtnState(&InclineBtnState);
	if(InclineBtnState == MULTI_STATE_BTN_PLUS)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}
	else if(InclineBtnState == MOTOR_STEP_MINUS)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}
	/* Server Call Points */
	status = Rte_Call_rpInclineMotor_Opr_InclineMotorMove(Arg_step);
	
}


/**
 *
 * Runnable SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	MultiStateBtnType SlideBtnState;
	uint8 Arg_step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_SlideBtnState(&SlideBtnState);
	if(SlideBtnState == MULTI_STATE_BTN_PLUS)
	{
		Arg_step = MOTOR_STEP_PLUS;
	}
	else if(SlideBtnState == MOTOR_STEP_MINUS)
	{

		Arg_step = MOTOR_STEP_MINUS;
	}
	/* Server Call Points */
	status = Rte_Call_rpSlideMotor_Opr_SlideMotorMove(Arg_step);
	
}

