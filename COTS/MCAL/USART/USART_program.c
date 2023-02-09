/**
 * @file USART_program.c
 * @author Mohamed Alaa
 * @brief This file contains the implementation of the USART driver
 * @version 1.0
 * @date 2023-02-08
 * @copyright Copyright (c) 2023
 */

/* Includes */
#include "../../LIB/LSTD_TYPES.h"
#include "../../LIB/LSTD_BITMATH.h"
#include "../../LIB/LSTD_COMPILER.h"
#include "../../LIB/LSTD_VALUES.h"
#include "../../LIB/L_INTERRUPTS.h"
#include "USART_private.h"
#include "USART_interface.h"
#include "USART_config.h"

/* Global variables */
STATIC P2FUNC(void, GS_pTransmitCallback)(void) = NULL;
STATIC P2FUNC(void, GS_pReceiveCallback)(u16_t) = NULL;

/**
 * @brief This function is used to transmit data through the USART
 * @param[in] u16Data The data to be transmitted
 * @return bool_t TRUE if the data is transmitted successfully, FALSE otherwise
 */
STATIC bool_t MUSART_vTransmitData(u16_t u16Data)
{
    bool_t bIsDataTransmitted = FALSE;

    if (GET_BIT(UCSRA, 5))
    {
#if USART_CHARACTER_SIZE == USART_CHARACTER_SIZE_9
        if (GET_BIT(u16Data, 8))
        {
            SET_BIT(UCSRB, 0);
        }
        else
        {
            CLEAR_BIT(UCSRB, 0);
        }
#endif

        UDR = (u16Data);
        bIsDataTransmitted = TRUE;
    }
    else
    {
        bIsDataTransmitted = FALSE;
    }

    return bIsDataTransmitted;
}

void MUSART_vInit(void)
{
    UBRRL = (USART_BAUDRATE);
    UBRRH = (USART_BAUDRATE >> 4);
    UCSRC = (0x80 | USART_OPERATION_MODE | USART_PARITY | USART_STOP_BITS | (0x06 & USART_CHARACTER_SIZE) | USART_CLOCK_POLARITY);
    UCSRB = (0xD8 | (GET_BIT(USART_CHARACTER_SIZE, 3) << 2));
    UCSRA = (USART_SPEED | USART_MULTI_PROCESSOR);
}

bool_t MUSART_vSyncTransmitData(u16_t u16Data)
{
    bool_t bIsDataTransmitted = FALSE;

    if (MUSART_vTransmitData(u16Data))
    {
        while (!GET_BIT(UCSRA, 6))
            ;
        SET_BIT(UCSRA, 6);
        bIsDataTransmitted = TRUE;
    }
    else
    {
        bIsDataTransmitted = FALSE;
    }

    return bIsDataTransmitted;
}

bool_t MUSART_vAsyncTransmitData(u16_t u16Data, P2FUNC(void, pTransmitCallback)(void))
{
    bool_t bIsDataTransmitted = FALSE;

    if (MUSART_vTransmitData(u16Data))
    {
        GS_pTransmitCallback = pTransmitCallback;
        bIsDataTransmitted = TRUE;
    }
    else
    {
        GS_pTransmitCallback = NULL;
        bIsDataTransmitted = FALSE;
    }

    return bIsDataTransmitted;
}

bool_t MUSART_bIsDataReceived(void)
{
    return (GET_BIT(UCSRA, 7));
}

void MUSART_vSyncReceiveData(P2VAR(u16_t) u16Data)
{
    u16_t u16ReceivedValue = 0;

    if (MUSART_bIsDataReceived())
    {
#if USART_CHARACTER_SIZE == USART_CHARACTER_SIZE_9
        u16ReceivedValue = (GET_BIT(UCSRB, 1) << 8);
        u16ReceivedValue += UDR;
#else
        u16ReceivedValue = UDR;
#endif
        SET_BIT(UCSRA, 7);
    }
    else
    {
        u16ReceivedValue = 0;
    }

    *u16Data = u16ReceivedValue;
}

void MUSART_vAsyncReceiveData(P2FUNC(void, pReceiveCallback)(u16_t))
{
    GS_pReceiveCallback = pReceiveCallback;
}

ISR(EXTI_VECT_USART_TXC)
{
    SET_BIT(UCSRA, 6);

    if (GS_pTransmitCallback == NULL)
    {
        /* Do nothing */
    }
    else
    {
        GS_pTransmitCallback();
        GS_pTransmitCallback = NULL;
    }
}

ISR(EXTI_VECT_USART_RXC)
{
    if (!MUSART_bIsDataReceived() || (GS_pReceiveCallback == NULL))
    {
        /* Do nothing */
    }
    else
    {
        u16_t u16Data = 0;
        MUSART_vSyncReceiveData(&u16Data);
        GS_pReceiveCallback(u16Data);
        GS_pReceiveCallback = NULL;
    }
}