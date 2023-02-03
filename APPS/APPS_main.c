/**
 * @file APPS_main.c
 * @author Mohamed Alaa
 * @brief This file contains the source code of the main function that is responsible for running the testing applications
 * @version 1.0
 * @date 2023-02-03
 * @copyright Copyright (c) 2023
 */
#include "../COTS/LIB/LSTD_VALUES.h"

/**
 * @brief Change this to the macro of the desired application to run
 **/
#define TestingTIMER2PWM

#ifdef TESTING_GPIO
#include "TestingGPIO/TestingGPIO_main.h"
#elif defined TESTING_EXTI
#include "TestingEXTI/TestingEXTI_main.h"
#elif defined TESTING_ADC
#include "TestingADC/TestingADC_main.h"
#elif defined TESTING_TIMER0DELAYSYNC
#include "TestingTIMER0DelaySync/TestingTIMER0DelaySync_main.h"
#elif defined TESTING_TIMER1DELAYSYNC
#include "TestingTIMER1DelaySync/TestingTIMER1DelaySync_main.h"
#elif defined TESTING_TIMER2DELAYSYNC
#include "TestingTIMER2DelaySync/TestingTIMER2DelaySync_main.h"
#elif defined TESTING_TIMER0PWM
#include "TestingTIMER0PWM/TestingTIMER0PWM_main.h"
#elif defined TESTING_TIMER1APWM
#include "TestingTIMER1APWM/TestingTIMER1APWM_main.h"
#elif defined TESTING_TIMER1BPWM
#include "TestingTIMER1BPWM/TestingTIMER1BPWM_main.h"
#elif defined TestingTIMER2PWM
#include "TestingTIMER2PWM/TestingTIMER2PWM_main.h"
#endif

void vAPPS_main(void)
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
#elif defined TESTING_TIMER0PWM
    vTestingTIMER0PWM();
#elif defined TESTING_TIMER1APWM
    vTestingTIMER1APWM();
#elif defined TESTING_TIMER1BPWM
    vTestingTIMER1BPWM();
#elif defined TestingTIMER2PWM
    vTestingTIMER2PWM();
#endif

    while (TRUE)
    {
    }
}