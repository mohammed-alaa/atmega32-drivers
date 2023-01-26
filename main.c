#include "COTS/LIB/LSTD_VALUES.h"

#define TESTING_EXTI

#ifdef TESTING_GPIO
#include "APPS/TestingGPIO/TestingGPIO_main.h"
#elif defined TESTING_EXTI
#include "APPS/TestingEXTI/TestingEXTI_main.h"
#endif

int main(void)
{
	#ifdef TESTING_GPIO
	vTestingGPIO();
	#elif defined TESTING_EXTI
	vTestingEXTI();
	#endif

    while (TRUE)
    {
    }
}