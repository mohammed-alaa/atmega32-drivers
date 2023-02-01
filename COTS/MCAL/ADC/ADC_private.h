/**
 * @file ADC_private.h
 * @author Mohamed Alaa
 * @brief This file contains the private information regarding the ADC peripheral
 * @details This file contains the register definitions of the ADC peripheral
 * @version 1.0
 * @date 2023-01-26
 * @copyright Copyright (c) 2023
 */

#ifndef _ADC_PRIVATE_H_
#define _ADC_PRIVATE_H_

#include "../../LIB/LSTD_HW_REGS.h"

/************************************************************************/
/*                          Interfacing macros                          */
/************************************************************************/

/**
 * @defgroup adc_registers ADC Registers
 * @{
 */

/**
 * @def ADMUX
 * @brief ADC Multiplexer Selection Register
 */
#define ADMUX REGISTER_U8(0x27)

/**
 * @def ADCSRA
 * @brief ADC Control and Status Register A
 */
#define ADCSRA REGISTER_U8(0x26)

/**
 * @def ADCH
 * @brief ADC Data Register High
 */
#define ADCH REGISTER_U8(0x25)

/**
 * @def ADCL
 * @brief ADC Data Register Low
 */
#define ADCL REGISTER_U8(0x24)

/** @} */

#endif // _ADC_PRIVATE_H_