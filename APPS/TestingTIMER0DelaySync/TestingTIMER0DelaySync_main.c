/**
 * @file TestingTIMER0DelaySync_main.c
 * @author Mohamed Alaa
 * @brief This file contains the source code of the main function that is responsible for running the Timer 0 delay testing application
 * @version 1.0
 * @date 2023-02-03
 * @copyright Copyright (c) 2023
 */

#include "../../COTS/LIB/LSTD_VALUES.h"
#include "../../COTS/LIB/LSTD_COMPILER.h"
#include "../../COTS/MCAL/GPIO/GPIO_interface.h"
#include "../../COTS/MCAL/TIMER/TIMER_interface.h"
#include "TestingTIMER0DelaySync_main.h"

void vTestingTIMER0DelaySync(void)
{
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN2, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTC, GPIO_PIN7, OUTPUT);

    while (TRUE)
    {
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, HIGH);
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, LOW);
        MTIMER_vDelayMS(TIMER_CHANNEL_0, 5000);

        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN2, LOW);
        MGPIO_vSetPinValue(GPIO_PORTC, GPIO_PIN7, HIGH);
        MTIMER_vDelaySec(TIMER_CHANNEL_0, 5);
    }
}