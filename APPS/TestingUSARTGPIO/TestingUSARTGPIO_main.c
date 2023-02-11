/**
 * @file TestingUSARTGPIO_main.c
 * @author Mohamed Alaa
 * @brief This file contains the source code of the main function that is responsible for running the USART & GPIO testing application
 * @version 1.0
 * @date 2023-02-08
 * @copyright Copyright (c) 2023
 */

#include "../../COTS/LIB/LSTD_VALUES.h"
#include "../../COTS/LIB/LSTD_COMPILER.h"
#include "../../COTS/MCAL/GPIO/GPIO_interface.h"
#include "../../COTS/MCAL/USART/USART_interface.h"
#include "../../COTS/MCAL/TIMER/TIMER_interface.h"
#include "TestingUSARTGPIO_main.h"

void vControlReceivedData(u16_t u16ReceivedData)
{
    if (u16ReceivedData == 'A')
    {
        MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, HIGH);
    }
    else
    {
        MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, LOW);
    }
}

void vTestingUSARTGPIO(void)
{
    u16_t u16ReceivedData = 0;
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN0, INPUT_PULLDOWN);
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN1, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN3, OUTPUT);
    MUSART_vInit();

    while (TRUE)
    {
        MUSART_vTransmitData('A');
        MTIMER_vDelayMS(TIMER_CHANNEL_0, 500);
        MUSART_vReceiveData(&u16ReceivedData);
        vControlReceivedData(u16ReceivedData);
        MTIMER_vDelayMS(TIMER_CHANNEL_0, 500);
        MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, LOW);
        u16ReceivedData = 0;
    }
}