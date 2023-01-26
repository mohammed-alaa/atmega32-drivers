/**
 * @file ADC_program.c
 * @author Mohamed Alaa
 * @brief This file contains the source code of the ADC peripheral
 * @version 1.0
 * @date 2023-01-26
 * @copyright Copyright (c) 2023
 */

/* Includes */
#include "../../LIB/LSTD_TYPES.h"
#include "../../LIB/LSTD_BITMATH.h"
#include "ADC_private.h"
#include "ADC_interface.h"
#include "ADC_config.h"

void MADC_vInit(void)
{
    ADMUX = (ADC_REF_SELECTION | ADC_RESULT_ADJUSTMENT);
    ADCSRA = 0;
}

u16_t MADC_u16ReadChannel(u8_t u8ChannelSelection, u8_t u8ChannelPrescaler)
{
    u16_t L_u16Result = 0;
    ADMUX |= ((ADMUX & 0xE0) | u8ChannelSelection);
    ADCSRA = (0xC0 | ADC_PRESCALER_16);

    while (GET_BIT(ADCSRA, 6))
    {
        /* Wait until the conversion is complete */
    }

    SET_BIT(ADCSRA, 4);

#if ADC_RESULT_ADJUSTMENT == ADC_RESULT_ADJUSTMENT_RIGHT
    L_u16Result = (u16_t)ADCL;
    L_u16Result |= (u16_t)(ADCH << 8);
#elif ADC_RESULT_ADJUSTMENT == ADC_RESULT_ADJUSTMENT_LEFT
    L_u16Result = (u16_t)ADCH;
    L_u16Result |= (u16_t)(ADCL << 8);
#endif

    ADCSRA = 0;
    return L_u16Result;
}