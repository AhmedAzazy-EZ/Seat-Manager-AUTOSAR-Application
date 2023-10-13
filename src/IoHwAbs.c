/**
 *
 * \file IoHwAbs_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: IoHwAbs
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/11/2023 01:02 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_IoHwAbs.h"
#include "Dio.h"
#include "Adc.h"
#include "Spi.h"

static Adc_ValueGroupType IoHwAb_PositionSensorsReadings[ADC_GR0_NUM_CHANNELS] =
{
	/* Height */
	0,
	/* Incline */
	0,
	/* Slide */
	0
};

/**
 *
 * Runnable IoHwAbs_EcuGet_Height
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIoGetHeight_IoGet
 *
 */

void IoHwAbs_EcuGet_Height (SensorPositiontype* position)
{

	Std_ReturnType status;
	status = Adc_ReadGroup(AdcConf_AdcGroup_PositionsSensorsGrp, IoHwAb_PositionSensorsReadings);

	if (status == E_OK)
	{
		*position = (IoPositionSensorReadingType)IoHwAb_PositionSensorsReadings[0];
	}
	else
	{
		/* Operation shall be updated to return failure error code */
	}

}


/**
 *
 * Runnable IoHwAbs_EcuGet_Incline
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIoGetIncline_IoGet
 *
 */

void IoHwAbs_EcuGet_Incline (SensorPositiontype* position)
{
	Std_ReturnType status;

	status = Adc_ReadGroup(AdcConf_AdcGroup_PositionsSensorsGrp, IoHwAb_PositionSensorsReadings);

	if (status == E_OK)
	{
		*position = (IoPositionSensorReadingType)IoHwAb_PositionSensorsReadings[1];
	}
	else
	{
		/* Operation shall be updated to return failure error code */
	}

}


/**
 *
 * Runnable IoHwAbs_EcuGet_Slide
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIoGetSlide_IoGet
 *
 */

void IoHwAbs_EcuGet_Slide (SensorPositiontype* position)
{
	Std_ReturnType status;

	status = Adc_ReadGroup(AdcConf_AdcGroup_PositionsSensorsGrp, IoHwAb_PositionSensorsReadings);

	if (status == E_OK)
	{
		*position = (IoPositionSensorReadingType)IoHwAb_PositionSensorsReadings[2];
	}
	else
	{
		/* Operation shall be updated to return failure error code */
	}

}


/**
 *
 * Runnable IoHwAbs_EcuGet_Weight
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIoGetSensorWeight_IoGet
 *
 */

void IoHwAbs_EcuGet_Weight (IoWeightSensorReadingType * weight)
{
	Std_ReturnType status;
	Spi_DataType spiData;

	status = Spi_ReadIB(SpiConf_SpiChannel_WeightSensor, &spiData);

	if (status == E_OK)
	{
		*weight = (IoWeightSensorReadingType)spiData;
	}
	else
	{
		/* Operation shall be updated to return failure error code */
	}

}


/**
 *
 * Runnable IoHwAbs_EcuSetForward_Height
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIoSetHeight_IoSetForward
 *
 */

void IoHwAbs_EcuSetForward_Height (void)
{
	Dio_WriteChannel(DioConfg_DioChannel_HeightMotorCh, STD_HIGH);
}


/**
 *
 * Runnable IoHwAbs_EcuSetForward_Incline
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIoSetIncline_IoSetForward
 *
 */

void IoHwAbs_EcuSetForward_Incline (void)
{
	Dio_WriteChannel(DioConfg_DioChannel_InclineMotorCh, STD_HIGH);
}


/**
 *
 * Runnable IoHwAbs_EcuSetForward_Slide
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIoSetSlide_IoSetForward
 *
 */

void IoHwAbs_EcuSetForward_Slide (void)
{
	Dio_WriteChannel(DioConfg_DioChannel_SlideMotorCh, STD_HIGH);

}


/**
 *
 * Runnable IoHwAbs_EcuSetReverse_Height
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIoSetHeight_IoSetReverse
 *
 */

void IoHwAbs_EcuSetReverse_Height (void)
{
	Dio_WriteChannel(DioConfg_DioChannel_HeightMotorCh, STD_LOW);

}


/**
 *
 * Runnable IoHwAbs_EcuSetReverse_Incline
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIoSetIncline_IoSetReverse
 *
 */

void IoHwAbs_EcuSetReverse_Incline (void)
{
	Dio_WriteChannel(DioConfg_DioChannel_InclineMotorCh, STD_LOW);

}


/**
 *
 * Runnable IoHwAbs_EcuSetReverse_Slide
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIoSetSlide_IoSetReverse
 *
 */

void IoHwAbs_EcuSetReverse_Slide (void)
{
	Dio_WriteChannel(DioConfg_DioChannel_SlideMotorCh, STD_LOW);

}

