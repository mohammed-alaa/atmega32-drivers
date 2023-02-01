#include "COTS/LIB/LSTD_VALUES.h"

#define TESTING_TIMER2DELAYSYNC

#ifdef TESTING_GPIO
#include "APPS/TestingGPIO/TestingGPIO_main.h"
#elif defined TESTING_EXTI
#include "APPS/TestingEXTI/TestingEXTI_main.h"
#elif defined TESTING_ADC
#include "APPS/TestingADC/TestingADC_main.h"
#elif defined TESTING_TIMER0DELAYSYNC
#include "APPS/TestingTIMER0DelaySync/TestingTIMER0DelaySync_main.h"
#elif defined TESTING_TIMER1DELAYSYNC
#include "APPS/TestingTIMER1DelaySync/TestingTIMER1DelaySync_main.h"
#elif defined TESTING_TIMER2DELAYSYNC
#include "APPS/TestingTIMER2DelaySync/TestingTIMER2DelaySync_main.h"
#endif

int main(void)
{
#ifdef TESTING_GPIO
	vTestingGPIO();
#elif defined TESTING_EXTI
	vTestingEXTI();
#elif defined TESTING_ADC
	vTestingADC();
#elif defined TESTING_TIMER0DELAYSYNC
	vTestingTIMER0DelaySync();
#elif defined TESTING_TIMER1DELAYSYNC
	vTestingTIMER1DelaySync();
#elif defined TESTING_TIMER2DELAYSYNC
	vTestingTIMER2DelaySync();
#endif

	while (TRUE)
	{
	}
}