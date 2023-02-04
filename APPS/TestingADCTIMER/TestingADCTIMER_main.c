/**
 * @file TestingADCTIMER_main.c
 * @author Mohamed Alaa
 * @brief This file contains the source code of the main function that is responsible for running the ADC and the Timer testing application
 * @version 1.0
 * @date 2023-02-03
 * @copyright Copyright (c) 2023
 */

#include "../../COTS/LIB/LSTD_TYPES.h"
#include "../../COTS/LIB/LSTD_VALUES.h"
#include "../../COTS/MCAL/GPIO/GPIO_interface.h"
#include "../../COTS/MCAL/ADC/ADC_interface.h"
#include "../../COTS/MCAL/TIMER/TIMER_interface.h"
#include "TestingADCTIMER_main.h"

void vTestingADCTIMER(void)
{
    u16_t L_u8MappedAnalogReadValue = 0;
    u16_t L_u16AnalogReadValue = 0;
    MGPIO_vSetPinDirection(GPIO_PORTA, GPIO_PIN0, INPUT_PULLDOWN);
    MGPIO_vSetPinDirection(GPIO_PORTB, GPIO_PIN3, OUTPUT);
    MADC_vInit();

    while (TRUE)
    {
        L_u16AnalogReadValue = MADC_u16ReadChannel(ADC_CHANNEL_0);
        L_u8MappedAnalogReadValue = (L_u16AnalogReadValue * 0.25);
        MTIMER_vOutputFastPWM(TIMER_CHANNEL_0, L_u8MappedAnalogReadValue);
        // MTIMER_vOutputPhaseCorrectPWM(TIMER_CHANNEL_0, L_u8MappedAnalogReadValue);
        MTIMER_vDelayMS(TIMER_CHANNEL_2, 50);
    }
}