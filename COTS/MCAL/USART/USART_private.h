/**
 * @file USART_private.h
 * @author Mohamed Alaa
 * @brief This file contains the private information of the USART driver
 * @version 1.0
 * @date 2023-02-08
 * @copyright Copyright (c) 2023
 */

#ifndef USART_PRIVATE_H_
#define USART_PRIVATE_H_

#include "../../LIB/LSTD_HW_REGS.h"

/**
 * @defgroup usart_registers USART Registers
 * @brief This section contains the USART Registers
 * @{
 */

/**
 * @def UDR
 * @brief USART I/O Data Register (UDR)
 */
#define UDR REGISTER_U8(0x2C)

/**
 * @def UCSRA
 * @brief USART Control and Status Register A (UCSRA)
 */
#define UCSRA REGISTER_U8(0x2B)

/**
 * @def UCSRB
 * @brief USART Control and Status Register B (UCSRB)
 */
#define UCSRB REGISTER_U8(0x2A)

/**
 * @def UCSRC
 * @brief USART Control and Status Register C (UCSRC)
 */
#define UCSRC REGISTER_U8(0x40)

/**
 * @def UBRRH
 * @brief USART Baud Rate Register High (UBRRH)
 */
#define UBRRH REGISTER_U8(0x40)

/**
 * @def UBRRL
 * @brief USART Baud Rate Register Low (UBRRL)
 */
#define UBRRL REGISTER_U8(0x29)

/** @} */

#endif // USART_PRIVATE_H_