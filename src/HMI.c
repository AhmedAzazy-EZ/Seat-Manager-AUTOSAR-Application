/**
 *
 * \file HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/11/2023 01:02 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_HMI.h"


/**
 *
 * Runnable HMI_Mainfunction
 *
 * Triggered By:
 *  - TimingEventImpl.TE_HMI_Mainfunction_100ms
 *
 */

void HMI_Mainfunction (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	MultiStateBtnType InclineBtnState;
	MultiStateBtnType SlideBtnState;
	uint8 DE_Height;
	uint8 DE_Incline;
	uint8 DE_Slide;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlData_DE_Height(&DE_Height);
	status = Rte_Read_rpSeatCtrlData_DE_Incline(&DE_Incline);
	status = Rte_Read_rpSeatCtrlData_DE_Slide(&DE_Slide);

	switch(DE_Height)
	{
		case 0 :
			HeightBtnState = MULTI_STATE_BTN_INIT;
			break;
		case 1 :
			HeightBtnState = MULTI_STATE_BTN_MINUS;
			break;
		case 2:
			HeightBtnState = MULTI_STATE_BTN_PLUS;
			break;
		default :
			break;
	}

	switch(DE_Incline)
	{
		case 0 :
			InclineBtnState = MULTI_STATE_BTN_INIT;
			break;
		case 1 :
			InclineBtnState = MULTI_STATE_BTN_MINUS;
			break;
		case 2:
			InclineBtnState = MULTI_STATE_BTN_PLUS;
			break;
		default :
			break;
	}

	switch(DE_Slide)
	{
		case 0 :
			SlideBtnState = MULTI_STATE_BTN_INIT;
			break;
		case 1 :
			SlideBtnState = MULTI_STATE_BTN_MINUS;
			break;
		case 2:
			SlideBtnState = MULTI_STATE_BTN_PLUS;
			break;
		default :
			break;
	}

	/* Data Send Points */
	status = Rte_Write_ppSeatCtrlBtns_HeightBtnState(HeightBtnState);
	status = Rte_Write_ppSeatCtrlBtns_InclineBtnState(InclineBtnState);
	status = Rte_Write_ppSeatCtrlBtns_SlideBtnState(SlideBtnState);
	
}


/**
 *
 * Runnable HMI_SeatModeChanged
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatModeBtn_DE_SeatModeBtn
 *
 */

void HMI_SeatModeChanged (void)
{
	Std_ReturnType status;
	SeatModeBtnType DE_SeatModeBtn;
	uint8 SeatCtrlMode = RTE_MODE_SeatCtrlMode_INIT;

	/* Data Receive Points */
	status = Rte_Read_rpSeatModeBtn_DE_SeatModeBtn(&DE_SeatModeBtn);
	
	if(DE_SeatModeBtn==SEAT_MODE_BTN_MANUAL)
		SeatCtrlMode = RTE_MODE_SeatCtrlMode_MANUAL;
	else if(DE_SeatModeBtn==SEAT_MODE_BTN_AUTO)
		SeatCtrlMode = RTE_MODE_SeatCtrlMode_AUTO;

	/* Mode Switch Points */
	status = Rte_Switch_ppSeatControlMode_SeatCtrlMode(SeatCtrlMode);
	
}

