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

void vTurnonLed(void)
{
    MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, HIGH);
}

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

    MTIMER_vDelaySec(TIMER_CHANNEL_0, 1);
}

void vTestingUSARTGPIO(void)
{
    u8_t u8ReceivedData = 0;
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN0, INPUT_PULLDOWN);
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN1, OUTPUT);
    MGPIO_vSetPinDirection(GPIO_PORTD, GPIO_PIN3, OUTPUT);
    MUSART_vInit();

    while (TRUE)
    {
        MUSART_vAsyncTransmitData('B', vTurnonLed);
        MUSART_vAsyncReceiveData(vControlReceivedData);
        MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, LOW);

        // MUSART_vSyncTransmitData('A');
        // MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, LOW);
        // MTIMER_vDelayMS(TIMER_CHANNEL_0, 500);
        // MUSART_vSyncReceiveData((u16_t *)&u8ReceivedData);

        // if (u8ReceivedData == 'A')
        // {
        //     MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, HIGH);
        // }
        // else
        // {
        //     MGPIO_vSetPinValue(GPIO_PORTD, GPIO_PIN3, LOW);
        // }

        MTIMER_vDelaySec(TIMER_CHANNEL_0, 1);
        u8ReceivedData = 0;
    }
}