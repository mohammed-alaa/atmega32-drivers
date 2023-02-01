/**
 * @file EXTI_private.h
 * @author Mohamed Alaa
 * @brief This file contains the private information regarding the EXTI peripheral
 * @version 1.0
 * @date 2023-01-25
 * @copyright Copyright (c) 2023
 */
#ifndef _EXTI_PRIVATE_H_
#define _EXTI_PRIVATE_H_

#include "../../LIB/LSTD_HW_REGS.h"

/**
 * @defgroup exti_registers EXTI Registers
 * @{
 */

/**
 * @def MCUCR
 * @brief MCU Control Register
 */
#define MCUCR REGISTER_U8(0x55)

/**
 * @def MCUCSR
 * @brief MCU Control and Status Register
 */
#define MCUCSR REGISTER_U8(0x54)

/**
 * @def GICR
 * @brief General Interrupt Control Register
 */
#define GICR REGISTER_U8(0x5B)

/**
 * @def GIFR
 * @brief General Interrupt Flag Register
 */
#define GIFR REGISTER_U8(0x5A)

/** @} */

#endif // _EXTI_PRIVATE_H_
