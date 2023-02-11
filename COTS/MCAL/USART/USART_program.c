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
#include "USART_private.h"
#include "USART_interface.h"
#include "USART_config.h"

void MUSART_vInit(void)
{
    UCSRA = (USART_SPEED | USART_MULTI_PROCESSOR);
    UCSRB = (0x18 | (GET_BIT(USART_CHARACTER_SIZE, 3) << UCSZ2));
    UCSRC = (0x80 | USART_OPERATION_MODE | USART_PARITY | USART_STOP_BITS | (0x06 & USART_CHARACTER_SIZE) | USART_CLOCK_POLARITY);
    UBRRH = (USART_BAUDRATE >> 4);
    UBRRL = (USART_BAUDRATE);
}

bool_t MUSART_vTransmitData(u16_t u16Data)
{
    bool_t bIsDataTransmitted = FALSE;

    if (GET_BIT(UCSRA, UDRE))
    {
#if USART_CHARACTER_SIZE == USART_CHARACTER_SIZE_9
        if (GET_BIT(u16Data, 8))
        {
            SET_BIT(UCSRB, TXB8);
        }
        else
        {
            CLEAR_BIT(UCSRB, TXB8);
        }
#endif
        UDR = u16Data;
        while (!GET_BIT(UCSRA, TXC))
            ;

        SET_BIT(UCSRA, TXC);
        bIsDataTransmitted = TRUE;
    }
    else
    {
        bIsDataTransmitted = FALSE;
    }

    return bIsDataTransmitted;
}

bool_t MUSART_bIsDataReceived(void)
{
    return (GET_BIT(UCSRA, RXC) ? TRUE : FALSE);
}

void MUSART_vReceiveData(P2VAR(u16_t) pu16Data)
{
    u16_t u16ReceivedValue = 0;

    if (MUSART_bIsDataReceived())
    {
#if USART_CHARACTER_SIZE == USART_CHARACTER_SIZE_9
        u16ReceivedValue = (GET_BIT(UCSRB, RXB8) << 8);
        u16ReceivedValue |= UDR;
#else
        u16ReceivedValue = UDR;
#endif
    }
    else
    {
        u16ReceivedValue = 0;
    }

    *pu16Data = u16ReceivedValue;
}
