/**
 * @file EXTI_interface.h
 * @author Mohamed Alaa
 * @brief This file contains the interface information regarding the EXTI peripheral
 * @version 1.0
 * @date 2023-01-25
 * @copyright Copyright (c) 2023
 */
#ifndef _EXTI_INTERFACE_H_
#define _EXTI_INTERFACE_H_

#include "../../LIB/LSTD_TYPES.h"
#include "../../LIB/LSTD_COMPILER.h"

/**
 * @defgroup external_interrupts_pins External Interrupt Pins
 * @{
 */

/**
 * @def EXTI_PIN_INT0
 * @brief External interrupt pin 0
 */
#define EXTI_PIN_INT0 (6)

/**
 * @def EXTI_PIN_INT1
 * @brief External interrupt pin 1
 */
#define EXTI_PIN_INT1 (7)

/**
 * @def EXTI_PIN_INT2
 * @brief External interrupt pin 2
 */
#define EXTI_PIN_INT2 (5)

/** @} */

/**
 * @defgroup external_interrupts_modes External Interrupt Modes
 * @{
 */

/**
 * @def EXTI_MODES_LOW
 * @brief Generate interrupt on low level
 */
#define EXTI_MODES_LOW (0)

/**
 * @def EXTI_MODES_LEVEL_CHANGE
 * @brief Generate interrupt on a logical change
 */
#define EXTI_MODES_LEVEL_CHANGE (1)

/**
 * @def EXTI_MODES_FALLING_EDGE
 * @brief Generate interrupt on a falling edge
 */
#define EXTI_MODES_FALLING_EDGE (2)

/**
 * @def EXTI_MODES_RISING_EDGE
 * @brief Generate interrupt on a rising edge
 */
#define EXTI_MODES_RISING_EDGE (3)

/** @} */

/**
 * @brief Enable an external interrupt on a certain pin
 *
 * @param[in] L_u8ExtnalInterruptPin External interrupt pin to enable the interrupt on
 * @param[in] L_u8InterruptMode Recognize external interrupt on a certain interrupt mode occurs
 * @param[in] P_vExtIntCallback A callback pointer-to-function to be called when an interrupt occurs on the provided pins
 * @see external_interrupts_pins
 * @see external_interrupts_modes
 */
void MEXTI_vEnableExternalInterrupt(u8_t L_u8ExtnalInterruptPin, u8_t L_u8InterruptMode, P2FUNC(void, P_vExtIntCallback)(void));

/**
 * @brief Disable an external interrupt on a certain pin
 *
 * @param[in] L_u8ExtnalInterruptPin external interrupt pin to disable the interrupt on
 * @see external_interrupts_pins
 */
void MEXTI_vDisableExternalInterrupt(u8_t L_u8ExtnalInterruptPin);

#endif // _EXTI_INTERFACE_H_
