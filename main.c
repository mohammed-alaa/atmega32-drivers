#include "COTS/LIB/LSTD_VALUES.h"

#define TESTING_TIMER

#ifdef TESTING_GPIO
#include "APPS/TestingGPIO/TestingGPIO_main.h"
#elif defined TESTING_EXTI
#include "APPS/TestingEXTI/TestingEXTI_main.h"
#elif defined TESTING_ADC
#include "APPS/TestingADC/TestingADC_main.h"
#elif defined TESTING_TIMER
#include "APPS/TestingTIMER/TestingTIMER_main.h"
#endif

int main(void)
{
#ifdef TESTING_GPIO
	vTestingGPIO();
#elif defined TESTING_EXTI
	vTestingEXTI();
#elif defined TESTING_ADC
	vTestingADC();
#elif defined TESTING_TIMER
	vTestingTIMER();
#endif

	while (TRUE)
	{
	}
}