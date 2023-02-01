/**
 * @file TIMER_program.c
 * @author Mohamed Alaa
 * @brief This file contains the implementation of the TIMER driver
 * @version 1.0
 * @date 2023-01-29
 * @copyright Copyright (c) 2023
 */

/* Includes */
#include "../../LIB/LSTD_TYPES.h"
#include "../../LIB/LSTD_COMPILER.h"
#include "../../LIB/LSTD_BITMATH.h"
#include "../../LIB/LSTD_VALUES.h"
#include "../../LIB/L_INTERRUPTS.h"

#include "TIMER_private.h"
#include "TIMER_interface.h"

/**
 * @brief This function is used to start the timer in a synchronous mode (blocking)
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u8Prescaler The Timer prescaler to be used @see timer_prescaler
 * @param[in] u32Delay The delay
 */
STATIC void MTIMER_vStartTimerCTCSync(u8_t u8Channel, u8_t u8Prescaler, u32_t u32Delay)
{
    switch (u8Channel)
    {
    case TIMER_CHANNEL_0:
        TCCR0 |= (u8Prescaler);

        while (u32Delay--)
        {
            while (!GET_BIT(TIFR, 1))
                ;
            SET_BIT(TIFR, 1);
        }
        break;
    case TIMER_CHANNEL_1A:
    case TIMER_CHANNEL_1B:
        TCCR1B |= (u8Prescaler);

        while (u32Delay--)
        {
            while (!GET_BIT(TIFR, 4))
                ;
            SET_BIT(TIFR, 4);
        }
        break;
    case TIMER_CHANNEL_2:
        TCCR2 |= (u8Prescaler);

        while (u32Delay--)
        {
            while (!GET_BIT(TIFR, 7))
                ;
            SET_BIT(TIFR, 7);
        }
        break;
        break;
    default:
        break;
    }
}

/**
 * @brief This function is used to set the initial value of OCn register in CTC mode
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param u32InitialValue The initial value to be set in the OCn register
 * @note This function should be used only in CTC mode
 * @private Internal function
 */
STATIC void MTIMER_vSetInitialCTCModeValue(u8_t u8Channel, u32_t u32InitialValue)
{
    switch (u8Channel)
    {
    case TIMER_CHANNEL_0:
        TCNT0 = 0;
        OCR0 = u32InitialValue;
        break;
    case TIMER_CHANNEL_1A:
    case TIMER_CHANNEL_1B:
        TCNT1 = 0;
        OCR1A = u32InitialValue;
        break;
    case TIMER_CHANNEL_2:
        TCNT2 = 0;
        OCR2 = u32InitialValue;
        break;
    default:
        break;
    }
}

/**
 * @brief This function is used to initiate the timer with a certain mode
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u8Mode The Timer mode to be used @see timer_modes
 * @param[in] bIsSync Whether the timer is in synchronous mode or not
 */
STATIC void MTIMER_vInit(u8_t u8Channel, u8_t u8Mode, bool_t bIsSync)
{
    MTIMER_vStopTimer(u8Channel);

    switch (u8Channel)
    {
    case TIMER_CHANNEL_0:
        TCCR0 = u8Mode;
        if (bIsSync)
        {
            SET_BIT(TIMSK, 1);
        }
        else
        {
            CLEAR_BIT(TIMSK, 1);
        }
        break;
    case TIMER_CHANNEL_1A:
    case TIMER_CHANNEL_1B:
        switch (u8Mode)
        {
        case TIMER_MODE_NORMAL:
            TCCR1A = 0;
            TCCR1B = 0;

            if (bIsSync)
            {
                SET_BIT(TIMSK, 2);
            }
            else
            {
                CLEAR_BIT(TIMSK, 2);
            }
            break;
        case TIMER_MODE_CTC:
            TCCR1A = 0;
            TCCR1B = 0x08;

            if (bIsSync)
            {
                SET_BIT(TIMSK, ((u8Channel == TIMER_CHANNEL_1A) ? 4 : 3));
            }
            else
            {
                CLEAR_BIT(TIMSK, ((u8Channel == TIMER_CHANNEL_1A) ? 4 : 3));
            }
            break;
        default:
            break;
        }
        break;
    case TIMER_CHANNEL_2:
        TCCR2 = u8Mode;
        if (bIsSync)
        {
            SET_BIT(TIMSK, 7);
        }
        else
        {
            CLEAR_BIT(TIMSK, 7);
        }
        break;
    default:
        break;
    }
}

void MTIMER_vStopTimer(u8_t u8Channel)
{
    switch (u8Channel)
    {
    case TIMER_CHANNEL_0:
        TCCR0 = 0;
        break;
    case TIMER_CHANNEL_1A:
    case TIMER_CHANNEL_1B:
        TCCR1A = 0;
        TCCR1B = 0;
        break;
    case TIMER_CHANNEL_2:
        TCCR2 = 0;
        break;
    default:
        break;
    }
}

void MTIMER_vSyncDelayUS(u8_t u8Channel, u32_t u32Delay)
{
    u8_t L_u8Prescaler = ((u8Channel == TIMER_CHANNEL_2) ? TIMER_PRESCALER_TIMER2_8 : TIMER_PRESCALER_TIMER01_8);
    MTIMER_vInit(u8Channel, TIMER_MODE_CTC, TRUE);
    MTIMER_vSetInitialCTCModeValue(u8Channel, 2);
    MTIMER_vStartTimerCTCSync(u8Channel, L_u8Prescaler, u32Delay);
    MTIMER_vStopTimer(u8Channel);
}

void MTIMER_vSyncDelayMS(u8_t u8Channel, u32_t u32Delay)
{
    u8_t L_u8Prescaler = ((u8Channel == TIMER_CHANNEL_2) ? TIMER_PRESCALER_TIMER2_64 : TIMER_PRESCALER_TIMER01_64);
    MTIMER_vInit(u8Channel, TIMER_MODE_CTC, TRUE);
    MTIMER_vSetInitialCTCModeValue(u8Channel, 250);
    MTIMER_vStartTimerCTCSync(u8Channel, L_u8Prescaler, u32Delay);
    MTIMER_vStopTimer(u8Channel);
}

void MTIMER_vSyncDelayS(u8_t u8Channel, u32_t u32Delay)
{
    u8_t L_u8Prescaler = ((u8Channel == TIMER_CHANNEL_2) ? TIMER_PRESCALER_TIMER2_1024 : TIMER_PRESCALER_TIMER01_1024);
    MTIMER_vInit(u8Channel, TIMER_MODE_CTC, TRUE);

    if ((u8Channel == TIMER_CHANNEL_1A) || (u8Channel == TIMER_CHANNEL_1B))
    {
        MTIMER_vSetInitialCTCModeValue(TIMER_CHANNEL_1A, 15625);
        MTIMER_vStartTimerCTCSync(TIMER_CHANNEL_1A, L_u8Prescaler, u32Delay);
    }
    else if ((u8Channel == TIMER_CHANNEL_0) || (u8Channel == TIMER_CHANNEL_2))
    {
        MTIMER_vSetInitialCTCModeValue(u8Channel, 125);

        for (u8_t u8LoopCounter = 0; u8LoopCounter < 125; u8LoopCounter++)
        {
            MTIMER_vStartTimerCTCSync(u8Channel, L_u8Prescaler, u32Delay);
        }
    }
    else
    {
        /* Do nothing */
    }

    MTIMER_vStopTimer(u8Channel);
}

void MTIMER_vSyncDelay(u8_t u8Channel, u8_t u8Mode, u8_t u8Prescaler, u32_t u32Ticks)
{
    MTIMER_vInit(u8Channel, u8Mode, TRUE);
    if (u8Mode == TIMER_MODE_CTC)
    {
        MTIMER_vSetInitialCTCModeValue(u8Channel, u32Ticks);
    }
    else if (u8Mode == TIMER_MODE_NORMAL)
    {
        // MTIMER_vSetInitialNormalModeValue(u8Channel, u32Ticks);
    }
    else
    {
        /* Do nothing */
    }

    MTIMER_vStartTimerCTCSync(u8Channel, u8Prescaler, u32Ticks);
    MTIMER_vStopTimer(u8Channel);
}