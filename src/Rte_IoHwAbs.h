/**
 *
 * \brief Sprints AUTOSAR Master Class - SeatCtrlApp
 * \author Hassan Farahat
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */
 
#ifndef RTE_IOHWABS_H
#define RTE_IOHWABS_H

#include "Rte_IoHwAbs_Type.h"


#define IoHwAbs_ECUSetForward_Height	IoHwAbs_EcuSetForward_Height
#define IoHwAbs_ECUSetReverse_Height	IoHwAbs_EcuSetReverse_Height
#define IoHwAbs_ECUSetForward_Incline	IoHwAbs_EcuSetForward_Incline
#define IoHwAbs_ECUSetReverse_Incline	IoHwAbs_EcuSetReverse_Incline
#define IoHwAbs_ECUSetForward_Slide		IoHwAbs_EcuSetForward_Slide
#define IoHwAbs_ECUSetReverse_Slide		IoHwAbs_EcuSetReverse_Slide
#define IoHwAbs_ECUGet_Height			IoHwAbs_EcuGet_Height
#define IoHwAbs_ECUGet_Incline			IoHwAbs_EcuGet_Height
#define IoHwAbs_ECUGet_Slide			IoHwAbs_EcuGet_Slide
#define IoHwAbs_ECUGet_Weight			IoHwAbs_EcuGet_Weight


/* RTE APIs Prototype Declaration */

/* Runnables Prototype Declaration */
void IoHwAbs_ECUGet_Height(IoPositionSensorReadingType* position);
void IoHwAbs_ECUGet_Incline(IoPositionSensorReadingType* position);
void IoHwAbs_ECUGet_Slide(IoPositionSensorReadingType* position);
void IoHwAbs_ECUGet_Weight(IoWeightSensorReadingType* weight);
void IoHwAbs_ECUSetForward_Height(void);
void IoHwAbs_ECUSetForward_Incline(void);
void IoHwAbs_ECUSetForward_Slide(void);
void IoHwAbs_ECUSetReverse_Height(void);
void IoHwAbs_ECUSetReverse_Incline(void);
void IoHwAbs_ECUSetReverse_Slide(void);





#endif
