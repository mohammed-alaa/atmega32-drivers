/**
 * @file TestingTIMER1BPWM_main.c
 * @author Mohamed Alaa
 * @brief This file contains the source code of the main function that is responsible for running the Timer 1 Channel B PWM modes testing application
 * @version 1.0
 * @date 2023-02-03
 * @copyright Copyright (c) 2023
 */

#include "../../COTS/LIB/LSTD_VALUES.h"
#include "../../COTS/LIB/LSTD_COMPILER.h"
#include "../../COTS/MCAL/GPIO/GPIO_interface.h"
#include "../../COTS/MCAL/TIMER/TIMER_interface.h"
#include "TestingTIMER1BPWM_main.h"

void vTestingTIMER1BPWM(void)
{
    u8_t counter = 0;
    u8_t fadeAmount = 5;
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN4, OUTPUT);

    while (TRUE)
    {
        counter += fadeAmount;
        if (counter <= 0 || counter >= 255)
        {
            fadeAmount = -fadeAmount;
        }

        // MTIMER_vOutputFastPWM(TIMER_CHANNEL_1B, counter);
        MTIMER_vOutputPhaseCorrectPWM(TIMER_CHANNEL_1B, counter);
        MTIMER_vDelayMS(TIMER_CHANNEL_2, 50);
    }
}