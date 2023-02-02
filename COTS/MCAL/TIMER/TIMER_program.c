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
#include "TIMER_private.h"
#include "TIMER_interface.h"

/**
 * @brief This function is used to start the timer in a synchronous mode (blocking) in normal mode
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u8Prescaler The Timer prescaler to be used @see timer_prescaler
 */
STATIC void MTIMER_vStartTimerNormal(u8_t u8Channel, u8_t u8Prescaler)
{
    switch (u8Channel)
    {
    case TIMER_CHANNEL_0:
        TCCR0 |= (u8Prescaler);

        while (!GET_BIT(TIFR, TIFR_TOV0))
            ;
        SET_BIT(TIFR, TIFR_TOV0);
        break;
    case TIMER_CHANNEL_1A:
    case TIMER_CHANNEL_1B:
        TCCR1B |= (u8Prescaler);

        while (!GET_BIT(TIFR, TIFR_TOV1))
            ;
        SET_BIT(TIFR, TIFR_TOV1);
        break;
    case TIMER_CHANNEL_2:
        TCCR2 |= (u8Prescaler);

        while (!GET_BIT(TIFR, TIFR_TOV2))
            ;
        SET_BIT(TIFR, TIFR_TOV2);
        break;
    default:
        break;
    }
}

/**
 * @brief This function is used to start the timer in a synchronous mode (blocking) in CTC mode
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u8Prescaler The Timer prescaler to be used @see timer_prescaler
 * @param[in] u32Delay The delay
 */
STATIC void MTIMER_vStartTimerCTC(u8_t u8Channel, u8_t u8Prescaler, u32_t u32Delay)
{
    switch (u8Channel)
    {
    case TIMER_CHANNEL_0:
        TCCR0 |= (u8Prescaler);

        while (u32Delay--)
        {
            while (!GET_BIT(TIFR, TIFR_OCF0))
                ;
            SET_BIT(TIFR, TIFR_OCF0);
        }
        break;
    case TIMER_CHANNEL_1A:
    case TIMER_CHANNEL_1B:
        TCCR1B |= (u8Prescaler);

        while (u32Delay--)
        {
            while (!GET_BIT(TIFR, TIFR_OCF1A))
                ;
            SET_BIT(TIFR, TIFR_OCF1A);
        }
        break;
    case TIMER_CHANNEL_2:
        TCCR2 |= (u8Prescaler);

        while (u32Delay--)
        {
            while (!GET_BIT(TIFR, TIFR_OCF2))
                ;
            SET_BIT(TIFR, TIFR_OCF2);
        }
        break;
    default:
        break;
    }
}

/**
 * @brief This function is used to set the initial value of TCNTn register in normal mode
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u32InitialValue The initial value to be set in the TCNTn register
 * @note This function should be used only in normal mode
 * @private Internal function
 */
STATIC void MTIMER_vSetInitialNormalModeValue(u8_t u8Channel, u16_t u16InitialValue)
{
    switch (u8Channel)
    {
    case TIMER_CHANNEL_0:
        TCNT0 = u16InitialValue;
        break;
    case TIMER_CHANNEL_1A:
    case TIMER_CHANNEL_1B:
        TCNT1 = u16InitialValue;
        break;
    case TIMER_CHANNEL_2:
        TCNT2 = u16InitialValue;
        break;
    default:
        break;
    }
}

/**
 * @brief This function is used to set the initial value of OCn register in CTC mode
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u16InitialValue The initial value to be set in the OCn register
 * @note This function should be used only in CTC mode
 * @private Internal function
 */
STATIC void MTIMER_vSetInitialCTCModeValue(u8_t u8Channel, u16_t u16InitialValue)
{
    MTIMER_vSetInitialNormalModeValue(u8Channel, 0);

    switch (u8Channel)
    {
    case TIMER_CHANNEL_0:
        OCR0 = u16InitialValue;
        break;
    case TIMER_CHANNEL_1A:
    case TIMER_CHANNEL_1B:
        OCR1A = u16InitialValue;
        break;
    case TIMER_CHANNEL_2:
        OCR2 = u16InitialValue;
        break;
    default:
        break;
    }
}

/**
 * @brief This function is used to initiate the timer with a certain mode
 * @param[in] u8Channel The Timer channel to be used @see timer_channels
 * @param[in] u8Mode The Timer mode to be used @see timer_modes
 */
STATIC void MTIMER_vInit(u8_t u8Channel, u8_t u8Mode)
{
    MTIMER_vStopTimer(u8Channel);

    switch (u8Channel)
    {
    case TIMER_CHANNEL_0:
        TCCR0 = u8Mode;
        SET_BIT(TIMSK, TIMSK_OCIE0);
        break;
    case TIMER_CHANNEL_1A:
    case TIMER_CHANNEL_1B:
        switch (u8Mode)
        {
        case TIMER_MODE_NORMAL:
            TCCR1A = 0;
            TCCR1B = 0;
            SET_BIT(TIMSK, TIMSK_TOIE1);
            break;
        case TIMER_MODE_CTC:
            TCCR1A = 0;
            TCCR1B = 0x08;
            SET_BIT(TIMSK, ((u8Channel == TIMER_CHANNEL_1A) ? TIMSK_OCIE1A : TIMSK_OCIE1B));
            break;
        default:
            break;
        }
        break;
    case TIMER_CHANNEL_2:
        TCCR2 = u8Mode;
        SET_BIT(TIMSK, TIMSK_OCIE2);
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

void MTIMER_vDelayUS(u8_t u8Channel, u32_t u32Delay)
{
    u8_t L_u8Prescaler = ((u8Channel == TIMER_CHANNEL_2) ? TIMER_PRESCALER_TIMER2_8 : TIMER_PRESCALER_TIMER01_8);
    MTIMER_vInit(u8Channel, TIMER_MODE_CTC);
    MTIMER_vSetInitialCTCModeValue(u8Channel, 2);
    MTIMER_vStartTimerCTC(u8Channel, L_u8Prescaler, u32Delay);
    MTIMER_vStopTimer(u8Channel);
}

void MTIMER_vDelayMS(u8_t u8Channel, u32_t u32Delay)
{
    u8_t L_u8Prescaler = ((u8Channel == TIMER_CHANNEL_2) ? TIMER_PRESCALER_TIMER2_64 : TIMER_PRESCALER_TIMER01_64);
    MTIMER_vInit(u8Channel, TIMER_MODE_CTC);
    MTIMER_vSetInitialCTCModeValue(u8Channel, 250);
    MTIMER_vStartTimerCTC(u8Channel, L_u8Prescaler, u32Delay);
    MTIMER_vStopTimer(u8Channel);
}

void MTIMER_vDelaySec(u8_t u8Channel, u32_t u32Delay)
{
    u8_t L_u8Prescaler = ((u8Channel == TIMER_CHANNEL_2) ? TIMER_PRESCALER_TIMER2_1024 : TIMER_PRESCALER_TIMER01_1024);
    MTIMER_vInit(u8Channel, TIMER_MODE_CTC);

    switch (u8Channel)
    {
    case TIMER_CHANNEL_0:
    case TIMER_CHANNEL_2:
        MTIMER_vSetInitialCTCModeValue(u8Channel, 125);

        for (u8_t u8LoopCounter = 0; u8LoopCounter < 125; u8LoopCounter++)
        {
            MTIMER_vStartTimerCTC(u8Channel, L_u8Prescaler, u32Delay);
        }
        break;
    case TIMER_CHANNEL_1A:
    case TIMER_CHANNEL_1B:
        MTIMER_vSetInitialCTCModeValue(TIMER_CHANNEL_1A, 15625);
        MTIMER_vStartTimerCTC(TIMER_CHANNEL_1A, L_u8Prescaler, u32Delay);
        break;
    default:
        break;
    }

    MTIMER_vStopTimer(u8Channel);
}

void MTIMER_vDelay(u8_t u8Channel, u8_t u8Mode, u8_t u8Prescaler, u16_t u16InitalValue, u32_t u32Delay)
{
    MTIMER_vInit(u8Channel, u8Mode);

    switch (u8Mode)
    {
    case TIMER_MODE_NORMAL:
        MTIMER_vSetInitialNormalModeValue(u8Channel, u32Delay);
        MTIMER_vStartTimerNormal(u8Channel, u8Prescaler);
        break;
    case TIMER_MODE_CTC:
        MTIMER_vSetInitialCTCModeValue(u8Channel, u16InitalValue);
        MTIMER_vStartTimerCTC(u8Channel, u8Prescaler, u32Delay);
        break;
    default:
        break;
    }

    MTIMER_vStopTimer(u8Channel);
}