/**
 * @file TIMER_private.h
 * @author Mohamed Alaa
 * @brief This file contains the private information of the Timer driver
 * @version 1.0
 * @date 2023-01-29
 * @copyright Copyright (c) 2023
 */

#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

#include "../../LIB/LSTD_HW_REGS.h"

/**
 * @defgroup timer_0_registers Timer 0 Registers
 * @brief This section contains the Timer 0 Registers
 * @{
 */

/**
 * @def TCCR0
 * @brief Timer/Counter 0 Control Register
 */
#define TCCR0 REGISTER_U8(0x53)

/**
 * @def TCNT0
 * @brief Timer/Counter 0 Register
 */
#define TCNT0 REGISTER_U8(0x52)

/**
 * @def OCR0
 * @brief Timer/Counter 0 Output Compare Register
 */
#define OCR0 REGISTER_U8(0x5C)

/** @} */

/**
 * @defgroup general_timer_registers General Timer Registers
 * @brief This section contains the General Timer Registers that are common to all timers
 * @{
 */

/**
 * @def TIMSK
 * @brief Timer/Counter Interrupt Mask Register
 */
#define TIMSK REGISTER_U8(0x59)

/**
 * @def TIFR
 * @brief Timer/Counter Interrupt Flag Register
 */
#define TIFR REGISTER_U8(0x58)

/** @} */

/**
 * @defgroup timer_1_registers Timer 1 Registers
 * @brief This section contains the Timer 1 Registers
 * @{
 */

/**
 * @def TCCR1
 * @brief Timer/Counter 1 Control Register
 */
#define TCCR1 REGISTER_U16(0x4E)

/**
 * @def TCNT1
 * @brief Timer/Counter 1 Register 
 */
#define TCNT1 REGISTER_U16(0x4C)

/**
 * @def OCR1A
 * @brief Timer/Counter 1 Output Compare Register A
 */
#define OCR1A REGISTER_U16(0x4A)

/**
 * @def OCR1B
 * @brief Timer/Counter 1 Output Compare Register B
 */
#define OCR1B REGISTER_U16(0x48)

/**
 * @def ICR1
 * @brief Timer/Counter 1 Input Capture Register
 */
#define ICR1 REGISTER_U16(0x46)

/** @} */

/**
 * @defgroup timer_2_registers Timer 2 Registers
 * @brief This section contains the Timer 2 Registers
 * @{
 */

/**
 * @def TCCR2
 * @brief Timer/Counter 2 Control Register
 */
#define TCCR2 REGISTER_U8(0x45)

/**
 * @def TCNT2
 * @brief Timer/Counter 2 Register
 */
#define TCNT2 REGISTER_U8(0x44)

/**
 * @def OCR2
 * @brief Timer/Counter 2 Output Compare Register
 */
#define OCR2 REGISTER_U8(0x43)

/**
 * @def ASSR
 * @brief Asynchronous Status Register
 */
#define ASSR REGISTER_U8(0x42)

/** @} */

#endif /* TIMER_PRIVATE_H_ */